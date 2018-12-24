CC = g++ 
CPPFLAGS = -std=c++17
LDLIBS = -lboost_system -lboost_filesystem

all: cleanfiles
cleanfiles: cleanfiles.o filesclean.o

filesclean.o: filesclean.cpp filesclean.hpp

clean:
	-rm -rf cleanfiles filesclean.o cleanfiles.o
