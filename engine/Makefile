include ../Makefile.common

HEADERS=$(wildcard include/*.h) Makefile
OBJECTS=engine.o ui.o object.o tic.o

.PHONY : all clean

all : $(OBJECTS)

$(OBJECTS) : %.o : %.cxx $(HEADERS)
	$(CXXCOMP) $@ $<

clean :
	rm -f *.o
