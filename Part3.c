//
//Ask the user to enter a positive integer and create a dynamic array of that many integers. Ask the user to
//fill in this array with some values.
//Write a function display( int* array_ptr, int n) that gets as parameter a pointer to an array and an integer
//n and displays the first n elements of this array. Use this function to display the elements of the array you
//created.
//

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n = 1; // Initial Array Size
	int *array_ptr = malloc(n * sizeof(int));//Initialize array pointer
		
		printf("\n-----------Welcome-----------\n-----------Program-----------\n--------------3--------------\n-\n");

		n = getArrayInput(n, array_ptr);

		display(getN(n), array_ptr);

 		printf("-\n------------Good-------------\n------------Bye--------------\n");

}

/*This method accepts a int n(initial size of array) and
 pointer to an array and returns # of elements in the array*/

int getArrayInput(int n, int *array_ptr){
		
		int input;//Store user input 
		int numberOfElements = 0;//Number of Integers inputed

    	printf("Creating Dynamic Array...\n-\n");

		for(;;){  //infinite loop

    		printf("Enter a positive value:\nNegative Number to Stop\n-\n");
   
    		scanf("%d",&input);//Get Int from console, store at address of input

    		if (input >= 0){ 

       		 	if (numberOfElements == n){

          	  	  n += 1; //Make room for the current input
            		
          		  array_ptr = realloc(array_ptr, n * sizeof(int));//realloc array and set pointer
            
       			 }

        		array_ptr[numberOfElements++] = input;//Store input at next empty element
    
    		}else{
        
       		 printf("\nArray Created with Size: %d\n", numberOfElements);
       
       		 break;
   				 }

			}

	return numberOfElements;
	
		}

		/*getN Accepts an integer (n) the current length of the array, displays for the user the number of elements 
		and asks how many elements of the array you would like to see and returns that # */

int getN(int n){
	
		printf("How many elements would you like too see?(<=%d): \n", n);
    	
    		n=0;
 		
 		scanf("%d",&n); //Get number of elements to display
 
 	return n;
}

/*display accepts integer (n) - the # of elements in the array and a pointer to that array
Then prints every element 0 through n to the console*/

int display(int n, int *array_ptr){
	
	int i;

	for(i = 0; i < n; i++){

 		 printf("-\nValue in element #%d is: %d\n", i, array_ptr[i]);

		}

return 0;

}