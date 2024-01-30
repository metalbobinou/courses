#! /bin/sh

echo "##############"
echo "# EXERCICE 3 #"
echo "##############"

MAIN_PROGRAM=my_transpose.py

if [ ! -f "${MAIN_PROGRAM}" ]; then
	echo "!!!!!!!!!!!!!!!!!!!!!"
	echo "! NO PROGRAM FOUND! !"
	echo "! EXERCICE 3 FAILED !"
	echo "!!!!!!!!!!!!!!!!!!!!!"
	exit 254
fi

CALL_PROGRAM="/usr/bin/python3.8 ${MAIN_PROGRAM}"

# Mute tests (test if write on STDOUT exclusively)


# Normal run tests
${CALL_PROGRAM} Files_Exercice3/file0.txt

${CALL_PROGRAM} Files_Exercice3/file1.txt

${CALL_PROGRAM} Files_Exercice3/file2.txt

${CALL_PROGRAM} Files_Exercice3/file3.txt

${CALL_PROGRAM} Files_Exercice3/file4.txt

${CALL_PROGRAM} Files_Exercice3/file5.txt

${CALL_PROGRAM} Files_Exercice3/file6.txt

${CALL_PROGRAM} Files_Exercice3/file7.txt

${CALL_PROGRAM} Files_Exercice3/file8.txt

${CALL_PROGRAM} Files_Exercice3/file9.txt

${CALL_PROGRAM} Files_Exercice3/file10.txt

${CALL_PROGRAM} Files_Exercice3/file11.txt


# Error run tests

${CALL_PROGRAM} Files_Exercice3/empty.txt

${CALL_PROGRAM} Files_Exercice3/file_error1.txt

echo "#####################"
echo "# ENDING EXERCICE 3 #"
echo "#####################"
