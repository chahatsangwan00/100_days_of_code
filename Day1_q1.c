//  program to input two numbers and display their sum.
#include<stdio.h>
int main(){
    int num1,num2,sum;
    printf("Enter the first number :");
    scanf("%d",&num1);
    printf("Enter the second  number :");
    scanf("%d",&num2);
    sum = (num1 + num2);
    printf("The sum of two numbers is : %d",sum);
    return 0;
}