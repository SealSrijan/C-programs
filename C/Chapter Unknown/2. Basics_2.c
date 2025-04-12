//Code for simple arithmetic operations

#include <stdio.h>
#include <conio.h>
#define PI 3.141

int main()
{
    int x, y, z;
    x = 5;
    y = 3;
    z = x+y;
    printf("\nSum is %d", z);
    getch();

    //same thing in new format

    int x1 = 5, y1 = 3;
    printf("\nSum is %d", x1+y1);
    getch();

    //same can be done using '-' , '*' , '/' , '%' signs
    // * for multiplication
    // / for division
    // % for remainder operation

    /*Example- 1: Remainder Operation*/

    int dividend, divisor;
    printf("\n\nEnter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    printf("Quotient: %d\n", dividend/divisor);
    printf("Remainder: %d\n", dividend%divisor);

    /*Example-2: To find area of different shapes*/

    int length, breadth, side, radius;
    printf("\n\nEnter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &breadth);
    printf("Area of rectangle: %d", length*breadth);

    printf("\n\nEnter side of a square: ");
    scanf("%d", &side);
    printf("Area of square: %d", side*side);

    printf("\n\nEnter radius of a circle: ");
    scanf("%d", &radius);
    printf("Area of circle: %f", PI * radius * radius);

    /*Write a C program that inputs four digits and converts them into a single decimal integer*/

    int a,b,c,d;
    printf("\n\na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);

    printf("The number is %d",(a*1000)+(b*100)+(c*10)+(d*1) );

/*
 * Temperature of a city in Fahrenheit degrees is input through the keyboard.
 * Write a program to convert this temperature into Centigrade degrees.
 */

    float f, c;
    printf("Temperature of a city in Fahrenheit scale is ");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("The temperature of the city in Celsius scale is %.2f ", c);

    return 0;
}
