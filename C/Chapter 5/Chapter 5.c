#include <stdio.h>
#include <conio.h>
#include <math.h>
int maina()
{
    int workinghours, x = 1;
    while (x<=10)
    {
        printf("Enter the working hours of an employee: ");
        scanf("%d", &workinghours);
        if (workinghours > 40)
            printf("Overtime pay of the employee is Rs.%.2f\n\n", 12.00 * (workinghours - 40));
        else
            printf("The employee has not done enough work for overtime pay.\n\n");
        x++ ;
    }
    return 0;
}

int mainb()
{
    int num, i = 1, fact = 1;
    printf("Programme to find factorial of a number. Press enter to continue.");
    getch();
    printf("\nEnter number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        while ( i<= num)
        {
            fact = fact * i;
            i++ ;
        }
        printf("\n%d! = %d\n", num , fact);
    }
    else if (num < 0)
    printf("\nFactorial of negative number is not possible.\n");
    return 0;
}

int mainc()
{
    int base, exponent, power;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int i = 0;
    while (i < exponent) {
        power *= base;
        i++;
    }

    printf("%d raised to the power of %d is %.2f\n", base, exponent, power);

    return 0;
}

int maind()
{
    int num = 1 ;
    while ( num <= 255)
    {
        printf("%d = %c\n", num, num);
        num++ ;
    }

    return 0;
}

int maine()
{
   int num = 0, dig1, dig2, dig3;

   printf("Armstrong numbers are: ");

   while (num <= 1000)
   {

   dig1 = num % 1000 / 100;
   dig2 = num % 100 / 10;
   dig3 = num % 10 / 1;
      if (num == pow(dig1,3)+ pow(dig2,3)+ pow(dig3,3))
      printf("\n%d\n", num);


num ++;

   }

   return 0;

}

int main() {
	char ans;
	printf("Program of chapter 5 of the book \'Let us C:\'");
	while(1){
		printf("\n\nEnter your choice(a) [To quit enter q]: ");
		scanf("%c",&ans);
		switch(ans){
		case 'a':
			maina();
			break;
        case 'b':
			mainb();
			break;
		case 'c':
			mainc();
			break;
        case 'd':
			maind();
			break;
        case 'e':
			maine();
			break;

        default:
			printf("wrong choice");
			break;
		}
		if(ans == 'q')
			break;
		//break;
		//calling getchar to consume the the extra character <Enter> key
		ans = getchar();
	}
	printf("\n--------   End of chapter 5 Program --------");
}
