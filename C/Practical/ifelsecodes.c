#include <stdio.h>
int maina();
int mainb();
int mainc();

int main()
{
    maina();
    mainb();
    mainc();
    return 0;
}

int maina() 
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a % 2 == 0)
    printf("%d is an even number",a);
else
printf("%d is an odd number",a);
return 0;
}

int mainb()
{
    printf("\n\nEnter any number: ");
    int num;
    scanf("%d", &num);
    if(num>0)
    printf("%d is a positive number.", num);
    else if(num<0)
    printf("%d is a negative number.", num);
    else
    printf("%d is neither negative nor positive.", num);
    return 0; 
}

int mainc()
{
    printf("\n\nEnter three numbers respectively: ");
    int num1, num2, num3;
    scanf("%d %d %d", &num1,&num2, &num3);
    if (num1>num2 && num1>num3)
    printf("%d is the largest number.", num1);
    else if (num2>num1 && num2>num3)
    printf("%d is the largest number.", num2);
    else if (num3>num1 && num3 >num2)
    printf("%d is the largest number.", num3);
    else if (num1 == num2 && num1 ==  num3 && num2 == num3) 
    printf("All values are equal.");
    return 0;    
}