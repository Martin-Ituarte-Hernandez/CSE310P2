CC=g++
CFLAGS= -std=c++11 -Wall -pedantic -g
SOURCES= prime.cc bts.cc
DEPS= bts.hpp
OBJECTS=$(SOURCES:.cc=.o)
EXECUTABLE=myAppStore

all: $(EXECUTABLE)
	@echo Make has finished.

$(EXECUTABLE): $(OBJECTS)
	$(CC)  $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) -c $*.cc

clean: 
	$(RM) *.o *~ $(EXECUTABLE)