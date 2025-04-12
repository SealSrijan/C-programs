#include <stdio.h>
#include <string.h>
#define max 100
int maina()
{
    int submission_date;
    printf("Enter number of days of late submission of library book: ");
    scanf("%d", &submission_date);
    if(submission_date >= 0 && submission_date <= 5)
    {
        printf("Fine for %d days is Rs%.2f",submission_date, submission_date*0.5);
    }
    else if(submission_date >= 6 && submission_date <= 10)
    {
        printf("Fine for %d days is Rs.%.2f",submission_date, 2.50 + ((submission_date-5)*1));
    }
    else if(submission_date >=11 && submission_date <= 30)
    {
        printf("Fine for %d days is Rs.%.2f",submission_date, 7.50 + ((submission_date-10)*2));
    }
    else if(submission_date > 30)
    printf("Your membership is cancelled.");
    else
    printf("Wrong input.");
}

int mainb()
{
   char gender;
   int years_of_service, qualification;
   printf("Enter Gender[M/F]: ");
   fflush(stdin);
   scanf("%c", &gender);
   if(gender == 'M' || gender == 'm' || gender == 'F' || gender == 'f')
   {
   printf("Enter Years of Service: ");
   scanf("%d", &years_of_service);
   printf("Enter Qualification[Post-Graduate(0) & graduation(1): ");
   scanf("%d", &qualification);
   }
   if(gender == 'M' || gender == 'm' )
   {
       if(years_of_service>10 && qualification == 0)
       printf("Salary of the employee is 15000");
       
       else if(years_of_service>=10 && qualification == 1)
       printf("Salary of the employee is 10000");
       
       else if(years_of_service<10 && qualification == 0)
       printf("Salary of the employee is 10000");
       
       else if(years_of_service<10 && qualification == 1)
       printf("Salary of the employee is 7000");
   }
   
   else if(gender == 'F' || gender == 'f')
   {
       if(years_of_service>10 && qualification == 0)
       printf("Salary of the employee is 12000");
       
       else if(years_of_service>=10 && qualification == 1)
       printf("Salary of the employee is 9000");
       
       else if(years_of_service<10 && qualification == 0)
       printf("Salary of the employee is 10000");
       
       else if(years_of_service<10 && qualification == 1)
       printf("Salary of the employee is 6000");
   }

   else
   printf("Wrong entry.");
   return 0;
}

int isprime(int n)
{
    for(int i =2; i<n; i++)
    {
        if(n % i == 0)
        return 0;
    }
    return 1;
}
int mainc()
{
    int num, sum = 0;
    int a[max];
    printf("Enter number: ");
    scanf("%d", &num);
    int i = 2,k = 0;
    for(i = 2; i<=num; i++)
    {
        if(num % i == 0)
        {
            a[k] = i;
            k++;
        }
    }
    printf("Prime factors are: ");
for(int m = 0; m <= k-1; m++)
{
    if(isprime(a[m]))
    {
        printf("%d ", a[m]);
    }
    
}
printf("\n");
return 0;
}

int maind()
{
    int n;
    printf("Enter number of columns: ");
    scanf("%d", &n);
    for (int line = 1; line <= n; line++) 
    {
        for (int space = 1; space <= n - line; space++)
            printf("  ");
    int coef = 1;
        for (int i = 1; i <= line; i++) 
        {
            printf("%4d", coef);
            coef = coef * (line - i) / i;
        }
        printf("\n");
    }
    return 0;
}
int maine()
{
    int num;
    long double series = 0.0;
    for(num = 1; num <=10; num++)
    {
        long double fact = 1.0;
        for(int i = 1; i<= num; i++)
            fact *= i;
        series += (num /fact);
    }
    printf("Value of the series\n1/1! + 2/2! + 3/3! + ... + 10/10! is %Lf", series);
    return 0;
}

int mainf()
{
    int a = 0, b = 1, c = 0,temp;
    printf("Non-fibonacci numbers between 0 to 100 are: ");
    while(c <= 100)
    {
        c = a + b;
        a = b;
        b = c;
        temp=b;
        if(b>100)
            temp=101;
        for(int i = a+1; i<temp; i++)
            printf("%d ",i);
    }
}

int mainh()
{
    int a[10], i,j,temp,num = 10;
    for(i = 0; i<10; i++)
    {
        printf("Enter array[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
    for(i = 0; i<num-1; i++)
        for(j = i+1; j<num; j++)
{
    if (a[i]>a[j])
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
    printf("Sorted array in ascending order is: ");
    for(i = 0; i<num; i++)
    printf("%d ", a[i]);
return 0;
}

int odd(int n)
{
    if (n == 0) 
    {
        return 0;
    }
    return (2*n-1) + odd(n - 1);
}
int maini() 
{
    int n = 10;
    int result = odd(n);
    printf("The sum of the first %d odd numbers is: %d\n", n, result);
     return 0;
}

int mainj()
{
    char str[max], tempstr[max], lower_str[max], temp;
    int i = 0, j = 0;
    printf("Enter the string(without any punctuations): ");
    fflush(stdin);
    gets(str);
    //converts the whole string in lower case
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            lower_str[j] = str[i] + 32;
        else
            lower_str[j] = str[i];
        i++;
        j++;
    }
    lower_str[j] = '\0';
    //removes space within a string
    for(i= 0, j=0; lower_str[i] != '\0'; i++)
    {
        if(lower_str[i] != ' ')
        {
            lower_str[j] = lower_str[i];
            j++;
        }
    }
    lower_str[j] = '\0';
    //copying the original string to a temporary string
    strcpy(tempstr, lower_str);
    int k = 0, l= 0;
   int n = strlen(lower_str), flag = 1;
    for(int i = 0; i<= n/2; i++)
    {
        if(lower_str[i] != lower_str[n-i-1])
        {
            flag = 0;
            break;
        }
    } 
   
   if(flag)
   printf("\"%s\" is a Palindrome", str);
   else
   printf("\"%s\" is not a Palindrome", str);
    return 0;
}

int main()
{
    while(1)
    {
        int choice;
        printf("\nEnter qs number(0 to exit): ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            maina();
            break; 
            
            case 2:
            mainb();
            break;

            case 3:
            mainc();
            break;

            case 4:
            maind();
            break;

            case 5:
            maine();
            break;

            case 7:
            mainf();
            break;

            case 8:
            mainh();
            break;

            case 9:
            maini();
            break; 

            case 10:
            mainj();
            break;

            case 0:
            return 0;
            break;

            default:
            printf("Wrong input!");
            break;
        }
    }
}
