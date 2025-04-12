#include<stdio.h>

int main() {
    int n, y; // n = number of carbon atoms; y = number of hydrogen atoms
    printf("Enter the number of C-atoms: ");
    scanf("%d", &n);
    printf("Enter the number of H-atoms: ");
    scanf("%d", &y);
    printf("Do you want to add a functional group? (y/n): ");
    char a;
    scanf(" %c", &a);

    if(a == 'y') {
        printf("Choose a functional group:\n");
        printf("1. Alcohol\n");
        printf("2. Carboxylic acid\n");
        int nof; // nof = number of functional groups
        scanf("%d", &nof);

        // Implement functionality to handle functional groups
        // Currently, this section of the code is missing
    } else {
        // Determine and print the compound based on the given number of carbon and hydrogen atoms
        printf("Name of entered hydrocarbon(C%dH%d): ",n,y);
        if(n == 1 && y == 2 * n + 2)
            printf("Methane\n");
        else if(n == 2 && y == 2 * n + 2)
            printf("Ethane\n");
        else if(n == 3 && y == 2 * n + 2)
            printf("Propane\n");
        else if(n == 4 && y == 2 * n + 2)
            printf("Butane\n");
        else if(n == 1 && y == 2 * n)
            printf("Do not exist!\n");
        else if(n == 2 && y == 2 * n)
            printf("Ethene\n");
        else if(n == 3 && y == 2 * n)
            printf("Propene\n");
    else if(n == 4 && y == 2 * n)
            printf("Butene\n");
        else if(n == 1 && y == 2 * n - 2)
            printf("Do not exist!\n");
        else if(n == 2 && y == 2 * n - 2)
            printf("Ethyl\n");
        else if(n == 3 && y == 2 * n - 2)
            printf("Propyl\n");
        else if(n == 4 && y == 2 * n - 2)
            printf("Butyl\n");
        else
            printf("Unknown compound\n");
    }
    return 0;
}
