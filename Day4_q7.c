// program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a,b; // two values which will be given by user 
    printf("Enter the first number : "); // first variable 
    scanf("%d",&a);
    printf("Enter the second number : "); // second variable
    scanf("%d",&b);
    a = a + b; // adding both the values
    b = a - b; // subtracting the original value of b from new value of a 
    a = a - b; // getting the value of b 
    printf("After swapping : %d %d",a,b);
    return 0;
}