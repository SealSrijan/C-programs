#include <stdio.h>
#include <unistd.h>
#define max 100
int catalogue()
{
    sleep(1);
    printf("\n\nYou can perform following operations in the entered array..");   
    printf("\n1. Even numbers in the array.");
    printf("\n2. Odd numbers in the array.");
    printf("\n3. Sum and average of numbers of the array.");
    printf("\n4. Maximum and minimum value in the array.");
    printf("\n6. Reverse the array.");
    printf("\n7. Enter a new array.");
    printf("\nTo quit press 'q'");
    return 0;
}
int main()
{
    int a[max], size, sum = 0;
    char ans;
    printf("\nEnter array size: ");
    scanf("%d", &size);
    for(int i = 0; i <size; i++)
    {
        printf("Enter array[%d]: ", i);
        scanf("%d", &a[i]);
    }
    catalogue();
    while(1)
    {
        printf("\n\nEnter your choice: ");
        scanf(" %c", &ans);

    switch(ans)
    {
        case '1':
        {
            printf("\ni) Even elements are: ");
    for(int i = 0; i<= size-1; i++)
    {
        if(a[i] % 2 == 0)
        printf("%d ", a[i]);
    }
        }
        break;

        case '2':
        {
        printf("\nii) Odd elements are: ");
        for(int i = 0; i<= size-1; i++)
    {
        if(a[i] % 2 != 0)
        printf("%d ", a[i]);
        
    }
        }
        break;

        case '3':
        {
            for(int i = 0; i< size; i++)
            {
                sum += a[i];
            }
            printf("\niii) Sum of array is %d and its average is %.2f", sum, (float)sum/size);
        }
        break;

        case '4':
        {
            int temp;
    for(int i = 0; i< size-1; i++)
        for(int j = i+1; j<size; j++)
{
    if (a[i]>a[j])
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    }
printf("\niv) Maximum element is %d and minimum is %d", a[size-1], a[0]);
        }
        break;

        case '6':
        {
           printf("\nvi) Reverse array is: ");
while(size != 0)
{
    size--;
    printf("%d ", a[size]);
}
        }
        break;

        case '7':
        {
            printf("\nEnter array size: ");
    scanf("%d", &size);
    for(int i = 0; i <size; i++)
    {
        printf("Enter array[%d]: ", i);
        scanf("%d", &a[i]);
        }
        break;

        case 'q':
        printf("Quit..");
        return 0;

        default:
        printf("Wrong choice.");
        break;
    }     
}
}
}