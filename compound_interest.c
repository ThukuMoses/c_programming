//preprocessor directive-scanf(), printf()
#include <stdio.h>
#include <math.h>
int main(){
	double Principal;
	double Rate;
	double Time;
	double n;
	double compound_interest;
	
	printf("Enter Principal:");
	scanf("%lf", &Principal);
	
	printf("Enter the Rate: ");
	scanf("%lf", &Rate);
	
	printf("Enter the number of years: ");
	scanf("%lf",&Time);
	
	printf("Enter number of times interst is compounded per annum: ");
	scanf("%lf", &n);
	
	compound_interest=Principal*pow((1 +(Rate/100)), n*Time);
	printf("compound_interest:%.4lf", compound_interest);
	
	return 0;
}