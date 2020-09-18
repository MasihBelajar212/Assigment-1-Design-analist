#include<stdio.h>
#include<windows.h>

int main()
{
	float num1;
	float num2;
	int choice;
	
	int plus;
	int min;
	int multiply;
	float divided;
	
	
	printf("Add Integer 1 :");
	scanf("%f", &num1);
	printf("Add Integer 2 :");
	scanf("%f", &num2);

	do
	{
	printf("1.Plus the Integer\n");
	printf("2.Minus the Integer\n");
	printf("3.Multiply the Integer\n");
	printf("4.Divided the Integer\n");
	printf("Pilihlah angka dari 1-4 :");
	scanf("%d", &choice);
	
		if(choice == 1)
		{
			plus = num1 + num2;
			
			printf("\n%d",plus);
			break;
		}
		else if(choice == 2)
		{
			min = num1 - num2;
			
			printf("\n%d", min);
			break;
		}
		else if(choice == 3)
		{
			multiply = num1 * num2;
			
			printf("\n%d", multiply);
			break;
		}
		else if(choice == 4)
		{
			divided =num1/num2;
			
			printf("\n%.2f", divided);
			break;
		}
		else
		{
			printf("Angkanya harus 1-4 ok\n");
			printf("Press Enter\n");
			getchar();
			getchar();
		}
	}
	while(choice > 4);
	
	return 0;
}
