CXXFLAGS = -std=c++11
OBJ = Vector3D.o
TARGETS = vector_length vector_scale vector_func
CC=g++
all: $(TARGETS)
vector_length: vector_length.o $(OBJ)
vector_scale: vector_scale.o $(OBJ)
vector_func: vector_func.o $(OBJ)
%.o : %.cc
	$(CXX) -c $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGETS) *.o *~
