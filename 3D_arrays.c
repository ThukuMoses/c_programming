/*program to display 3d arrays 
Author: Thuku Moses
Date 12/10/2024
*/
//preprocessor directive-scanf(),printf()
#include <stdio.h>
int main(){
	int marks [2][2][4]={{{67,88,98,89},{50,80,90,45}},{{67,88,98,89},{50,80,90,45}}};
	int i,j,k;
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			for(k=0;k<4;k++){
				printf("Element at index [%d] [%d] [%d] is:%d\n",i,j,k,marks[i][j][k]);
			}
		}
	}
	return 0;
}