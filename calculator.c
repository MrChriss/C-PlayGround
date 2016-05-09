#include <stdio.h>
#include <math.h>

int main(void)
{
	double num_1 = 0.0;
	double num_2 = 0.0;
	char operatt = 0;

	char descision = 0;
	char prazno = 0;
	char buff[104];

Start:
	printf("input two numbers and an operation.\n");
	scanf("%lf %c %lf%c", &num_1, &operatt, &num_2, &prazno);

	switch(operatt)
	{
		case '+':
  		printf("= %lf", num_1 + num_2);
  		break;	

		case '-':
  		printf("= %lf", num_1 - num_2);
  		break;

		case '*':
  		printf("= %lf", num_1 * num_2);
  		break;

		case '/':
  			if(num_2 == 0)
  			{
    				printf("Division by zero error!\n");
  			}
  			else
    				printf("= %lf", num_1 / num_2);
  			break;

		case '%':
  			if((long)num_2 == 0)
  			{
    				printf("Division by zero error!\n");
  			}
  			else
    				printf("= %ld", (long)num_1 % (long)num_2);
  			break;
    
		default:
  		printf("Illegal operation!\n");
  		break;
	}
	printf("\nDo you want to perform another operation?\n"
		"Type Y for another, and N to exit.\n");
	//read(0, buff, 100);
	scanf("%c", &descision);
	printf("koren iz 2.00 = %lf", sqrt(2.00));

//tezave z goto, stalno mece else statement vn namest ostalih pogojev

	if(descision == 'y' || descision == 'Y')
	{
		goto Start;
	}
	else if(descision == 'n' || descision == 'N')
	{
		printf("See you later, goodbye.\n");
	}
	else
		printf("Wrong input. descision = %c %02x\n", descision, descision);

	return 0;
}
