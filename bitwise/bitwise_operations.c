#include<stdio.h>

int main(){
	/*
		Some bitwise and bitshift operations. 
	*/

	int i = 9;
	
	/*
		Bitwise: Exclusive OR
		The following operation perform a logical exclusive OR on each pair of corresponding bits
	*/
	
	i^=15;
	printf(" Operator bitwise(Eclusive OR): %d\n",i);

	/*
		Bit shift: Right Shift
		The following operation perform a Right Shift Operation.
	*/
	
	i>>=1;
	printf(" Operator right shift (>>): %d\n",i);

	/*
		Bit shift: Left Shift
		The following operation perform a Left Shift Operation.
		e.g: 011000 -> (<<2) = -0-11000(00) = 1100000
	*/

	i<<=4;
	printf(" Operator left shift (<<): %d\n",i);
	return 0;
}
