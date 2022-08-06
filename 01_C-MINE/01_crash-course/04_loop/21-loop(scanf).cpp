#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
int n,i,sum;
sum = 0;
input:
system("color f");
printf("1 + 2 + 3 + ... + n = ?\n");
printf("Enter the number:");
scanf("%d",&n);
if(n<0){
	system("color 4f");
	printf("\aYou must enter the postitive number! Press any key to continue!!!");
	getch();
	system("cls");
	goto input;	
}else{
	printf("-----------------------------------\n");
for(i=1;i<=n;i++){
sum += i;	
}
printf("1 + 2 + 3 + ... + %d =  %d\n",n,sum);

}



getch();
return 0;
}
