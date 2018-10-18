all: flashphoto tests

check-style:
	cd src/flashphoto; make check-style

check-style-cse:
	cd src/flashphoto; make check-style-cse

flashphoto:
	cd src/flashphoto; make

tests:
	cd src/tests; make

clean:
	rm -rf build

clobber: clean
	cd src/external/MinGfx; make clobber
	cs src/external/googletest; make clean
