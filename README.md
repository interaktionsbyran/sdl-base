# SDL Skeleton
This a simple SDL2 skeleton that compiles on OSX and Ubuntu. It provides a simple comon base for a programming excerise in C++ to be sent to potential hires. 

# Task
This describes requirements.

# Setup
## OSX
1. Install [homebrew](http://brew.sh/).
2. Open terminal and type `brew install sdl2`.

## Ubuntu
1. Open a terminal and install the following packages using `apt-get install`:
	* libsdl2-dev
	* libsdl2-gfx-dev
	* libsdl2-image-dev
	* libsdl2-mixer-dev
	* libsdl2-net-dev
	* libsdl2-ttf-dev
2. You might also need to install `build-essential` if you have not configured your build environment earlier.

# Building
Open a terminal, navigate to the project root and type `make`.

# Running
Simply run the output main file `./main`

# Extending and developing
The make file automatically builds all cpp files in the src directory. To keep things simple simply add your additional source files in this directory. Should you need to extend the make file for whatever reason feel free to do so, but please make sure the changes work on all platforms or do not affect the default target.
