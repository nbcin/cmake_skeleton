#!/bin/sh -e


if [ -d build ]; then
   rm -Rf build;
fi

mkdir -p build
cd build

if [ "x$1" == "x--doc" ]; then
   tmp="/tmp/tmp2LqYfht9Ee"
   cmake ..
   make doc
   mkdir $tmp
   cp -R doc/html $tmp/

   exit 0
fi

if [ "x$1" == "x" ]; then
   cmake ..
elif [ "x$1" == "x-x" ]; then
   cmake -GXcode ..
else
   echo "*** Unkown parameter [$1] using default cmake" &>2
   cmake ..
fi

