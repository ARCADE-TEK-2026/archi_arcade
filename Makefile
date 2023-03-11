clean:
	rm -rf documentation/html
	rm -rf documentation/latex

fclean: clean

doxygen:
	doxygen ./Doxyfile
	touch documentation/html/.nojekyll
