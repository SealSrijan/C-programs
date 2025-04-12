#include <stdio.h>
#include <math.h>
#include <unistd.h>

int maina()  // * triangle of desired length (forward)
{
    int i,j, num;
    printf("Enter number of lines: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        printf("* ");
        
        printf("\n");
       
    }
    return 0;
}

int mainb()  // * triangle of desired length (backward)
{
    int i,j,num;
    printf("Enter number of lines: ");
    scanf("%d", &num);
    for(i = 1; i<=num; i++)
    {
        for(j = num; j>=i; j--)
        printf("* ");
    printf("\n");
    }
    return 0;
}

int mainc() // 1-2-3 triangle
{
    int i,j,k;
    int num;
    printf("Enter number of lines: ");
    scanf("%d", &num);
    for(i = 1; i<=num; i++)
    {
        for(j = 1; j<=i; j++)
        printf("%d ", j);
    printf("\n");
    }
    return 0;
}

int maind()  // Floyd's Triangle (forward)
{
    int i,j,k = 1;
    int num;
    printf("Enter number of lines: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        printf("%d ", k++);
        printf("\n");
    }
    return 0;
}

int maine()  // Floyd's Triangle (backward)
{
    int i,j,k,sum=0, num; 
    printf("Enter number of lines: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    sum += i;
    k = sum;
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
        printf("%d ", k--);
    printf("\n");
    }
    return 0;
}

int mainf()  // Fibonacci series
{
    int a=0,b=1,c,i,num;
    printf("Enter upto which you want fibonacci series: ");
    scanf("%d", &num);
    printf("%d\n%d\n", a,b);
    for(i=2; i<=num; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
    return 0;
}

int maing() // Armstrong number b/w 1 to 1000
{ 
    int num = 0,a,b,c;
    printf("Armstrong number b/w 1 to 1000: ");
    while (num<=1000)
    {
    a = num % 1000 / 100;
    b = num % 100 / 10;
    c = num % 10 / 1;

        if(num == (a*a*a)+(b*b*b)+(c*c*c))
        printf("\n%d\n", num);

    num++;
    }
return 0;
}

int mainh() // Pyramid
{
    int i,j,k, num;
    printf("Enter upto which you want the pyramid: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num-i; j++)
        printf(" ");
    for(k=1; k<=i; k++)
    printf("* ");
printf("\n");
    }
    return 0;
}

int maini() // Backside triangle
{
    int i,j,k, num;
    printf("Enter upto which you want the triangle: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num-i; j++)
        printf("\t");
    for(k=1; k<=i; k++)
    printf("\t*");
printf("\n");
    }
    return 0;
}

int mainj() // Numerical triangle
{
    int i,j,k, num,l=1;
    printf("Enter upto which you want the pyramid: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num-i; j++)
        printf(" ");
    for(k=1; k<=i; k++)
    printf("%d ",l++);
printf("\n");
    }
    return 0;
}

int maink() // Palindrome Numbers
{
    int num = 0, sum = 0, temp = 0;
    int s;
    printf("The palindrome numbers from 1 to 1000 are: ");
    for(num = 1; num<=1000; num++)
    {
        temp = num;
        sum = 0;
        while(temp != 0)
    {
        s = temp %10;
        sum = (sum*10)+s;
        temp = temp/10;
    }
    if (num == sum)
    printf("%d\n", num);
    }
return 0;
}

int mainl() // Prime Numbers
{
  int i, j, prime;
  printf("All prime numbers from 1 to 1000 are:\n");
  for (i = 2; i <= 100; i++) 
  {
    prime = 1;
    for (j = 2; j <= i/2; j++) 
    {
      if (i % j == 0)
      {
        prime = 0;
        break;
      }
    }

    if (prime)
    {
      printf("%d ", i);
    }
  }

  return 0;
}

int main()
{
    
    char choice;
    while(1)
    {
        printf("Enter your choice from content book[Q to quit]: ");
        scanf("%c", &choice);
        switch(choice)
        {
            case 'A':
            case 'a':
            maina();
            break;

            case 'B':
            case 'b':
            mainb();
            break;

            
            case 'C':
            case 'c':
            mainc();
            break;

            case 'D':
            case 'd':
            maind();
            break;
            
            case 'E':
            case 'e':
            maine();
            break;

            case 'F':
            case 'f':
            mainf();
            break;

            case 'G':
            case 'g':
            maing();
            break;

            case 'H':
            case 'h':
            mainh();
            break;

            case 'I':
            case 'i':
            maini();
            break;

            case 'J':
            case 'j':
            mainj();
            break;
            
            case 'K':
            case 'k':
            maink();
            break;

            case 'L':
            case 'l':
            mainl();
            break;

            default:
            break;
        }
        if (choice == 'Q' || choice == 'q')
            break;
        choice == getchar();
    }
    printf("\n\n\tEnd\n\n");
}
//140 lines more