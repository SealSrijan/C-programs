#include <stdio.h>
#include <math.h>
#define max 100
int main()
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