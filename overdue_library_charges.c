//preprocessor directive-scanf(), printf()
#include <stdio.h>
#include<math.h>
int main (){
	int Book_ID;
	int Due_Date;
	int Return_Date;
	
	//prompt user to input Book_ID, Due_Date and Retunr_Date
	printf("Enter Book_ID: ");
	scanf("%d", &Book_ID);
	
	printf("Enter Due_Date: ");
	scanf("%d", &Due_Date);
	
	
    printf("Enter Return_Date: ");
	scanf("%d", &Return_Date);
	
	int days_overdue;
	
	days_overdue= Return_Date - Due_Date;
	
	printf("Days overdue: %d\n", days_overdue);
	
	int daily_charge;
	int fine_amount;
	
	
	if(days_overdue<=7){
	    daily_charge=20;
	    printf("Fine rate: %d\n",daily_charge);
	    fine_amount=daily_charge*days_overdue;
        printf("Fine amount: Ksh%d\n", fine_amount);
	}
	else if(days_overdue<=14){
		daily_charge=50;
		printf("Fine rate: %d\n",daily_charge);
		fine_amount=(20*7)+((days_overdue-7)*daily_charge);
		printf("Fine amount: Ksh%d\n",fine_amount);
	}
	else{
		daily_charge=100;
		printf("Fine rate: %d\n",daily_charge);
		fine_amount=(20*7)+((days_overdue-7)*daily_charge);
		printf("Fine amount: Ksh%d\n", fine_amount);
	}
	
	return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                             
