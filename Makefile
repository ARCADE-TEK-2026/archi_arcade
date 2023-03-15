EXTRA_PARAMS_PLANTUML = plantuml

clean:
	rm -rf tests/dawa

clean-doxygen:
	rm -rf documentation/html
	rm -rf documentation/latex

clean-uml:
	rm -rf documentation/uml.png

fclean: clean-doxygen clean-uml clean

uml: clean-uml
	for file in $$(/bin/ls include); \
			do echo -n '-i include/'$$file" "; done\
		| xargs hpp2plantuml \
		| ${EXTRA_PARAMS_PLANTUML} -pipe > documentation/uml.png

doxygen: clean-doxygen
	doxygen ./Doxyfile
	touch documentation/docs/.nojekyll

tests-run:
	g++ ./tests/dawa.cpp -I include -o tests/dawa
	./tests/dawa
