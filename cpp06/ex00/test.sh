#!/bin/sh

convert_test () {
    echo "$ ./convert $1"
    ./convert "$1"
    echo '-------------------------------------------------'
}

convert_test ''
convert_test '    '
convert_test '   1'
convert_test '1   '
convert_test ' 1  '
convert_test '- 1'

echo '=================================== CHAR  ==================='
convert_test "'a'"
convert_test "'A'"
convert_test "' '"
convert_test "'~'"
convert_test "'.'"
convert_test "'"
convert_test "''"

echo '=================================== INT   ==================='
convert_test 0
convert_test 5
convert_test 70
convert_test -1
convert_test -0
convert_test -70
convert_test +70
convert_test  2147483647
convert_test -2147483648
convert_test  2147483648
convert_test -2147483649

echo '=================================== FLOAT  =================='
convert_test '0.0f'
convert_test '1.0f'
convert_test '0.1f'
convert_test '3333.1f'
convert_test '1.3333f'
convert_test '.f'
convert_test '.1f'
convert_test '1.f'
convert_test '1..1f'
convert_test 'f'
convert_test '0f'
convert_test '1f'
convert_test '33f'
convert_test '-33f'
convert_test '-33.45f'
convert_test '+33f'
convert_test '+33.45f'
convert_test 'inff'
convert_test '+inff'
convert_test '-inff'
convert_test 'nanf'
convert_test '-nanf'

echo '=================================== DOUBLE =================='
convert_test '0.0'
convert_test '1.0'
convert_test '0.1'
convert_test '3333.1'
convert_test '1.3333'
convert_test '.'
convert_test '.1'
convert_test '1.'
convert_test '1..1'
convert_test '0'
convert_test '1'
convert_test '33'
convert_test '-33'
convert_test '-33.45'
convert_test '+33'
convert_test '+33.45'
convert_test 'inf'
convert_test '+inf'
convert_test '-inf'
convert_test 'nan'
convert_test '-nan'
