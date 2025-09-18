//  program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
    int celsius;
    float farenheit;
    printf("Enter the temperature in celsius : "); // user input for temperature
    scanf("%d",&celsius); 
    farenheit = ((celsius*(9.0/5.0)) + 32) ; // formula to convert temperature from celsius to farenheit 
    printf("temperature in farenheit : %.2f",farenheit);
    return 0;
}