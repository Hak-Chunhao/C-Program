#include <stdio.h>
#include <conio.h>
int main(){
// Ascending
	int i,f;
	i = 1;
	while(i<=10){
		printf("%d \t hello world\n",i);
		i++;	
	}
	printf("This is the end value of while(i<=10):%d \n",i);
//	Descending
	printf("--------------------\n");
	i = 10;
	while(i>0){
		printf("%d \t hello world\n",i);
		i--;
	}
	printf("This is the end value of while(i>0):%d \n",i);
	printf("--------------------\n");
//	false while-loop
	printf("false value of while loop \n");
	f = 1;
	while(f<=0){
		printf("hello world");
		f++;
	}
	printf("This is the end value of while(f<=0):%d \n",f);
	
	
	
		getch();
		return 0;
}
