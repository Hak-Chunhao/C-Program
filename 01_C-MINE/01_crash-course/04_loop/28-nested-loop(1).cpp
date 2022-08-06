#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){

//	for-nested-loop
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=3;j++){
			printf("\tThis is j value: %d\n",j);
		}
		printf("This is i value: %d\n",i);
	}
	
//	while-nested-loop
/*	int i,j;
	i=1;
	while(i<=5){
		j=1;
		while(j<=3){
			printf("\tthis is j value: %d\n",j);
			j++;
		}		
		printf("This is i value: %d\n",i);
		i++;
	}
*/
 
// do-while-loop
/*
	int i,j;
	i=1;
	do{
		j=1;
		do{
			printf("\tThis is j value: %d\n",j);
			j++;
		}while(j<=3);
		printf("This is i value: %d\n",i);
		i++;			
	}while(i<=5);
	
*/
	getch();
	return 0;
}
