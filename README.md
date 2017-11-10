## oBF
#### An Obfuscated BrainFuck Interpreter

##### Overview
Brainfuck simulates a Single-Tape Turing machine.
Memory is tape consisting of integer cells.
	
		___ __ __ __ __ __ __
	Cells:	___|__|__|__|__|__|__
				^--Head = Current cell
#### Features

- Capable of ignore all non-command symbols from input stream
- Tape memory is allocated on the program heap allowing for a very long tape!
- To configure memory size set the MEMSIZE variable in the Makefile
 
#### Commands
| Sym | Command| 
| --- | :--- |
| +  | Increment cell value| 							
| -  | Decrement cell value |							
| >  | Move head right	  	|							
| <  | Move head left	  	|							
| [  | If cell value is zero, head jumps forward to closing ] |  	
| ]  | If cell value is nonzero, head jumps back to opening [  |	
| .  | Prints ASCII character of cell value [  	|
| ,  | Reads next  argument as an integer into cell  	|

#### Usage
	<src_code> | ./obf <arg1 ... argn>

#### Arguments
Accepted as an array of integers

#### Examples
	cat example/mandelbrot | ./obf						#src from file mandelbrot
	echo "+[,.]"	| ./obf 72 101 108 108 111 	10 13 	#echos arguments 
	echo "+[,.]"	| ./obf $(cat example/input) 		#read args from file 
#### Liscense
Do what you want!

