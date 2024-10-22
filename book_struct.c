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
	strcpy(book1.Title, "Introduction to C Programming");
	strcpy(book1.Author, "John Smith");
	book1.Publication_year= 2022;
	strcpy(book1.ISBN, "9780131103627");
	book1.Price=49.99;
	
	printf("Title: %s\n",book1.Title);
	printf("Author: %s\n",book1.Author);
	printf("Publication Year: %d\n",book1.Publication_year);
	printf("ISBN: %s\n",book1.ISBN);
	printf("Price: %.2f\n",book1.Price);
	
	return 0;
}