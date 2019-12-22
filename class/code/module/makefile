.PHONY: all, clean, preprocess, memcheck

TARGET := module.out
SRC := $(wildcard *.c)
OBJ := $(SRC:%.c=%.o)
PRE := $(SRC:%.c=%.i)

$(TARGET): $(OBJ)
	@echo "crate " $<
	gcc $^ -o $@

$(OBJ): %.o : %.c
	gcc -g -c -Wall -Werror $^ -o $@

memcheck : $(TARGET)
	valgrind --leak-check=full ./$<

preprocess: $(PRE)
	@echo "preprocess"

$(PRE): %.i : %.c
	gcc -E $< -o $@z

clean:
	rm -rf $(OBJ) $(TARGET) $(PRE)

