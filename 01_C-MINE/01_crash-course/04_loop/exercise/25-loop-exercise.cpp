#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,sum;
	sum = 0;
	input:
	system("color f");	
	printf("1 + 3 + 5 + ... + n = ?\n");
	printf("Enter the number:");
	scanf("%d",&n);
	if(n<=0 || n%2==0){
		system("color 4");
		printf("\aYou can not enter negative number,even number, or zero. Press any key to continue!!!\n");
		getch();
		system("cls");
		goto input;
	}else{
		printf("Your number was caculated\n");
	}
	for(i=1;i<=n;i+=2){
		sum += i;
	}
	if(n==1){
		printf("1 = 1\n");
	}else if(n==3){
		printf("1 + 3 = 4\n");
		
	}else if(n==5){
		printf("1 + 3 + 5 = 9\n");
	}else{
	printf("1 + 3 + 5 + ... + %d = %d\n",n,sum);
	printf("**************************************");
	}
	
	
	
	getch();
	return 0;
}
