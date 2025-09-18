//  program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("Enter the length of the rectangle :");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle :");
    scanf("%d",&breadth);
    area = (length * breadth);
    perimeter = 2 * (length + breadth);
    printf("The area of the rectangle is : %d\n",area);
    printf("The perimeter of the rectangle is : %d",perimeter);
    return 0;
}