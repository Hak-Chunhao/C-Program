#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int i;
//	continue;
	printf("This is continue\n");
	for(i=1;i<=10;i++){
		if(i==5){
			continue;
	
		}
		printf("%d\n",i);	
	}
	printf("--------------------\n");
//	break;
	printf("This is break\n");
	for(i=1;i<=10;i++){
		if(i==5){
			break;
	
		}
		printf("%d\n",i);	
	}
	getch();
	return 0;
}
