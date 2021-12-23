OPT =-O3

.PHONY: clean compile as

compile:
	riscv64-linux-gnu-gcc -g $(OPT) -mcmodel=medlow -mabi=ilp32 -march=rv32im -Wall -c -o add_vector$(OPT).o add_vector.c

as:
	riscv64-linux-gnu-objdump -d add_vector$(OPT).o > const_dump$(OPT)

clean:
	rm $(wildcard *.o)
