#include<stdio.h>
 int main(){
    float num1, num2;
    char operator;
    printf("Enter the first number:");
    scanf("%f",& num1);
    printf("Enter an operator(+,-,*,/):");
    scanf(" %c",& operator);
    printf("Enter the second number:");
    scanf("%f",& num2);

    //perform the operation based on the operator.....
    switch(operator){
        case'+':
        printf("%2f + %2f = %2f\n", num1, num2, num1 + num2);
        break;
        case'-':
        printf("%2f - %2f = %2f\n", num1, num2, num1 - num2);
        break;
        case'*':
        printf("%2f * %2f = %2f\n", num1, num2, num1 * num2);
        break; 
        case'/':
        if(num2 != 0 ){
            printf("%2f / %2f = %2f\n", num1, num2, num1 / num2);
        }else{
            printf("Error! Division by zero\n");
        }
        break;
        
        default:
        printf("Invalid operator ! Please use +,-,*,or/\n");

        
    }
    return 0;
 }
 