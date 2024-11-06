/*program for handling file operation in c
Author: Thuku Moses
Date 30/10/2024
*/
//preprocessor directive-scanfprint(), printf()

#include<stdio.h>
#include<stdlib.h>
void write_in_file(){
	FILE*fptr;
	char sentence[101];
	//prompt to enter sentence
	printf("Enter a sentence of less than or equal to 100 words: ");
	fgets(sentence, sizeof(sentence), stdin);
	
	fptr=fopen("data.txt", "w");
	if (!fptr){
		printf("File open unsuccessful\n");
		return;
	}
	fputs(sentence,fptr);
	fclose(fptr);
}
void read_file(){
	FILE*fptr;
	char buffer[101];
	fptr=fopen("data.txt", "r");
	if(!fptr){
		printf("File open unsuccessful\n");
		return;
	}
	
	printf("\n content of data.txt:\n");
	
	while (fgets(buffer, sizeof(buffer), fptr)!=NULL){
		printf("%s", buffer);
	}
	fclose(fptr);
}
void append_in_file(){
	FILE*fptr;
	char sentence[101];
	printf("Enter another sentence to append: \n");
	fgets(sentence, sizeof(sentence), stdin);
	
	
	fptr=fopen("data.txt", "a");
	if(!fptr){
		printf("File open unsuccefful.\n");
		return;
	}
	fputs(sentence,fptr);
	fclose(fptr);
	
		fptr=fopen("data.txt", "r");
	if(!fptr){
		printf("File open unsuccessful\n");
		return;
	}
	printf("update to the content of data.txt \n");
	while(fgets(sentence, sizeof(sentence), fptr)){
		printf("%s", sentence);
	}
	fclose(fptr);
}
int main(){
	
	write_in_file();

	read_file();

	append_in_file();
	
	
	return 0;
}