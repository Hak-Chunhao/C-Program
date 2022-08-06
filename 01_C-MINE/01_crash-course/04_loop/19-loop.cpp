#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
// Example of loop process Ascending
	int i;
	for(i=1;i<=10;i++){
		printf("%i \t I love you\n",i);
	}
	printf("this is the value after for loop:%d \n",i);
	printf("----------------------------\n");
// Descending	
	for(i=10;i>0;i--){
		printf("%i \t I love you\n",i);
	}
	printf("this is the value after for loop:%d \n",i);
	printf("------------------------------------------ \n");	
//	False loop
	for(i=1;i<=0;i++){
		printf("%i \t I love you\n",i);
	}
	printf("this is the value after for loop:%d \n",i);
	
	
	getch();
	return 0;
}
