CXXFLAGS = -std=c++11
CC = g++

VECTOR3D_LIBS = Vector3D.o

TARGET = test_vector3d

all: $(TARGET)

test_vector3d: test_vector3d.cc $(VECTOR3D_LIBS)

.PHONY: clean

clean:
	rm -f $(TARGET) *.o *~
