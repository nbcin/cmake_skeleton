#!/bin/sh -e
#
# If you change this file, please make a pull request to improve the
# original file:
# https://github.com/jeanguyomarch/cmake_skeleton
#


# No special options: re-create the build/ directory
if [ -d build ]; then
   rm -Rf build;
fi
mkdir -p build
cd build


if [ "x$1" == "x--clean" ]; then

   # ==============================
   # Getopt: ./bootstrap.sh --clean
   # ==============================

   cd ..
   rm -Rf build
   exit 0

elif [ "x$1" == "x--doc" ]; then

   # ============================
   # Getopt: ./bootstrap.sh --doc
   # ============================

   tmp="/tmp/tmp2LqYfht9Ee"
   cmake ..
   make doc
   cp -R doc/html $tmp
   cd ..
   git checkout gh-pages
   rm -Rf doc
   cp -R $tmp doc
   touch .nojekyll
   git add .
   git commit -am "Automatic documentation upload"
   git push origin gh-pages
   git checkout master
   exit 0

fi


# ==================
# Generation options
# ==================

if [ "x$1" == "x" ]; then

   # ===========================================
   # Getopt: ./bootstrap.sh : Default generation
   # ===========================================

   cmake ..

elif [ "x$1" == "x-x" ]; then

   # ============================================
   # Getopt: ./bootstrap.sh -x : Xcode generation
   # ============================================

   cmake -GXcode ..

else

   # ==================================================
   # Getopt: ./bootstrap.sh <junk> : Default generation
   # ==================================================

   echo "*** Unkown parameter [$1] using default cmake" &>2
   cmake ..
fi

