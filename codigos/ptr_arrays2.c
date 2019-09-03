#include<stdio.h>

int main()
{
    // Declaring/Initializing three characters pointers
    char *ptr1 = "Himanshu";
    char *ptr2 = "Arora";
    char *ptr3 = "TheGeekStuff"; 

    //Declaring an array of 3 char pointers
    char* arr[3]; 

    // Initializing the array with values
    arr[0] = ptr1;
    arr[1] = ptr2;
    arr[2] = ptr3; 

    //Printing the values stored in array
    printf("\n [%s]\n", arr[0]);
    printf("\n [%s]\n", arr[1]);
    printf("\n [%s]\n", arr[2]); 

    return 0;
}
