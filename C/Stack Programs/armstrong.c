#include <stdio.h>
int main()
{
    
    int row;
    printf("Enter row: ");
    scanf("%d", &row);

    int  a[row][row], b[row][row];

    printf("Enter elements: ");
    for(int i = 0; i<row; i++)
        for(int j = 0; j<row; j++)
            scanf("%d", &a[i][j]);
    
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<row; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
    }   
     
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<row; j++)
            {
                b[j][i] = a[i][j];
            }
    }

    printf("Transpose matrix is: \n");

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<row; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
    }  
}