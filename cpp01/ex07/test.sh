#!/bin/sh

make all

replace_test () {
    echo "----------------------------------"
    echo "$ ./replace $1 $2 $3"
    ./replace "$1" "$2" "$3"
    echo "=== ORIGIN"
    cat "$1"
    echo "=== REPLACED"
    cat "$1.replace"
}

replace_test_error() {
    echo "----------------------------------"
    echo "$ ./replace $1 $2 $3"
    ./replace "$1" "$2" "$3"
}

echo '======== BASIC ======='
replace_test files/test1.orig bonjour aurevoir
replace_test files/test2.orig occ many
replace_test files/test3.orig a A
replace_test files/test4.orig a zZz

echo '======== ARGUMENT ERROR ======='
./replace
./replace files/test1.orig
./replace files/test1.orig bonjour aurevoir ye
./replace files/test1.orig bonjour
./replace files/test1.orig '' aurevoir
./replace files/test1.orig bonjour ''
./replace '' bonjour aurevoir

echo '======== FILE ERROR ======='
./replace files/doesnotexist a b

touch files/noperm
chmod 000 files/noperm
./replace files/noperm a b
rm -f files/noperm

touch files/noread
chmod 333 files/noread
./replace files/noread a b
rm -f files/noread

touch files/nowrite.orig.replace
chmod 555 files/nowrite.orig.replace
./replace files/nowrite.orig bonjour aurevoir
rm -f files/nowrite.orig.replace


find files -name '*.replace' -exec rm -f \{\} \;
