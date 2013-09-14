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
* To clean the build directory: `./bootstrap.sh --clean`

Push documentation online
=========================

**Only if you are using git with github.**


* Create a github page for your project: https://help.github.com/articles/creating-pages-with-the-automatic-generator
* Do the six steps, and in your git(hub) repository, enter: `git fetch origin`.
* Go to your master branch (`git checkout master`) and commit everything.
* Run `./bootstrap.sh --doc`

License
=======

See LICENSE.md

