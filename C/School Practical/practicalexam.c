#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define max 100
int maina()
{
    int num, dig, sum = 0, product = 1, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num != 0)
    {
       dig = num %10;
       sum += dig;
       product *= dig;
       num /= 10;
    }
    printf("The sum of the digits of %d is: %d", temp, sum);
    printf("\nThe product of the digits of %d is: %d", temp, product);
    return 0; 
}

int mainb()
{
    int num, a, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while(num != 0)
    {
        a = num % 10;
        rev = (rev * 10) + a;
        num /= 10;
    }
    printf("\nThe reverse of %d is %d.", temp, rev);
    return 0;
}

int mainc()
{
    int n, i = 2; 
    float sum = 1;
    printf("Enter upto which you want the sum of the series: ");
    scanf("%d", &n);
    for(i; i <= n; i++)
    {
        sum += (1.0/i);
    }
    printf("Required sum is %.2f.", sum);
    return 0;
}

int maind()
{
    int n, oddsum = 0, evensum = 0;
    printf("Enter upto which you want the series: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
       if(i % 2 != 0)
       oddsum += i;
       else
       evensum += i;
    }
    printf("Result of the series is %d.", oddsum - evensum);
    return 0;
}

int maine()
{
    char a[max], b[max];
    printf("Enter a string: ");
    scanf("%s", &a);
    strcpy(b,a);
    strrev(a);
    int x = strcmp(a,b);
    if(x)
    printf("%s is a not palindrome.");
    else
    printf("%s is a palindrome.");
}

int mainf()
{
    int num, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 1 || num == 0)
    {
        printf("%d is neither prime nor composite.", num);
        return 0;
    }
    else if(num < 0)
    {
        printf("%d is negative, it cannot be prime.", num);
        return 0;
    }
    for(int i = 2; i<= num/2; i++)
    {
        if(num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    printf("%d is a prime number.", num);
    else
    printf("%d is not a prime number.", num);
    return 0;
}

int maing()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factors of %d are: ", num);
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        printf("%d ", i);
    }
    return 0;
}

int mainh()
{
    int a,b;
    printf("Enter 1st number: "); scanf("%d", &a);
    printf("Enter 2nd number: "); scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Reverse are as follows: \n");
    printf("1st number is: %d\n2nd number is: %d", a,b);
    return 0;
}

int maini()
{
    int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    for(int i = 1; i<= row; i++)
    {
        for(int j = 1; j<= i; j++)
        {
            printf("* ");
        }
         printf("\n");
    }
    return 0;
}

int cataloguei()
{
    sleep(1);
    printf("\n");
    printf("\t\tARRAY OPERATION MENU: \t\t");   
    printf("\n1. Find even numbers in the array.");
    printf("\n2. Find odd numbers in the array.");
    printf("\n3. Find the sum and average of numbers of the array.");
    printf("\n4. Find the maximum and minimum value in the array.");
    printf("\n5. Deletion of repeated elements in the array.");
    printf("\n6. Reverse the array.");
    printf("\n7. Sort the array in ascending order.");
    printf("\n8. Sort the array in descending order.");
    printf("\n9. Enter a new array.");
    printf("\n0. Quit.");
    return 0;
}

int mainj()
{
    int a[max], size, sum = 0, temp;
    int ans;

    printf("\nEnter array size: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter array[%d]: ", i + 1);
        scanf("%d", &a[i]);
    }

    cataloguei();

    while (1) {
        printf("\n\nEnter your choice: ");
        scanf("%d", &ans);

        switch (ans) {
            case 1: {
                printf("\ni) Even elements are: ");
                for (int i = 0; i < size; i++) {
                    if (a[i] % 2 == 0)
                        printf("%d ", a[i]);
                }
            }
            break;

            case 2: {
                printf("\nii) Odd elements are: ");
                for (int i = 0; i < size; i++) {
                    if (a[i] % 2 != 0)
                        printf("%d ", a[i]);
                }
            }
            break;

            case 3: {
                sum = 0;
                for (int i = 0; i < size; i++) {
                    sum += a[i];
                }
                printf("\niii) Sum of array is %d and its average is %.2f", sum, (float) sum / size);
            }
            break;

            case 4: {
                int temp;
                for (int i = 0; i < size - 1; i++)
                    for (int j = i + 1; j < size; j++) {
                        if (a[i] > a[j]) {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                printf("\niv) Maximum element is %d and minimum is %d", a[size - 1], a[0]);
            }
            break;

            case 5: {
                for (int i = 0; i < size; i++) {
                    for (int j = i + 1; j < size; j++) {
                        if (a[i] == a[j]) {
                            for (int k = j; k < size - 1; k++) {
                                a[k] = a[k + 1];
                            }
                            size--;
                            j--;
                        }
                    }
                }
                printf("\nArray after deletion of repeated elements: ");
                for (int i = 0; i < size; i++)
                    printf("%d ", a[i]);
            }
            break;

            case 6: {
                printf("\nvi) Reverse array is: ");
                while (size != 0) {
                    size--;
                    printf("%d ", a[size]);
                }
            }
            break;

            case 7: {
                for (int i = 0; i < size - 1; i++) {
                    for (int j = i + 1; j < size; j++) {
                        if (a[i] > a[j]) {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                }
                printf("\nvii) Sorted array in ascending order is: ");
                for (int i = 0; i < size; i++)
                    printf("%d ", a[i]);
            }
            break;

            case 8: {
                for (int i = 0; i < size - 1; i++)
                    for (int j = i + 1; j < size; j++) {
                        if (a[i] < a[j]) {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                printf("\nviii) Sorted array in descending order is: ");
                for (int i = 0; i < size; i++)
                    printf("%d ", a[i]);
            }
            break;

            case 9: {
                printf("\nix) Enter new array size: ");
                scanf("%d", &size);
                for (int i = 0; i < size; i++) {
                    printf("Enter array[%d]: ", i + 1);
                    scanf("%d", &a[i]);
                }
            }
            break;

            case 0:
                printf("\nQuit..");
                return 0;

            default:
                printf("\nWrong choice.");
                break;
        }
    }
}

int catalogueii()
{
    printf("\n\t\tMENU: ");
    printf("\n1. Sum and product of digits of an integer.");
    printf("\n2. To reverse a number.");
    printf("\n3. Sum of the series[S = 1 + 1/2 + 1/3 + 1/4 + ...]");
    printf("\n5. Sum of the series[S = 1 - 2 + 3 - 4 + 5...].");
    printf("\n6. Check whether a string is palindrome or not.");
    printf("\n7. Factors of a given number.");
    printf("\n8. Swaps two number.");
    printf("\n9. Print a star triangle.");
    printf("\n10. Array operations.");
    printf("\n0. Quit.");
}

int main()
{
    int ans;
    printf("These are all the solutions of possible practical questions of XI semester - I");
    while(1)
    {
        printf("\n");
        catalogueii();
        sleep(1);
        printf("\n\nEnter question number: ");
    scanf("%d",&ans);
        switch(ans)
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

            case 6:
            mainf();
            break;

            case 7:
            maing();
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
        }
    }
}