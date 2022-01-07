# SE201 Pr1 Part4

## 4.1 Instruction Set Architecture

**Requirements** for the instruction set :
- Encoded on 16 bits
- 16 32bits-register => a register is encoded on 4 bits
- PC is 32 bits wide
- Separate instruction and data memories (Harvard architecture)
- signed value : we choose
- Define : 
	- more than 3 different arithmetic/logic instructions operating on 3 registers
	- a load instruction using 2 register and a 5 bit immediate. The adress is `r_read + imm`
	- a store intruction .......................................
	- an instruction to copy an immediate to a register
	- a conditionnal branch using 1 register, one 10bit immediate. Branch is taken if reg!=0. Then PC = PC + imm*2
	- an unconditionnal branch using 1 register. 
	- a call instruction using 1 >9bit immediate operand. PC_old is stored in a register of our choosing (convention), PC_new is obtained with the imm operand
	- a no-operation pseudo instruction using an already existing instruction
- All branch / call instruction have branch delay slot for a single instruction
- Define how the 16 registers should be used, how arguments (up to 4)should be passed on calls, how to return from a call, how to retrieve the result, which registers are preserved/used
- For each instruction : short explaination, assembly syntax, binary code
- group instructions in binary formats, explain the formats

**Application** :
- assembly code of a function return the sum of its two arguments
- assembly code of a function with no arguments, using previous func to calculate 65408 + 134
- assembly code of the Q1 program
