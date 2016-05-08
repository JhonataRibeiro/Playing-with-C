#include <stdio.h>

/*	Diference betwen:
	Pointer to array (*ptr)[5] and 
	Array of Pointers *ptr[5]
*/
	void main(){

	/* POINTES TO ARRAY
	   This is a statement of array with 3 int's;
	   Pointer to array of 3 ints.
	   e.g: In my organization I have a box with all my things. The pointer points to box.
	*/
		int (*ptr_to_array) [3];
		printf("%p\n", &ptr_to_array[1]);
		printf("%p\n", &ptr_to_array[2]);
		printf("%p\n", &ptr_to_array[3]);
    /* 
	   See size of element int(2 bytes).
	*/
		long size = sizeof(&ptr_to_array[1]);
		
	//========================================================================================
		

	/* 
	   ARRAY OF POINTERS	
	   This is a statement of pointers to array elements;
	   Pointer to array of 3 elemnts ints 
	   e.g: In my organization I have a paper that I know where is my things. They are spread. 
	*/

		int *array_of_ptrs [3];

	// Print address memory of points
		printf("%p%p%p\n",&array_of_ptrs[0] , &array_of_ptrs[1] , &array_of_ptrs[2]);

	
	} 