#include <stdio.h>
#include <conio.h> 
int main(){
	int i,a,f;
	i = 1;
// example of do-while-loop		
	do{
		printf("%d \n",i);
		i++;
	}while(i<=10);
	printf("value after do while loop: %d \n",i);
	printf("------------------------------------\n");
//	flase do-while-loop
	a = 1;
	do{
		printf("This is the assign value:%d \n",a);
		a++;
	}while(a<=0);
	printf("Do while loop always processes the first value even it's not true:%d \n",a);
/*  
	//compare this with while-loop, it ultimately runs.	
	f = 1;
	do{
		printf("hello world");
		f++;
	}while(f>1);
*/	

/*
// just want to know how do-while-loop process

	f = 1;
	do{
		printf("hello world");
		f++;
	}while(f<=2);
*/

/*	
	//compare this with do-while-loop
	f = 1;
	while(f>1){
	printf("hello world");
	f++;
	}
	
	
	
*/	
	
	getch();
	return 0;
}
