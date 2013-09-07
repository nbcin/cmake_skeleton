#!/bin/sh -e

err() {
   echo "*** $@" &>2
}

prj=
echo "Project name:"
read prj


PRJ=`echo $prj | tr '[:lower:]' '[:upper:]'`
prj=`echo $prj | tr '[:upper:]' '[:lower:]'`


val=
echo "[$prj], please confirm [y/n]"
read val
if [ "x$val" != "xy" ] && [ "x$val" != "xY" ]; then
   err "Aborting"
   exit 1
fi

if [ -d "../$prj" ]; then
   err "Directory [../$prj] already exists"
   exit 1
fi

mkdir -p ../$prj
cp -R * ../$prj/
cd ../$prj

#rm -Rf .git
#mv .gitignore gitignore

dirs=". bin edje doc examples lib"
for d in $dirs; do
   perl -p -i -e "s/hello/$prj/g" $d/*
   perl -p -i -e "s/HELLO/$PRJ/g" $d/*
done

mv lib/hello.h lib/${prj}.h
mv lib/hello.c lib/${prj}.c
mv lib/hello.pc.in lib/${prj}.pc.in

