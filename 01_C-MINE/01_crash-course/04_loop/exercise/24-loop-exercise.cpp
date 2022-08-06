#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,sum;
	sum = 0;
	input:
	system("color f");
	printf("calculate by this: 2 + 4 + 6 + ... + n = ?\n");
	printf("Enter the number:\n");
	scanf("%d",&n);
	if(n<0 || n%2!=0 ){
		system("color 4");
		printf("\a You can not use negative number or odd number! \n");
		getch();
		system("cls");
		goto input;
	} 
	for(i=2;i<=n;i+=2){
		sum+=i;
	}
	printf("2 + 4 + 6 + ... + %d = %d\n",n,sum);
	
	
	getch();
	return 0;
}
