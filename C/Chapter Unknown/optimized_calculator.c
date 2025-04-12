#include <stdio.h>
int main()
{
    int a[100];
    int i,c = 0;
    int sum = 0;
    printf("Enter your desired values(at last press 0): ");
    for(i = 0; i<100; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            break;
        }
        c++;
    }
    for(i = 0; i<c; i++)
    {
        sum += a[i];
    }
    char ans;
    printf("Enter your operation sign(+): ");
    scanf(" %c", &ans);
    switch(ans)
    {
        case '+':
        printf("Sum is %d", sum);
        break;

        default:
        break;
    } 
    return 0;
}