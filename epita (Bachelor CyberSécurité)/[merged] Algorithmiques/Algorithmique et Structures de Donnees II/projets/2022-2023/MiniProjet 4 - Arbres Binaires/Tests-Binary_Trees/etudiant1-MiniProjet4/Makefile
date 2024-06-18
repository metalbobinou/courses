include Makefile.rules

CC=gcc
CFLAGS=-W -Wall -Werror -std=c99 -pedantic

SRC=src
OBJ=obj
SRC_FILE=$(wildcard $(SRC)/*.c)
OBJ_FILE=$(patsubst $(SRC)/%.c,$(OBJ)/%.o,$(SRC_FILE))

TEST=check
TEST_SRC_DIR=$(TEST)/src
TEST_BIN_DIR=$(TEST)/bin
TEST_SRC_FILE=$(wildcard $(TEST_SRC_DIR)/*.c)
TEST_BIN_FILE=$(patsubst $(TEST_SRC_DIR)/%.c,$(TEST_BIN_DIR)/%,$(TEST_SRC_FILE))

MY_NAME=valentin.cudey
PROJET_NAME=MiniProjet4
FOLDER_NAME=$(MY_NAME)-$(PROJET_NAME)
TAR_NAME=$(MY_NAME)-$(PROJET_NAME).tar.bz2

LIB_STATIC=libmybintree.a
LIB_SHARED=libmybintree.so



all: libmybintree



clean:
	rm -rf $(OBJ)

distclean: clean
	rm -rf $(TEST_BIN_DIR)
	rm -f $(TAR_NAME) 
	rm -f $(LIB_STATIC)
	rm -f $(LIB_SHARED)



dist: distclean
	./configure clean
	tar cvjf $(TAR_NAME) ../$(FOLDER_NAME)



$(TEST_BIN_DIR):
	mkdir $@

$(TEST_BIN_DIR)/%: $(TEST_SRC_DIR)/%.c | $(TEST_BIN_DIR)
	$(CC) $(CFLAGS_DEBUG_FLAGS) -Isrc/ $< -o $@ -L. -l:$(LIB_STATIC)

check: libmybintree $(TEST_BIN_FILE)
	./check/check.sh



libmybintree: static shared


$(OBJ):
	mkdir $@

$(OBJ_FILE): $(OBJ)/%.o: $(SRC)/%.c | $(OBJ)  
	$(CC) $(CFLAGS) -c $< -o $@


$(LIB_STATIC): $(OBJ_FILE)
	ar rcs $@ $^

static: $(LIB_STATIC)


$(LIB_SHARED): $(OBJ_FILE)
	$(CC) $^ -fPIC -shared -o $@

shared: $(LIB_SHARED)



.PHONY: clean distclean dist check libmybintree static shared
