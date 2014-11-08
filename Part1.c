/*************************************************
* Course: CS 4540 – Fall 2014
* Assignment <1> - Problem <1>
* Name: <Waleed Gudah>
* E-mail: <waleed.h.gudah@wmich.edu>
* Submitted: <09/24/14>
/*************************************************
/*

/*
Here you can write everything in a main() function. Suppose fred is a double variable. Assign fred a value.
Display the value of fred. Declare a pointer that points to fred. Display the value of fred using this pointer.
Display the address of fred in decimal and hexadecimal format, with and without pointer use. Change the
value of fred by using the pointer. Display the value of fred with and without pointer use.
*/
#include <stdio.h>
#include <stdint.h>
int main ()
{
  
   double  fred = 42.24;   /* actual variable declaration */
   double  *fredsPointer;  /* pointer variable declaration */

      fredsPointer = &fred;   /* store address of fred in pointer variable */
      
      printf("\n-------Welcome-------\n-------Program-------\n----------1----------\n-\nHello my name is fred\nmy value is: %.4g\n-\n", fred);

      /* access the value using the pointer, after dereferencing the pointer */
      printf("Value of fred using *fredsPointer: %.4g\n-\n", *fredsPointer);

      /* freds address in decimal*/
      printf("fred's address in decimal is: %lu\n", (unsigned long)(&fred));

      /* freds address in hexadecimal */
      printf("fred's address in hexadecimal is: %p\n-\n", &fred);
  
     /* The address of fred using fredsPointer in decimal and hexadecimal */

      printf("fred's address using fredsPointer in decimal is: %lu\n", (unsigned long)fredsPointer);

      printf("fred's address using fredsPointers in hexadecimal is: %p\n-\n", fredsPointer);

      /* changing fred's value */
      printf("Adding 57.76 to fred using fredsPointer\n");
      *fredsPointer +=57.76;

      /* access the value using the pointer and directly*/
      printf("Value of fred using pointer: %.4g\nValue of fred: %.4g\n-", *fredsPointer, fred );

      printf("\n--------Good---------\n--------Bye----------\n");


   return 0;
}
