// program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int num1,num2; // declaring two integer variables
    printf("Enter the first number :");
    scanf("%d",&num1);
    printf("Enter the second number :");
    scanf("%d",&num2);
    int sum,difference,product,quotient; 
    sum=(num1 + num2); //sum of two numbers
    difference=(num1 - num2); // difference of two numbers
    product=(num1*num2); // product of two numbers
    quotient=(num1/num2);   // quotient of two numbers
    printf("The sum of two numbers is : %d\n",sum);
    printf("The difference of two numbers is : %d\n",difference);
    printf("The product of two numbers is : %d\n",product);
    printf("The quotient of two numbers is : %d\n",quotient);
    return 0;
}