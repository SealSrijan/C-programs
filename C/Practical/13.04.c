#include <stdio.h>
int maina()
{
    printf("My name is Srijan.");
    return 0;
}

int mainb()
{
    printf("I read in class XI.");
    return 0;
}

int main()
{
    char ans;
    printf("Code ypu want to run: ");
    scanf("%c", &ans);
    switch(ans)
    {
        case 'a':
        maina;
        break;

        case 'b':
        mainb;
        break;

        default: printf("Wrong choice.");
    }
}