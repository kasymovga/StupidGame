include ../Makefile.common

HEADERS=$(wildcard include/*.h) Makefile
OBJECTS=game.o

.PHONY : all clean

all : $(OBJECTS)

$(OBJECTS) : %.o : %.cxx $(HEADERS)
	$(CXXCOMP) $@ $<

clean :
	rm -f *.o
