/*************************************************
* Course: CS 4540 – Fall 2014
* Assignment <1> - Problem <4>
* Name: <Waleed Gudah>
* E-mail: <waleed.h.gudah@wmich.edu>
* Submitted: <09/24/14>
/*************************************************
/*

int* generate_rand (int length, int MAX_ARRAY) that gets an integer as input and
generates a dynamic array with the same number of elements, fills the array with random values between
0 and MAX_ARRAY and returns a pointer to this array.
Write a function calculate (int* array_ptr, int length, &mean, &sd) that gets a pointer to an array and its
length and returns the mean and standard deviation of its elements.
Use these two functions in a main() function where you ask the user for an array length, you generate an
array of that length filled with random elements between 0 and 100 and you calculate the average for the
generated values. Run the program 3 times while increasing the array length (for example, for 100, 1000,
10000 elements) and write down the results. Following code can be used to generate random values.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

struct stats{

	float mean;
	float std;

	} stats;

int * generate_random(int length, int MAX_ARRAY);
	
int main(){

	int MAX_ARRAY; 
	int length;
	int *pointer;

		printf("\n-----------Welcome-----------\n-----------Program-----------\n--------------4--------------\n-\nEnter Array Length:");
		scanf("%d",&length);
		
		printf("Enter Max Value Size:");
		scanf("%d",&MAX_ARRAY);
		
		pointer = generate_random(length, MAX_ARRAY);

		display(length, pointer);//For Testing Purposes, Displays Elements and Address

		calculate(pointer, length);
		
		printf("\nMean: %.4g\nStandard Deviation: %.4g\n-\n------------Good-------------\n------------Bye--------------\n",stats.mean, stats.std );

		free(pointer);	

		return 0;	
}

/*
generate_Random takes an array length integer and a MAXIMUM_ARRAY  integer
then creates an array the size of length and fills it with randoms between 0 and MAX_ARRAY
*/

int* generate_random(int length, int MAX_ARRAY){
	
	int counter;
	int randomArr[length];
	int *array_ptr = malloc(length * sizeof(int));//Initialize array pointer
	
	srand(time(NULL));
	
		for(counter = 0; counter < length; counter++){ 

        		array_ptr[counter] = ( rand() % MAX_ARRAY + 1 );//Store input at next empty element
		
		}
				array_ptr[counter+1] = '\0';

return array_ptr;

}

/*dispaly takes a integer length and a pointer to an array,
loops through the array and prints each element*/

int display(int length, int *array_ptr){
	
	int counter;

	for(counter = 0; counter < length; counter++){

 		 printf("-\nValue in element #%d is: %d\n", counter, array_ptr[counter]);

		}

return 0;

}

/*calculate takes an array pointer and an integer length, 
calculates mean and standard deviation*/

int calculate(int *array_ptr, int length){

		int counter;
		int i, n;
		float sum;
	    float sum_deviation;

	 //Loop through add all to sum;
	for(counter = 0; counter < length; counter++){

		sum += array_ptr[counter];

	}
		//calculate mean 
		stats.mean = (sum/counter);
    //loop thorugh array and save deviations
    for(i=0; i<n;++i){

	    sum_deviation+=(array_ptr[i]-stats.mean)*(array_ptr[i]-stats.mean);
    
    }
	//calculate standard deviation 
    stats.std = sqrt(sum_deviation/n);  

    return 0;
}

