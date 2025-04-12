#include <stdio.h>
#include <math.h>
int main()
/*{
    int len1, len2, len3, len4;
    printf("Enter length of 1st side: ");
    scanf("%d", &len1);
    printf("Enter length of 2nd side: ");
    scanf("%d", &len2);
    printf("Enter length of 3rd side: ");
    scanf("%d", &len3);
    printf("Enter length of 4th side: ");
    scanf("%d", &len4);
    float diag1 = sqrt((len1*len1)+(len2*len2));
    float diag2 = sqrt((len3*len3)+(len4*len4));

    printf("Diagonal 1: %.2f", diag1);
    printf("\nDiagonal 2: %.2f", diag2);

    if((len1 == len3) && (len2 == len4) && (len1 != len2) && (len3 != len4) && (diag1 == diag2))
    printf("\nThe Figure is a Rectangle.");
    else if((len1 == len2) && (len1 == len3) && (len1 == len4) && (diag1 == diag2))
    printf("\nThe Figure is a Square.");

    return 0;
}*/
/*{
    int len1, len2, len3, len4;
    printf("\tNB: All lengths in the following should be in cm");
    printf("Enter length of 1st side: ");
    scanf("%d", &len1);
    printf("Enter length of 2nd side: ");
    scanf("%d", &len2);
    printf("Enter length of 3rd side: ");
    scanf("%d", &len3);
    printf("Enter length of 4th side: ");
    scanf("%d", &len4);
    char ans;
    float diag1, diag2, dia1, dia2;
    printf("Are the length of diagonals same? (y/n): ");
    scanf(" %c", &ans);
    switch(ans)
    {
        case 'y':
        {
            diag1 = sqrt((len1*len1)+(len2*len2));
            diag2 = sqrt((len3*len3)+(len4*len4));
        }
        break;

        case 'n':
        {
            printf("Enter 1st diagonal: ");
            scanf("%f", &dia1);
            printf("Enter 2nd diagonal: ");
            scanf("%f", &dia2);    
        }
        break;

        default:
        break;        
    }

    if((len1 == len3) && (len2 == len4) && (len1 != len2) && (len3 != len4) && (diag1 == diag2))
    printf("\nThe Figure is a Rectangle.");
    
    else if((len1 == len2) && (len1 == len3) && (len1 == len4) && (diag1 == diag2))
    printf("\nThe Figure is a Square.");

    else if((len1 == len3) && (len2 == len4) && (len1 != len2) && (len3 != len4) && (dia1 != dia2))
    printf("\nThe Figure is a Parallelogram.");

    else if((len1 == len2) && (len1 == len3) && (len1 == len4) && (dia1 != dia2))
    printf("\nThe Figure is a Rhombus");

    else
    printf("The Figure is a Quadrilateral.");

    return 0;

}*/
{
    int i = 0;
    do
    {
        printf("\tSrijan");
        i++;
    }
    while(i<5);
}