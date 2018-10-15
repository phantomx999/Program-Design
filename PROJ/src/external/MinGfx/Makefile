all: MinGfx

MinGfx: build
	cd build; cmake --build . --target install

build: src
	mkdir -p build
	cd build; cmake -DAUTOBUILD_DEPENDENCIES=ON -DAUTOBUILD_EXECUTE_NOW=ON -DCMAKE_BUILD_TYPE=Debug ../src

src:
	git clone https://github.com/ivlab/MinGfx.git src
	cd src; git checkout csci3081

update-src: src
	cd src; git pull

update: update-src MinGfx

clean:
	rm -rf build

clobber: clean
	rm -rf src

