#! /bin/sh

echo "##############"
echo "# EXERCICE 1 #"
echo "##############"

MAIN_PROGRAM=is_even.py

if [ ! -f "${MAIN_PROGRAM}" ]; then
	echo "!!!!!!!!!!!!!!!!!!!!!"
	echo "! NO PROGRAM FOUND! !"
	echo "! EXERCICE 1 FAILED !"
	echo "!!!!!!!!!!!!!!!!!!!!!"
	exit 254
fi

CALL_PROGRAM="/usr/bin/python3.8 ${MAIN_PROGRAM}"

# Mute tests (test if write on STDOUT exclusively)


# Normal run tests
${CALL_PROGRAM} 2

${CALL_PROGRAM} 42

${CALL_PROGRAM} 1

${CALL_PROGRAM} 3

${CALL_PROGRAM} 41


${CALL_PROGRAM} 0

${CALL_PROGRAM} 65535


# Error run tests

# Number of parameters
${CALL_PROGRAM}

${CALL_PROGRAM} 2 1

# Type of parameters
${CALL_PROGRAM} gagagaga

${CALL_PROGRAM} 1337b

${CALL_PROGRAM} 13b37

${CALL_PROGRAM} b1337

# Problems mixed
${CALL_PROGRAM} 2 13b37

${CALL_PROGRAM} 2 13b37 3

${CALL_PROGRAM} 13b37 3

echo "#####################"
echo "# ENDING EXERCICE 1 #"
echo "#####################"
