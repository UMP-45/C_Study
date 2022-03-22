XXC = g++
XXFLAGS= -std=c++17 -static -m64 -Wall -Os
PROG = run
CODE = info.cpp


build: $(PROG)
$(PROG): $(CODE);	$(XXC) $(XXFLAGS) -o $@ $^

start: $(PROG);	./$^

clean: ;	rm -f $(PROG)

# CC=gcc
# XXC=g++
# FLAGS= -std=c99
# XXFLAGS= -std=c++17 -static -Wall -Os

# NAME=run
# HEAD=
# CODE=MatrixTran.cpp
# EDITOR=nano

# build : $(NAME)
# $(NAME) : $(CODE);	$(XXC) $(XXFLAGS) -o $@ $^

# rebuild : ;      $(XXC) $(XXFLAGS) -o $@ $^

# start : $(NAME); ./$^

# edit : $(CODE);	$(EDITOR) $^

# editmk: makefile;	$(EDITOR) $^

# clean : ; rm -f $(NAME)
