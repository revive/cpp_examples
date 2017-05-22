CXXFLAGS = -std=c++11
CC = g++

LIB = lorentz_vector.o vector_3d.o particle.o photon.o electron.o
TARGET = test_particle

all: $(TARGET)

test_particle: test_particle.o $(LIB)

.PHONY: clean

clean:
	rm -f $(TARGET) *.o *~
