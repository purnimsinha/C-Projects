# Introduction

CMake is a cross-platform open-source meta-build system which can build, test and package software. It can be used to support multiple native build environments including make, Apple’s xcode and Microsoft Visual Studio.

This repository includes some example modern CMake configurations which I have picked up when exploring it’s usage for various projects. The examples are laid out in a tutorial like format. 
<hr>

# Requirements
The basic requirements for most examples are:

<li>CMake (download from https://cmake.org/download/)

<li>A c++ compiler (defaults to gcc)

<li>make
 <hr>
  
  # create Cmakefile
  <li> First we have to write some cpp code or c code and write different file like .h .cc like i created files.
  
  <li> After that put all the file in one folder that folder should be your source folder in that folder you have to create one CMakeLists.txt file. this CMakeLists.txt is your script where you are going to write you script to create the makefile.you can check my repository.
  
  <li> After that open your command prompt go to your source folder and create build folder that build folder will be your binary folder.
  and go into that build folder.
  
  <li> After that write '''' cmake -G "Unix Makefiles" .. '''' command it depends on your compiler that which file it can generate use
  "cmake --help" to check that one".
  after that it will create so many binaries files in your build folder and makefile also it will create. 
  
  <li> After it created Makefiles write "make" in you commant prompt you will see you executable files.
  
  "Happy Coding"
