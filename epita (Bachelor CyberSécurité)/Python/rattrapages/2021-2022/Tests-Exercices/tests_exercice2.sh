#! /bin/sh

echo "##############"
echo "# EXERCICE 2 #"
echo "##############"

MAIN_PROGRAM=my_calc.py

if [ ! -f "${MAIN_PROGRAM}" ]; then
	echo "!!!!!!!!!!!!!!!!!!!!!"
	echo "! NO PROGRAM FOUND! !"
	echo "! EXERCICE 2 FAILED !"
	echo "!!!!!!!!!!!!!!!!!!!!!"
	exit 254
fi

CALL_PROGRAM="/usr/bin/python3.8 ${MAIN_PROGRAM}"

# Mute tests (test if write on STDOUT exclusively)


# Normal run tests
${CALL_PROGRAM} 42 13 +

${CALL_PROGRAM} 42 13 -

${CALL_PROGRAM} 42 13 /

${CALL_PROGRAM} 42 13 *

${CALL_PROGRAM} 42 13 %


# Error run tests

# Case 0
${CALL_PROGRAM} 42 0 +

${CALL_PROGRAM} 42 0 -

${CALL_PROGRAM} 42 0 /

${CALL_PROGRAM} 42 0 *

#${CALL_PROGRAM} 42 0 %

# Calling problems
${CALL_PROGRAM}

${CALL_PROGRAM} 42

${CALL_PROGRAM} 42 1

${CALL_PROGRAM}

# Parameters problems
${CALL_PROGRAM} C 42 3

${CALL_PROGRAM} 42 D 2

${CALL_PROGRAM} 42 1 B

${CALL_PROGRAM} 42 0 A

${CALL_PROGRAM} E 0 0

echo "#####################"
echo "# ENDING EXERCICE 2 #"
echo "#####################"
