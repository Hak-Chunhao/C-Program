#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,sum;
	input:
	system("color f");
	sum = 0;
	printf("1 + 2 + 3 + 4 + 6 + 7 + ... + n = ?\n");
	printf("Enter n:");
	scanf("%d",&n);
	if(n<0){
		system("color 4f");
		printf("\ayou can not input the negative number!\n");
		getch();
		system("cls");
		goto input;
	}else{
		for(i=1;i<=n;i++){
			if(i%5==0){
				continue;
			}
			sum+=i;
		}
		for(i=1;i<n;i++){
			if(i%5==0){
				continue;				
			}
			printf("%d + ",i);		
	}
			printf("%d = %d",i,sum);
}
	

	getch();
	return 0;
}
