# -*- MakeFile -*-



INC = include/
SRC = $(wildcard src/*.c)
TST = $(wildcard test/*.c)
ELF = $(wildcard *.elf)
SRCOBJ = $(patsubst %.c, %.o, $(SRC))
TSTOBJ = $(patsubst %.c, %.o, $(TST))
CFLAGS = -I $(INC)

all: main test_io test_compute

main.elf: $(SRCOBJ)
	gcc $^ -o main.elf

test_io.elf: test/test_io.o src/file_io.o
	gcc $^ -o test_io.elf

test_compute.elf: test/test_compute.o src/compute.o
	gcc $^ -o test_compute.elf

run_tests: test_io.elf test_compute.elf
	./test_io.elf; ./test_compute.elf

%.o: %.c
	gcc -c $^ $(CFLAGS) -o $@

clean:
	rm -f $(SRCOBJ) $(TSTOBJ) $(ELF)