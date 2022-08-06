#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
//	Find the biggest and smallest value from keyboard input
	int n1, n2, n3;
	printf("Enter the number for n1:");
	scanf("%d",&n1);
	printf("Enter the number for n2:");
	scanf("%d",&n2);
	printf("Enter the number for n3:");
	scanf("%d",&n3);
	if(n1>=n2 && n1>=n3){
		printf("This is the biggest value:%d\n",n1);
	}else if(n2>=n1 && n2>=n3){
		printf("This is the biggest value:%d\n",n2);		
	}else{
		printf("This is the biggest value:%d\n",n3);
	}
	if(n1<=n2 && n1<=n3){
		printf("This is the smallest value:%d\n",n1);
	}else if(n2<=n1 && n2<=n3){
		printf("This is the smallest value:%d\n",n2);		
	}else{
		printf("This is the smallest value:%d\n",n3);
	}	
	
// another way of nested	
	/*
int main(){
	int n1, n2, n3;
	printf("Enter the number for n1:");
	scanf("%d",&n1);
	printf("Enter the number for n2:");
	scanf("%d",&n2);
	printf("Enter the number for n3:");
	scanf("%d",&n3);
	if(n1>=n2 && n1>=n3){
		printf("The Largest value is %i\n",n1);
		if(n2>=n3){
			printf("The smallest Value is %i",n3);
		}else{
			printf("The smallest value is %i",n2);
		}
	}

	else if(n2>=n1 && n2>=n3){
		printf("The Largest value is %i\n",n2);
		if(n1>=n3){
			printf("The smallest Value is %i",n3);
		}else{
			printf("The smallest value is %i",n1);
		}
	}else{
		printf("The largest Value is %i\n",n3);
		if(n1<=n2){
			printf("The smallest Value is %i",n1);
		}else{
			printf("The smallest value is %i",n2);
		}
	}
*/
	
	getch();
	return 0;
}
