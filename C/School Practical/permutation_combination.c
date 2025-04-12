#include <stdio.h>
#include <unistd.h>
/*int permutation()
{
    int n, r;
    int sum1 = 1, sum2 = 1;
    printf("\n\t\tnPr");
    printf("\nn: ");
    scanf("%d", &n);
    printf("r: ");
    scanf("%d", &r);
    for(int i = 2; i<=n; i++)
    {
        sum1 *= i;
    }
    for(int i = 2; i<= n-r; i++)
    {
        sum2 *= i;
    }
    if(n>=r)
    printf("%dP%d = %d\n", n,r, (sum1/sum2));
    else
    printf("\tMath ERROR\n");
    return 0;
}

int combination()
{
    int n,r;
    int sum1 = 1, sum2 = 1, sum3 = 1;
    printf("\n\t\tnCr");
    printf("\nn: ");
    scanf("%d", &n);
    printf("r: ");
    scanf("%d", &r);
    for(int i = 2; i<=n; i++)
    {
        sum1 *= i;
    }
    for(int i = 2; i<=r; i++)
    {
        sum3 *= i;
    }
    for(int i = 2; i<= n-r; i++)
    {
        sum2 *= i;
    }
    if(n>r)
    printf("%dC%d: %d\n", n,r, sum1/(sum3*sum2));
    else
    printf("\tMath ERROR\n");
    return 0;
}

int main()
{
    char ans;
    while(1)
    {
    printf("\na) Permutation.\nb) Combination.\ne) Exit.\nEnter your choice: ");
    scanf(" %c", &ans);
    switch(ans)
    {
        case 'a':
        permutation();
        break;

        case 'b':
        combination();
        break;

        default:
        printf("Syntax ERROR");
        break;

        case 'e':
        printf("END");
        return 0;

    }
    }

}*/

int main()
{
    int n,r;
    char type;
    scanf("%d%c%d", &n, &type, &r);
    printf("%d%c%d", n,type,r);
}