CXXFLAGS = -std=c++11
CC = g++

TARGET = call_print call_print_square call_string_func scope_overload default_arguments inline_example constexpr_func call_print2 function_pointer call_print_pointer return_pointer_to_func

all: $(TARGET)

call_print: print_overload.o call_print.o

call_print_square: print_square.o call_print_square.o

call_string_func: string_func.o call_string_func.o

call_print2: print_overload2.o call_print2.o

call_print_pointer: print_overload.o call_print_pointer.o

return_pointer_to_func: return_pointer_to_func.o string_func.o

.PHONY: clean

clean:
	rm -f $(TARGET) *.o *~
