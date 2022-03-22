CC=gcc
XXC=g++
FLAGS= -std=c99
XXFLAGS= -std=c++17 -static -Wall -Os

NAME=run
HEAD=
CODE=MatrixTran.cpp
EDITOR=nano

build : $(NAME)
$(NAME) : $(CODE);	$(XXC) $(XXFLAGS) -o $@ $^

rebuild : ;      $(XXC) $(XXFLAGS) -o $@ $^

start : $(NAME); ./$^

edit : $(CODE);	$(EDITOR) $^

editmk: makefile;	$(EDITOR) $^

clean : ; rm -f $(NAME)
