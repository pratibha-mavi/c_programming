#include<stdio.h>
#include"my_headers.h"
void main(){
   userInput(); 
}


int userInput(){
    int a;
    printf("Enter a number: "); // Prompt for input
    scanf("%d", &a);           // Read the input
    printf("The number you entered is: %d\n", a); // Print the concatenated output
    return 0;
}