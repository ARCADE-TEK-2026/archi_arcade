clean:
	rm -rf documentation/html
	rm -rf documentation/latex

fclean: clean

uml:
	for file in $$(/bin/ls include); \
			do echo -n '-i include/'$$file" "; done\
		| xargs hpp2plantuml \
		| plantuml -tthtml -pipe > documentation/uml.png

doxygen:
	doxygen ./Doxyfile
	touch documentation/html/.nojekyll
