OPT =-O0

.PHONY: clean compile as

compile:
	riscv64-linux-gnu-gcc -g $(OPT) -mcmodel=medlow -mabi=ilp32 -march=rv32im -Wall -c -o add_vector$(OPT).o add_vector.c

compile-no-stack-align:
	riscv64-linux-gnu-gcc -g $(OPT) -mcmodel=medlow -mabi=ilp32 -march=rv32im -mpreferred-stack-boundary=3 -Wall -c -o add_vector-stack$(OPT).o add_vector.c

as:
	riscv64-linux-gnu-objdump -d add_vector$(OPT).o > dump$(OPT)

as-no-stack-align:
	riscv64-linux-gnu-objdump -d add_vector-stack$(OPT).o > dump-stack$(OPT)

clean:
	rm $(wildcard *.o)
