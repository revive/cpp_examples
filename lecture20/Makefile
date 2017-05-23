CXXFLAGS = -std=c++11
CC = g++

TARGET = test_student

all: $(TARGET)

test_student: test_student.o student.o

.PHONY: clean

clean:
	rm -f $(TARGET) *.o *~
