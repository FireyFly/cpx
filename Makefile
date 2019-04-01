.PHONY: all, clean
all: demo

clean:
	rm -f demo cpx.o

cpx.o: src/cpx.cpp
	$(CXX) -g -c -o cpx.o src/cpx.cpp

demo: examples/demo.cpp cpx.o
	$(CXX) -g -o demo examples/demo.cpp cpx.o
