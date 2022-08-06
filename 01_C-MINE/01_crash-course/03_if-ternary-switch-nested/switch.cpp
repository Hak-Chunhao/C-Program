#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Enter:");
	scanf("%d",&num);
	switch(num){
		case 1:
		system("color 1");
		printf("This is number 1");
		break;
		
		case 2:
		system("color 2");
		printf("This is number 2");
		break;
		
		case 3:
		system("color 3");
		printf("This is number 3");
		break;
				
		default:
		system("color 4f");
		printf("This is not in the list");
		break;
	}
	
	
	return 0;
	getch();
}
