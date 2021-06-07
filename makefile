# if you want to dive into makefiles have a look at:
#	https://makefiletutorial.com/
#	http://www.gnu.org/software/make/manual/make.html

CXX=g++
CPPFLAGS=--std=c++17

DEPS=bintree.hpp lib/catch.hpp
OBJ=main.o bintree.o tests.o

all: clean test

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CPPFLAGS)

gruppea: $(OBJ)
	$(CXX) -o $@ $^ $(CPPFLAGS)

test: gruppea
	# executes all tests
	./gruppea

clean:
	rm -f gruppea
