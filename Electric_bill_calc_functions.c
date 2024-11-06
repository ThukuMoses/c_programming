/*program to calculate and display electric bill for customers
Author: Thuku Moses
Date 13/10/2024
*/
//preprocessor directive-scanfprint(), printf()
#include<stdio.h>
#include<math.h>

double calculate_bill(int Units_Consumed);//function prototype
double calculate_surcharge(double bill);//function prototype

int main(){
	int Customer_ID,Units_Consumed;
	char Name [20];
	
	
	printf("Enter customer ID: ");
	scanf("%d",&Customer_ID);
	
	printf("Enter customer Name: ");
	scanf(" %[^\n]",Name);
	
	printf("Enter Units consumed: ");
	scanf("%d",&Units_Consumed);
	
	//call function to calculate bill
	double bill = calculate_bill(Units_Consumed);
	printf("Bill is:Ksh%.2lf\n",bill);
	
	//call function to calculate surcharge
	double surcharge=  calculate_surcharge(bill);
	double total_bill= bill + surcharge;
	
	printf("Total bill:Ksh%.2lf\n",total_bill);

	printf("\nCustomer Name:%s\n",Name);
	
	printf("CustomerID:%d\n",Customer_ID);

	printf("Units consumed:%d\n",Units_Consumed);
	printf("Total amount to pay:Ksh%.2lf\n",total_bill);
	
	return 0;
}
double calculate_bill(int Units_Consumed){
	double Charge_per_unit, bill;
	if(Units_Consumed<83.33){//loop to ensure th minimum bill is ksh 100
		Charge_per_unit=100.0/Units_Consumed;
		bill=Units_Consumed*Charge_per_unit;
	}
	else if(Units_Consumed<200){
		Charge_per_unit=1.20;
		bill=Units_Consumed*Charge_per_unit;
	}
	else if(Units_Consumed>=200&&Units_Consumed<400){
		Charge_per_unit=1.50;
		bill=(1.20*199)+(Units_Consumed-199)*Charge_per_unit;
	}
	else if(Units_Consumed>=400&&Units_Consumed<600){
		Charge_per_unit=1.80;
		bill=(1.20*199)+(1.50*199)+(Units_Consumed-399)*Charge_per_unit;
	}
	else{
		Charge_per_unit=2.00;
		bill=(1.20*199)+(1.50*199)+(1.80*199)+(Units_Consumed-599)*Charge_per_unit;
	}
	return bill;
}

double calculate_surcharge(double bill){//function to calculate surcharge

	if(bill>400){
		return bill * 0.15;//15% surcharge for bill over 400
	}
	else{
		return 0.0;
	}
}