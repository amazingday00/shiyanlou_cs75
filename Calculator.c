#include<stdio.h>

int main()
{
	double number1;
	double number2;
	char operation; //只支持+，-，*，/，％
	
	printf("\nPlease input the calculate expression:\n");
	scanf("%lf%c%lf",&number1,&operation,&number2);

	switch(operation)
	{
		case '+':
			printf("\n%lf %c %lf = %lf",number1,operation,number2,number1+number2); 
			break;
		case '-':
			printf("\n%lf %c %lf = %lf",number1,operation,number2,number1-number2); 
			break;
		case '*':
			printf("\n%lf %c %lf = %lf",number1,operation,number2,number1*number2); 
			break;
		case '/':
			if(number2 == 0)
				printf("\n\aDivision by zero error!");
			else
				printf("\n%lf %c %lf = %lf",number1,operation,number2,number1/number2); 
			break;
		case '%':
			if((long)number2 == 0)
				printf("\nDivision by zero error!");
			else
				printf("\n%lf %c %lf = %ld\n",number1,operation,number2,(long)number1%(long)number2);
			break;
		default:
			printf("\nDivision by zero error!");
			break;

	
	}

	return 0;
}
