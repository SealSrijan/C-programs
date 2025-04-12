#include <stdio.h>
int main()
{
    int num[100];
    int k = 0, m = 0, c = 0;
    printf("\n\t\tCode to check number of even and odd numbers.\n\n");
    printf("Enter numbers by giving space b/w 2 consecutive numbers (type '0' at end to confirm): ");
    int i;
    for(i = 0; i<100; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] == 0)
        {
            break;
        }
        c++;
    }
    for(i = 0; i<c; i++){
    if(num[i] % 2 == 0)
    {
        k ++;
    }
    else
    {
        m ++;
    } 
    }
    printf("Number of Even numbers: %d", k);
    printf("\nNumber of Odd numbers: %d", m);
    return 0;
}