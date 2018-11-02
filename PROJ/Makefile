all: flashphoto tests 

check-style:
	cd src/flashphoto; make check-style

check-style-cse:
	cd src/flashphoto; make check-style-cse

flashphoto: mingfx
	cd src/flashphoto; make -j

tests: mingfx
	cd src/tests; make -j

mingfx:
	cd src/external/MinGfx; make

clean:
	rm -rf build

clobber: clean
	cd src/external/MinGfx; make clobber
	cs src/external/googletest; make clean
