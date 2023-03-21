EXTRA_PARAMS_PLANTUML 	= 	plantuml
PLANTUML_PUML			=	uml.puml
PLANTUML_TARGET			=	$(PLANTUML_PUML:%.puml=%.svg)

SOURCE		=	$(shell find include -name "*.hpp" -print)
INC_HEADER	=	$(addprefix -I , $(shell find include -type d -print))

INC_UML		=	$(addprefix -i , $(SOURCE))

clean:
	rm -rf tests/dawa

clean-doxygen:
	rm -rf documentation/docs
	rm -rf documentation/latex

clean-uml:
	rm -rf documentation/${PLANTUML_TARGET}
	rm -rf ${PLANTUML_PUML}

fclean: clean-doxygen clean-uml clean
	rm -rf cmake-build-debug
	rm -rf CMakeCache.txt
	rm -rf CMakeFiles

uml: clean-uml
	hpp2plantuml -d ${INC_UML} -o ${PLANTUML_PUML}
	${EXTRA_PARAMS_PLANTUML} -tsvg ${PLANTUML_PUML}
	mv ${PLANTUML_TARGET} documentation/${PLANTUML_TARGET}

doxygen: clean-doxygen
	doxygen ./Doxyfile
	touch documentation/docs/.nojekyll

tests-run:
	g++ ./tests/test-includes.cpp ${INC_HEADER} -std=c++20 -o tests/dawa
	./tests/dawa

.clang-format:
	curl -Lo .clang-format "https://raw.githubusercontent.com/raphaelMrci/clang-format-Epitech/main/.clang-format"

format: .clang-format
	clang-format --style=file -i ${SOURCE}
