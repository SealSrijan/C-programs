#include <stdio.h>
#define max 100

int decimal_to_binary()
{
    {
    int decimal_input, a[max],i = 0,temp;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_input);
    
    while(decimal_input != 0)
    {
        a[i] = decimal_input % 2;
        i++;
        temp = i;
        decimal_input /= 2;
    }

    for(i = temp - 1; i>=0; i--)
    {
        printf("%d", a[i]);
    }
}
}

int binary_to_octal()
{
    int binary, count = 0, a[max],i = 0, decimal = 0, b[max];
    int j = 0, temp;
    printf("Enter Binary number: ");
    scanf("%d", &binary);
    while(binary != 0)
    {
        int x = binary % 10;
        a[i] = x;
        i++;
        binary = binary/10;
        count++;
    }
    for(i = count-1; i>= 0; i--)
    {
        decimal = decimal * 2 + a[i];
    }
    int dec = decimal;
    printf("Decimal is: %d", dec);   
    while(dec != 0)
    {
        b[j] = dec % 8;
        j++;
        temp = j;
        dec /= 8;
    } 
    printf("\nOctal is: ");
    for(j = temp - 1; j>=0; j--)
    {
        printf("%d",b[j]);
    }
}


int main()
{
    
    while(1)
    {
        getchar();
        printf("\na) Decimal to Binary.\nb) Binary to Octal");
        printf("\n\nEnter choice(q to quit): ");
    char ans;
    scanf(" %c", &ans);
        switch(ans)
        {
            case 'a':
            decimal_to_binary();
            break;

            case 'b':
            binary_to_octal();
            break;

            case 'q':
            return 0;

            default:
            printf("Wrong Choice..!!");
        }   
    }
}
