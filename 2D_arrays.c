/*program to display 2d arrays
Author: Thuku Moses
Date 12/10/2024
*/
//preprocessor directive-scanf(),printf()
#include <stdio.h>
int main(){
	int marks [2][4]={{67,88,98,89},{50,80,90,45}};
	int i,j;
	for (i=0;i<2;i++){
		for (j=0;j<4;j++){
			printf("Element at index [%d] [%d] is:%d\n",i,j,marks[i][j]);
		}
	}
	return 0;
}