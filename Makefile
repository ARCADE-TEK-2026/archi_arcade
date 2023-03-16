EXTRA_PARAMS_PLANTUML = plantuml

SOURCE		=	$(shell find include -name "*.hpp" -print)

INC_UML		=	$(addprefix -i , $(SOURCE))

clean:
	rm -rf tests/dawa

clean-doxygen:
	rm -rf documentation/html
	rm -rf documentation/latex

clean-uml:
	rm -rf documentation/uml.png

fclean: clean-doxygen clean-uml clean
	rm -rf cmake-build-debug
	rm -rf CMakeCache.txt
	rm -rf CMakeFiles


uml: clean-uml
	hpp2plantuml ${INC_UML} \
		| ${EXTRA_PARAMS_PLANTUML} -pipe > documentation/uml.png

doxygen: clean-doxygen
	doxygen ./Doxyfile
	touch documentation/docs/.nojekyll

tests-run:
	g++ ./tests/test-includes.cpp -I include -o tests/dawa
	./tests/dawa

.clang-format:
	curl -Lo .clang-format "https://raw.githubusercontent.com/raphaelMrci/clang-format-Epitech/main/.clang-format"

format: .clang-format
	clang-format --style=file -i ${SOURCE}
