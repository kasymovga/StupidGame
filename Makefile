START_DIR=$(shell pwd)
include Makefile.common
LDFLAGS_SDL=`sdl-config --libs`
CXXLINK=$(CXX) -o

.PHONY: all game engine
HEADERS=$(wildcard game/include/*.h) $(wildcard engine/include/*.h) Makefile
OBJECTS=main.o

all : stupidgame

stupidgame : main.o engine game
	make -C game START_DIR=$(START_DIR)
	make -C engine START_DIR=$(START_DIR)
	$(CXXLINK) $@ $< game/*.o engine/*.o $(LDFLAGS_SDL)

$(OBJECTS) : %.o : %.cxx $(HEADERS)
	$(CXXCOMP) $@ $<

clean :
	make -C game clean
	make -C engine clean
	rm -f *.o stupidgame
