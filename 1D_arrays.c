/*program to display 1d array
Author: Thuku Moses
Date 12/10/2024
*/
//preprocessor directive-scanf(),printf()
#include <stdio.h>
int main(){
	int marks[5]={67,88,98,89};
	int i;
	for (i=0;i<4;i++){
		printf("Element at index %d is: %d\n ",i,marks[i]);
	}
	return 0;
}