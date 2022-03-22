CC=gcc
XXC=g++
FLAGS= -std=c99
XXFLAGS= -std=c++14 -static -Wall

NAME=run
HEAD=
CODE=main.cc
EDITOR=nano

build : $(NAME)
$(NAME) : $(CODE);	$(XXC) $(XXFLAGS) -o $@ $^

rebuild : ;      $(XXC) $(XXFLAGS) -o $@ $^

start : $(NAME); ./$^

edit : $(CODE);	$(EDITOR) $^

editmk: makefile;	$(EDITOR) $^

clean : ; rm -f $(NAME)
