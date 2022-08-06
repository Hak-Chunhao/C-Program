#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int num;
	input:
	printf("Enter you number here:");
	scanf("%i",&num);
	if(num<0){
		system("cls");//system("clear");clrscr();
		goto input;
		
	}else{
		printf("Successful");
	}

getch();
return 0;
}
