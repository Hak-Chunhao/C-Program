#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int i,j;
//	1 method
	for(i=1;i<=9;i++){
		for(j=i;j<=9;j++){
			printf("*");
		}
		printf("\n"); 
	}
	printf("------------------------\n");

//	2 method
	for(i=1;i<=9;i++){
		for(j=1;j<=(10-i);j++){
			printf("*");
		}
		printf("\n"); 
	}
	printf("------------------------\n");

//	3 method ?
	for(i=1;i<=9;i++){
		for(j=9;j>=i;j--){
			printf("*");
		}
		printf("\n"); 
	}
	printf("------------------------\n");
//	4 method
	for(i=9;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("*");
		}
		printf("\n"); 
	}
	printf("------------------------\n");
//	5 method
	for(i=9;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n"); 
	}
	printf("------------------------\n");

	getch();
	
	
	return 0;
}
