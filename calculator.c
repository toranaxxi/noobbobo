#include <stdio.h>
int main()
{
	char o;
	float num1,num2,result;
	printf("Enter the first number : ");
	scanf("%f",&num1);
	printf("Enter the second number : ");
	scanf("%f",&num2);
	printf("Enter operator + , - , * , / : ");
	scanf("%s",&o);
	switch(o){
		case '+':
			printf("%.1f + %.1f = %.1f \n",num1, num2, num1+num2);
			break;
		case '-':
			printf("%.1f - %.1f = %.1f \n",num1, num2, num1-num2);
			break;
		case '*':
			printf("%.1f * %.1f = %.1f \n",num1, num2, num1*num2);
			break;
		case '/':
			printf("%.1f / %.1f = %.1f \n",num1, num2, num1/num2);
			break;
		default:
			printf("Error!! operator is not correct \n");
			break;
		}
	return 0;
}
