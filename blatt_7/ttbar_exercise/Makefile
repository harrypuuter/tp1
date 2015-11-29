
cflags:=-I. -I$(shell root-config --incdir)

iflags:=$(shell root-config --ldflags) $(shell root-config --libs) -lReflex -lGenVector -lCintex

RunTTBar: RunTTBar.cc tmp/classes.o
	$(CXX) $+ $(cflags) $(iflags) -o $@

tmp/classes.o: tmp/classes.cc
	$(CXX) $+ $(cflags) -c -o $@

clean:
	rm tmp/classes.o
	rm RunTTBar

