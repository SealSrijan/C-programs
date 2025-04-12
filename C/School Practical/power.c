#include <stdio.h>
int main()
{
    int num, pow, i, ans = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter its power: ");
    scanf("%d", &pow);
    for(i = 1; i<= pow; i++)
    {
        ans *= num;
    }
    printf("The value is: %d", ans);
    return 0;
}