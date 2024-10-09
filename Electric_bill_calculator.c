/*program to calculate and display elecric bill for customers
Author: Thuku Moses
Date 6/10/2024
*/
//preprocessor directive-scanfprint(), printf()
#include<stdio.h>
#include<math.h>
int main(){
	int Customer_ID,Units_Consumed;
	char Name [20];
	
	printf("Enter customer ID: ");
	scanf("%d",&Customer_ID);
	
	printf("Enter customer Name: ");
	scanf("%s",Name);
	
	printf("Enter Units consumed: ");
	scanf("%d",&Units_Consumed);
	
	double Charge_per_unit, bill;
	if(Units_Consumed<83.33){//loop to ensure th minimum bill is ksh 100
		Charge_per_unit=100/Units_Consumed;
		bill=Units_Consumed*Charge_per_unit;
		printf("Bill is:Ksh%.2lf\n",bill);
	}
	else if(Units_Consumed<200){
		Charge_per_unit=1.20;
		bill=Units_Consumed*Charge_per_unit;
		printf("Bill is:Ksh%.2lf\n",bill);
	}
	else if(Units_Consumed>=200&&Units_Consumed<400){
		Charge_per_unit=1.50;
		bill=(1.20*199)+(Units_Consumed-199)*Charge_per_unit;
		printf("Bill is:Ksh%.2lf\n",bill);
	}
	else if(Units_Consumed>=400&&Units_Consumed<600){
		Charge_per_unit=1.80;
		bill=(1.20*199)+(1.50*199)+(Units_Consumed-399)*Charge_per_unit;
		printf("Bill is:Ksh%.2lf\n",bill);
	}
	else{
		Charge_per_unit=2.00;
		bill=(1.20*199)+(1.50*199)+(1.80*199)+(Units_Consumed-599)*Charge_per_unit;
		printf("Bill is:Ksh%.2lf\n",bill);
	}
	double surcharge,total_bill;//loop to calculate total bill with inclusion of surcharge
	if(bill>400){
		surcharge=bill*0.15;
		total_bill=bill + surcharge;
		printf("Total bill is:Ksh%.2lf",total_bill);
	}
	else{
		total_bill=bill;
		printf("Total bill:Ksh%.2lf\n",total_bill);
	}
	
	
	printf("\nCustomer Name:%s\n",Name);
	
	printf("CustomerID:%d\n",Customer_ID);

	printf("Units consumed:%d\n",Units_Consumed);
	printf("Charges per unit:Ksh%.2lf\n",Charge_per_unit);
	printf("Total amount to pay:Ksh%.2lf\n",total_bill);
	
	return 0;
}