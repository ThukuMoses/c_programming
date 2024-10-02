//preprocessor directive-scanf, printf
#include <stdio.h>
#include <math.h>
int main(){
	double Principal;
	double Rate;
	double Time;
	double interest;
	
	printf("Enter Principal:");
	scanf("%lf", &Principal);
	
	printf("Enter the Rate: ");
	scanf("%lf", &Rate);
	
	printf("Enter the number of years: ");
	scanf("%lf",&Time);
	
	interest=(Principal*Rate*Time)/100;
	printf("interest:%.2lf", interest);
	
	return 0;
}