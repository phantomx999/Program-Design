all: googletest

googletest: build
	cd build; cmake --build . --target install

build:
	mkdir -p build
	cd build; cmake ../../../../../googletest -DCMAKE_INSTALL_PREFIX=../../../../build

clean:
	rm -rf build

