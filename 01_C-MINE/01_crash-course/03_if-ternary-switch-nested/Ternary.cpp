#include <stdio.h>
#include <conio.h>
int main(){
	int num;
	printf("Enter the number between 0-100:");
	scanf("%d",&num);
	(num>=0 && num<=100) ? printf("Login") : printf("This is not 0-100"); //why when we enter -0 also true?
	
	getch();
	return 0;
}
