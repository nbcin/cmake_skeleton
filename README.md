cmake skeleton
==============

A skeleton for a cmake project

Create a project from skeleton
==============================

* `./create_project.sh`
* Enter your project name (it will be converted to lowercases). Avoid digits and special characters.
* Press `Enter` to confirm
* Press `y` or `Y` to confirm your project name
* Your project is in the parent working directory

Build
=====

* Unix Makefiles: `./bootstrap.sh`
* Xcode project: `./bootstrap.sh -x`

To add options to `bootstrap.sh`: http://www.cmake.org/Wiki/CMake_Generator_Specific_Information


* To build the documentation: `make doc`
* To build the Edje themes: `make edje`


License
=======

See LICENSE.md

