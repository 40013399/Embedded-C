#include "cal.h"
#include<stdio.h>
#include<math.h>
//int choice;
//double x,y;
double sum(double operand1, double operand2);
double sub(double operand1, double operand2);
double mul(double operand1, double operand2);

int main()
{
    int opt;
    double n1,n2;
    double res;
    printf("\nPlease select the required operation to be performed \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
	printf("\nSelect an option below: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            printf("\nEnter two operands to add:\n");
            scanf("%lf %lf",&n1,&n2);
            res = sum(n1,n2);
            printf("%lf",res);
            break;

        case 2:
            printf("\nEnter two operands to subtract:\n");
            scanf("%lf %lf",&n1,&n2);
            res = sub(n1,n2);
            printf("%lf",res);
            break;

        case 3:
            printf("\nEnter two operands to multiply:\n");
            scanf("%lf %lf",&n1,&n2);
            res = mul(n1,n2);
            printf("%lf",res);
            break;

        default :
            printf("Please make a valid choice");

    }
return 0;
}
