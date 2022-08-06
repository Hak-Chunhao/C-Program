#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
// caculation student's score
	int score_1, score_2, total, average;
	char grade;
	a:
	printf("Enter score_1:");
	scanf("%d",&score_1);
	printf("Enter score_2:");
	scanf("%d",&score_2);
	total = score_1 + score_2;
	printf("Total:%d\n",total);
	average = total / 2;
	printf("Average:%d\n",average);
	switch(average){
			case 1 ... 50:
			grade = 'F';
			break;
			
			case 51 ... 60:
			grade = 'E';
			break;
			
			case 61 ... 70:
			grade = 'D';
			break;
			
			case 71 ... 80:
			grade = 'C';
			break;
			
			case 81 ... 90:
			grade = 'B';
			break;

			case 91 ... 100:
			grade = 'A';
			break;
			
			default:
				system("cls");
				printf("Invalid\n");
				goto a;
				break;
	}
	printf("Score_1 \t Score_2 \t Total \t Average \t Result \n");
	printf("-------------------------------------------------------------------------\n");
	printf("%d \t\t %d \t\t %d \t %d \t\t %c \n",score_1,score_2,total,average,grade);
 getch();
 return 0;
}
