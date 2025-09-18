// program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
    int a,b,c; // c is the third variable here 
    printf("Enter the first number : "); // a is the first variable 
    scanf("%d",&a);
    printf("Enter the second number : "); // b is the second variable 
    scanf("%d",&b);
     c = a; // swapping th value of a to c 
     a = b; // the value of a = b
     b = c; // swapping value of b to c 
    printf("%d %d",a,b); // values after swapping 
    return 0;
}