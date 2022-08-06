#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,sum;	
	input:
	sum = 0;	
	system("color f");	
	printf("5 + 10 + 15 + ... + n = ? If you want to exit, just enter value beside 5, 10, or 15\n");
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<0 || n%5!=0){
		system("color 4");
		printf("\aYou can not enter negative number,disable to divide with 5, or zero. Press any key to continue!!!\n");
		getch();
		system("cls");
		goto input;
		
	}else if(n==5){
		printf("Your number was caculated\n");
		printf("--------------------------------------\n");
		printf("5 = 5\n");
		getch();
		system("cls");
		goto input;
		
		
	}else if(n==10){
		printf("Your number was caculated\n");
		printf("--------------------------------------\n");
		printf("5 + 10 = 15\n");
		getch();
		system("cls");
		goto input;
			
	}else if(n==15){
		printf("Your number was caculated\n");
		printf("--------------------------------------\n");	
		printf("5 + 10 + 15 = 30\n");
		getch();
		system("cls");
		goto input;
	}else{		
		for(i=5;i<=n;i+=5){
		sum += i;
				
	}	
	}
		printf("Your number was caculated\n");
		printf("--------------------------------------\n");
		printf("5 + 10 + 15 + ... + %d = %d\n",n,sum);
		printf("**************************************");
		
	getch();
	return 0;
}
