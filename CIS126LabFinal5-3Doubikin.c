//Zachary Doubikin
//Date: 6/17/21
//Math Final 5-3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void addition(int num1,int num2,int answer,int wrong);
void subtraction(int num1,int num2,int answer,int wrong);
void multiplication(int num1,int num2,int answer,int wrong);
void division(int num1,int num2,int answer,int wrong);

int totalCorrect = 0; 
int totalProblems = 0;

int main()
{
	int option, wrong,num1, num2, answer;
	float average;
	char diffi;
	
	printf("Main menu:\n");
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n5. Exit");
	printf("\nSelect an option: ");
	scanf("%d", &option);
	
	srand(time(0));
	
	while(option < 5)
	{
		totalProblems++;
		printf("\nSelect difficulty level e-easy m-medium h-hard");
		scanf("%c", &diffi);
		
		while(diffi != 'e' && diffi != 'm' && diffi != 'h' )
		{
			printf("\nSelect e, m , or h. ");
			scanf("%c", &diffi);
		}
		if( diffi == 'e')
		{
			num1=rand()%10+1;
			num2=rand()%10+1;
		}
		else
		if (diffi == 'm')
		{
			num1=rand()%100+1;
			num2=rand()%100+1;
		}
		else
		{
			num1=rand()%1000+1;
			num2=rand()%1000+1;
		}   
		wrong = 1;
		
		if(option == 1)
		{
			addition(num1,num2,answer,wrong);
		}
		else
		{
			if(option == 2)
			{
				subtraction(num1,num2,answer,wrong);
			}
			else
			{
				if(option == 3)
				{
					multiplication(num1,num2,answer,wrong);
				}
				else
				{
					if(option == 4)
					{
						division(num1,num2,answer,wrong);
					}
				}
			}	
		}
		printf("Main menu:\n");
		printf("\n1. Addition");
		printf("\n2. Subtraction");
		printf("\n3. Multiplication");
		printf("\n4. Division");
		printf("\n5. Exit");
		printf("\nSelect an option: ");
		scanf("%d", &option);
	}
	printf("You attempted %d problems and got %d correct\n", totalProblems, totalCorrect);
	
	average = (float)totalCorrect / (float)totalProblems *100;
	printf("You gotten a score of %.2f percent\n", average);
	
	printf("Exiting Program....");
	return 0;
}
void addition(int num1,int num2,int answer,int wrong)
{
	
	for(wrong = wrong; wrong <= 3; wrong ++)
	{
	
		printf("%d + %d = ? \n",num1, num2);
		scanf("%d", &answer);
	
		if(answer == num1 + num2)
		{
			printf("You are correct! Good job!\n\n");
			totalCorrect++;
			wrong = 5;
		}
		else
		{
			if(wrong == 3)
			{
				printf("You failed.\n\n");
			}
			else 
			{
				printf("Please try again %d/3\n", wrong);
			}
		}
	}
}
void subtraction(int num1,int num2,int answer,int wrong)
{
	
	for(wrong = wrong; wrong <= 3; wrong ++)
	{
	
		printf("%d - %d = ? \n",num1, num2);
		scanf("%d", &answer);
	
		if(answer == num1 - num2)
		{
			printf("You are correct! Good job!\n\n");
			totalCorrect++;
			wrong = 5;
		}
		else
		{
			if(wrong == 3)
			{
				printf("You failed.\n\n");
			}
			else 
			{
				printf("Please try again %d/3\n", wrong);
			}
		}
	}
}
void multiplication(int num1,int num2,int answer,int wrong)
{
	
	for(wrong = wrong; wrong <= 3; wrong ++)
	{
	
		printf("%d * %d = ? \n",num1, num2);
		scanf("%d", &answer);
	
		if(answer == num1 * num2)
		{
			printf("You are correct! Good job!\n\n");
			totalCorrect++;
			wrong = 5;
		}
		else
		{
			if(wrong == 3)
			{
				printf("You failed.\n\n");
			}
			else 
			{
				printf("Please try again %d/3\n", wrong);
			}
		}
	}
}
void division(int num1,int num2,int answer,int wrong)
{
	int remainder;
	
	for(wrong = wrong; wrong <= 3; wrong ++)
	{
	
		printf("%d / %d = ? \n",num1, num2);
		scanf("%d", &answer);
		printf("What is the remainder (if necessary)\n");
		scanf("%d", &remainder);
		if(answer == num1 / num2 && remainder == num1 % num2)
		{
			printf("You are correct! Good job!\n\n");
			totalCorrect++;
			wrong = 5;
		}
		else
		{
			if(wrong == 3)
			{
				printf("You failed.\n\n");
			}
			else 
			{
				printf("Please try again %d/3\n", wrong);
			}
		}
	}
}

