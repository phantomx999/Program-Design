all: imagetools flashphoto mia tests doxy

check-style:
	cd src/imagetools; make check-style
	cd src/flashphoto; make check-style
	cd src/mia; make check-style

check-style-cse:
	cd src/imagetools; make check-style
	cd src/flashphoto; make check-style-cse
	cd src/mia; make check-style

imagetools:
	cd src/imagetools; make -j

flashphoto:
	cd src/flashphoto; make -j

mia:
	cd src/mia; make -j

tests:
	cd src/tests; make -j

doxy:
	doxygen docs/Doxyfile

clean:
	rm -rf build

clobber: clean
	cd src/external/MinGfx; make clobber
	cd src/external/googletest; make clean
