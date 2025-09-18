// program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>// required for the use of pow function 
int main(){
    double  principal,rate,time,si,ci,amount; // si = simple interest , ci = compound interest
    printf("Enter the amount of principal : ");
    scanf("%lf",&principal);
    
    printf("Enter rate : ");
     scanf("%lf",&rate);
    
    printf("Enter time in years : ");
     scanf("%lf",&time);
    
  
  // calculating simple interest
  
     si = (principal*rate*time)/100;
    printf("The simple interest after %.0lf years is : %.2lf\n",time,si);
    
    // calculating compound interest 
    // amount is principal with compound interest 
    
    amount = (principal * pow((1 + rate/100), time ) ); // pow function is used to calculate power 
    ci = amount - principal ; 
    printf("The compound interest after %.0lf years  : %.2lf\n",time,ci);
     
     return 0;
}
