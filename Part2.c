/*************************************************
* Course: CS 4540 – Fall 2014
* Assignment <1> - Problem <2>
* Name: <Waleed Gudah>
* E-mail: <waleed.h.gudah@wmich.edu>
* Submitted: <09/24/14>
/*************************************************

Creates an array of 10 integers and assign to each element a different arbitrary value. Display all the
elements and their addresses (in decimal and hexadecimal) in memory using the & operator. Declare a
pointer to the array. Display all the elements and their addresses using this pointer and pointer arithmetic.
*/

#include <stdio.h>

int main(){
	
	int i;
	int myArray[10] = { 0,9,2,8,3,7,4,6,5,1 };

	int *aPointer;
		 aPointer = &myArray;

		 printf("\n-------Welcome-------\n-------Program-------\n----------2----------");

	for(i = 0; i < sizeof(myArray)/sizeof(int); i++){
		//print element and addresses to console
 		 printf("\n-\nValue in element #%x is: %x\nAddress in Decimal: %lu\nAddress in Hexadecimal: %p", i, myArray[i], (unsigned long)&myArray[i], &myArray[i]);
 		//print addresses using pointer to console
 		 printf("\nAddress using Pointer in Decimal: %lu\nAddress using Pointer in Hexadecimal: %p", (unsigned long)aPointer, aPointer);
 		 //Pointer Arithmetic - i+1
 		 aPointer += 1;
	
		}

 		 printf("\n-\n--------Good---------\n--------Bye----------\n");
 		 
}