#! /bin/sh

echo "##############"
echo "# EXERCICE 4 #"
echo "##############"

MAIN_PROGRAM=my_pintree.py

if [ ! -f "${MAIN_PROGRAM}" ]; then
	echo "!!!!!!!!!!!!!!!!!!!!!"
	echo "! NO PROGRAM FOUND! !"
	echo "! EXERCICE 4 FAILED !"
	echo "!!!!!!!!!!!!!!!!!!!!!"
	exit 254
fi

CALL_PROGRAM="/usr/bin/python3.8 ${MAIN_PROGRAM}"

# Mute tests (test if write on STDOUT exclusively)


# Normal run tests
${CALL_PROGRAM} 0

${CALL_PROGRAM} 1

${CALL_PROGRAM} 2

${CALL_PROGRAM} 3

${CALL_PROGRAM} 4

${CALL_PROGRAM} 5


${CALL_PROGRAM} 42

${CALL_PROGRAM} 43

${CALL_PROGRAM} 44


# Error run tests

# Number of parameters
${CALL_PROGRAM}

${CALL_PROGRAM} 2 1

# Type of parameters
${CALL_PROGRAM} blob

${CALL_PROGRAM} coucou

# Problems mixed
${CALL_PROGRAM} blob coucou

${CALL_PROGRAM} 2 kikoo

${CALL_PROGRAM} pouet 3

echo "#####################"
echo "# ENDING EXERCICE 4 #"
echo "#####################"
