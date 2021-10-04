# C++ Boilerplate
[![Build Status](https://app.travis-ci.com/viveksood97/cpp-boilerplate.svg?branch=master&kill_cache=1)](https://app.travis-ci.com/viveksood97/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/viveksood97/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/viveksood97/cpp-boilerplate?branch=master)
---
# Part I

## Driver 
Vivek Sood \
Github Username: viveksood97


## Navigator
Pratik Acharya \
Github Username: pratik-a99 

# Part II

## Driver 
Naitri Rajyaguru \
Github Username: naitri


## Navigator
Mayank Joshi \
Github Username: mjoshi07 

## UML Diagram
![UML Diagram for the class PIDController](TDD_UML.png "UML") \
[Link to the PDF](https://drive.google.com/file/d/1mB3QGFGTcNCEAUvfmSz2qRmXcQdjdS70/view?usp=sharing)

## Activity Diagram
![Activity Diagram of the PID Code](TDD_activity_diagram.png "Activity Diagram") \
[Link to the PDF](https://drive.google.com/file/d/17HL5u0FMskLM-HcG4wG3E4nzX6cem7cY/view?usp=sharing)

## Discussions (Part 2)
* PID implementation was discussed
* UML was studied
* Activity diagram was requested
* Discusses tests

## To-Do (Part 2)
* Add activity diagram
* Complete implementation
* Update readme
* Include more tests

## Overview
* Test-Drive Development exercise
* [PID controller](https://en.wikipedia.org/wiki/PID_controller) implementation for a new mobile robot product development

## UML
![TDD_UML](https://user-images.githubusercontent.com/31381335/135725968-7dc877d7-7ca4-4102-a571-88e63ccf1c8a.png)


Simple starter C++ project with:

- cmake
- googletest

## Standard install via command-line
```
git clone --recursive https://github.com/viveksood97/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/pid-controller-test
Run program: ./app/pid-controller
```

## Building for code coverage (for assignments beginning in Week 5)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone -b Week5/TDD_Group5_master --recursive https://github.com/viveksood97/cpp-boilerplate
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of cpp-boilerplate

```
cd ~/workspace
mkdir -p boilerplate-eclipse
cd boilerplate-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../cpp-boilerplate/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select "boilerplate-eclipse" directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold boilerplate-eclipse project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the boilerplate-eclipse in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)


## Debug


1. Set breakpoint in source file (i.e. double click in the left margin on the line you want 
the program to break).

2. In Eclipse, right click on the boilerplate-eclipse in Project Explorer, select Debug As -> 
Local C/C++ Application, choose the binaries to run (e.g. shell-app).

3. If prompt to "Confirm Perspective Switch", select yes.

4. Program will break at the breakpoint you set.

5. Press Step Into (F5), Step Over (F6), Step Return (F7) to step/debug your program.

6. Right click on the variable in editor to add watch expression to watch the variable in 
debugger window.

7. Press Terminate icon to terminate debugging and press C/C++ icon to switch back to C/C++ 
perspetive view (or Windows->Perspective->Open Perspective->C/C++).


## Plugins

- CppChEclipse

    To install and run cppcheck in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> cppcheclipse.
    Set cppcheck binary path to "/usr/bin/cppcheck".

    2. To run CPPCheck on a project, right click on the project name in the Project Explorer 
    and choose cppcheck -> Run cppcheck.


- Google C++ Sytle

    To include and use Google C++ Style formatter in Eclipse

    1. In Eclipse, go to Window -> Preferences -> C/C++ -> Code Style -> Formatter. 
    Import [eclipse-cpp-google-style][reference-id-for-eclipse-cpp-google-style] and apply.

    2. To use Google C++ style formatter, right click on the source code or folder in 
    Project Explorer and choose Source -> Format

[reference-id-for-eclipse-cpp-google-style]: https://raw.githubusercontent.com/google/styleguide/gh-pages/eclipse-cpp-google-style.xml

- Git

    It is possible to manage version control through Eclipse and the git plugin, but it typically requires creating another project. If you're interested in this, try it out yourself and contact me on Canvas.


