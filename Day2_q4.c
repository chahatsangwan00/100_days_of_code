// program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    int radius,circumference,area;
    float pi = 3.14;
    printf("Enter the radius of the circle : ");
    scanf("%d",&radius);
    area  = (pi*radius*radius);
    circumference = (2*pi*radius);
    printf("The area of circle is : %d\n",area);
    printf("The circumference of circle is : %d",circumference);
    return 0;
}