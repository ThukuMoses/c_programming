/*program to calculate and display elecric bill for customers
Author: Thuku Moses
Date 21/10/2024
*/
//preprocessor directive-scanf(),printf()
#include <stdio.h>
#include<string.h>
struct Book{
	char Title[30];
	char Author[30];
	int Publication_year;
	char ISBN[13];
	float Price;
}book1, book2;
int main(){
	//input
	printf("Enter Book title: ");
	scanf(" %[^\n]",book1.Title);
	
	printf("Enter Book Author: ");
	scanf(" %[^\n]",book1.Author);
		
	printf("Enter Publication Year: ");
	scanf("%d",&book1.Publication_year);
	
	printf("Enter Book ISBN: ");
	scanf(" %[^\n]",book1.ISBN);
	
	printf("Enter book price: ");
	scanf("%f",&book1.Price);
	
	//output
	printf("\n\nTitle: %s\n",book1.Title);
	printf("Author: %s\n",book1.Author);
	printf("Publication Year: %d\n",book1.Publication_year);
	printf("ISBN: %s\n",book1.ISBN);
	printf("Price: $%.2f\n",book1.Price);
	
	return 0;
}