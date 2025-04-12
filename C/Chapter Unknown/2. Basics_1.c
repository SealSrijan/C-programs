// Header files section

#include <stdio.h>

//int function; can also replaceable by float main(), char main()

int main()

{
   /*Program to print basic Things*/
   //Declaring type;

   int a = 5, x; //Here the value '5' is assigned to 'a'. The value of 'x' will be given by user
   float b = 5, y; //Float is used for decimal numbers, other thing is same as int
   char c = 'C', z, s[100]; //Value of any character is assigned by '' // []is used to define the limit of string

   printf("\nInteger is %d", a); //%d is used to print the int value // \n is used for new line
   printf("\nDecimal is %f", b); //%f is for decimal type(float)
   printf("\nCharacter is %c", c); //%c is for character (char)

   //Now taking inputs from user and then displaying them

   printf("\n\nEnter integer: ");
   scanf("%d", &x); //"scanf" command is used to take input from user, and '&' is must before the variable
   printf("Enter decimal number: ");
   scanf("%f", &y);
   printf("Enter any character: ");
   scanf(" %c", &z);
   printf("Enter any string(for example your name): ");
   scanf("%s", &s);

   //Displaying the inputs
   printf("\n\nInteger: %d\nDecimal: %f\nCharacter: %c\nString: %s\n", x, y, z, s);
   return 0;
}
