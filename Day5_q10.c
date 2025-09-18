// program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    int totalseconds,hours,minutes,seconds;
    printf("Enter time in seconds : ");
    scanf("%d",&totalseconds);

    // conversion of time
    hours = totalseconds/3600; // 1hour = 3600 seconds
    minutes = (totalseconds % 3600)/60;    // remaining minutes
    seconds = totalseconds % 60;   // remaining seconds 

    // Display result in hours:minutes:seconds format
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}