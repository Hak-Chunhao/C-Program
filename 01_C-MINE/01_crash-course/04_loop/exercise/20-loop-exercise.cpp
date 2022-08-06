#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
// formula of 1+2+3 ... 50 =? 	
	int i, sum;
	sum = 0;
	for(i=1;i<=50;i++){
//		printf("%d\n",i);
		sum = sum + i;
//		printf("%d\n",sum);
	}
	printf("This is the end of loop value i<=50:%d \n",i);
	printf("1+2+3...50:%d\n",sum);

//  Math formula of 1+2+3 ... 50 =? 	
	int sum1;
	sum1 = 50*(50+1)/2;
	printf("1+2+3...50:%d\n",sum1);
	
		getch();
		return 0;	
}
