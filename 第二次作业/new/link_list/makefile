XXC = g++
XXFLAGS = -std=c++17 -static -m64 -Wall -Os
PROG = run
CODE = link_list.cpp


build: $(PROG)
$(PROG): $(CODE);	$(XXC) $(XXFLAGS) -o $@ $^

start: $(PROG);	./$^

clean: ;	rm -f $(PROG)