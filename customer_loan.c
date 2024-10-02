//preprocessor directive-scanf(), printf()
#include <stdio.h>
int main() {
	double income;
	int age;
	
	printf("Enter age: ");
	scanf("%d",&age);
	
	printf("Enter income: ");
	scanf("%lf", &income);
	
	if(age>21 &&income> 21000){
		printf("Congratulations you qualify for a loan");
	}
	else{
		printf("Unfortunately, we are unable to offer you a loan this time");
	}
	return 0;
}