CXXFLAGS = -std=c++11
CC = g++

VECTOR3D_LIBS = Vector3D.o

PARTICLE_LIBS = Particle.o

TARGET = test_vector3d test_particle test_type

all: $(TARGET)

test_vector3d: test_vector3d.o $(VECTOR3D_LIBS)

test_particle: test_particle.o $(VECTOR3D_LIBS) $(PARTICLE_LIBS)

.PHONY: clean

clean:
	rm -f $(TARGET) *.o *~
