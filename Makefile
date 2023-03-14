EXTRA_PARAMS_PLANTUML =? plantuml

clean:
	rm -rf documentation/html
	rm -rf documentation/latex

fclean: clean

uml:
	for file in $$(/bin/ls include); \
			do echo -n '-i include/'$$file" "; done\
		| xargs hpp2plantuml \
		| ${EXTRA_PARAMS_PLANTUML} -pipe > documentation/uml.png

doxygen:
	doxygen ./Doxyfile
	touch documentation/docs/.nojekyll
