/*program to print the numbers in the while loop
Author: Thuku Moses
Date 6/10/2024
*/
//preprocessor directive-scanfprint(), printf()
#include<stdio.h>
int main(){
	int i,sum=0,Start,stop;
	printf("Enter starting point,i: ");//prompt the user to enter Start value
	scanf("%d",&Start);
	
	printf("Enter when to stop: ");//prompt the user to enter the stop value
	scanf("%d",&stop);
	i=Start;//initialize i with the start value
	while(i<=stop){
		printf("%d\n",i);
		i++;//increment i
		
		
		sum=sum+i;
	}
    printf("Sum is:%d",sum);	
	return 0;
}