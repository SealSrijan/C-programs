/*
 * chapter1.c
 *
 *  Created on: 13-Dec-2022
 *      Author: apple
 */

#include <stdio.h>

/*
 * Ramesh’s basic salary is input through the keyboard.
 * His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.
 * Write a program to calculate his gross salary.
 */
int maina()
{
    int salary, dear_allowance, rent_allowance, gross_salary;
    printf("Basic salary of Ramesh is $");
    scanf("%d", &salary);
    //dear_allowance = salary x 40/100. Since,dear allowance is 40% of basic salary
    printf("Ramesh's Dearness allowance is $%d\n", salary*40/100);
    //rent_allowance = salary* 20/100. Since,rent allowance is 20% of basic salary
    printf("Ramesh's rent allowance is $%d\n", salary* 20/100);
    gross_salary = salary+ dear_allowance+ rent_allowance; //Formula of gross salary
    printf("His gross salary is $%d", gross_salary);
    printf("\n--------   End of Program a --------");
    return 0;
}
/*
 * The distance between two cities (in km.) is input through the keyboard.
 * Write a program to convert and print this distance in meters, feet, inches and centimeters.
 *
 */
int mainb()
{
    int km, m, cm;
    float ft, inch;
    printf("Write the distance of two cities in km is ");
    scanf("%d", &km);
    //m= km*1000; Multiplying km by 1000 we get m. 1 km = 1000 m
    printf("The distance between the two cities in m is %d m\n", km*1000);
    //cm = m* 100;  Multiplying m by 100 we get cm. 1 m = 100 cm
    printf("The distance between the two cities in cm is %d cm\n", km*1000*100);
    //ft= km* 3280.84;  Multiplying km by 3280.84 we get 1 foot. 1 km = 3280.84 ft
    printf("The distance between the two cities in foot is %.2f ft\n", km* 3280.84);
    //inch= km* 39370.1;  Multiplying km by 39370.1 we get 1 inch. 1 km = 39370.1 inch
    printf("The distance between the two cities is %.2f inch\n", km* 39370.1);
    printf("Thank You..!!!");
    printf("\n--------   End of Program b --------");
    return 0;
}

/*
 * If the marks obtained by a student in five different subjects are input through the keyboard,
 * write a program to find out the aggregate marks and percentage marks obtained by the student.
 * Assume that the maximum marks that can be obtained by a student in each subject is 100.
 */
int mainc()
{
    int mat, psc, lsc, comp, tm, tmg;
    float per;
    printf("Please enter marks obtained in \n");
    printf("Mathematics: ");
    scanf("%d", &mat);
    printf("Physical Science: ");
    scanf("%d", &psc);
    printf("Life science: ");
    scanf("%d", &lsc);
    printf("Computer: ");
    scanf("%d", &comp);
    // Total marks obtained
    tm= mat+psc+lsc+comp;
    printf("Total marks obtained is: %d\n", tm);
    // find total exam marks
    tmg = 4*100;
    // multiplying by 1.0 to make the percentage result in decimal
    per= 100 * ((tm*1.0)/tmg);
    printf("Total Percentage: %.2f", per);
    printf("\n--------   End of Program c --------");
    return 0;
}

/*
 * Temperature of a city in Fahrenheit degrees is input through the keyboard.
 * Write a program to convert this temperature into Centigrade degrees.
 */
int maind()
{
    float f, c;
    printf("Temperature of a city in Fahrenheit scale is ");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("The temperature of the city in Celsius scale is %.2f ", c);
    printf("\n--------   End of Program d --------");
    return 0;
}

/*
 * The length and breadth of a rectangle and radius of a circle are input through the keyboard.
 * Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.
 */
int maine()
{
    float length, breadth, area_of_rectangle, perimeter, radius, area_of_circle, perimeter_of_circle;
    printf("The length of a rectangle in m is ");
    scanf("%f", &length);
    printf("The breadth of the rectangle in m is ");
    scanf("%f", &breadth);
    area_of_rectangle = length * breadth;// Formula of area of rectangle.
    printf("The area of the rectangle is %.2f sq.m\n", area_of_rectangle);
    perimeter = 2*(length+breadth);// Formula of perimeter of rectangle.
    printf("The perimeter of the rectangle is %.2f m\n", perimeter);
    printf("The radius of a circle in m is ");
    scanf("%f", &radius);
    area_of_circle= (22* radius* radius)/7; // Area of circle = pi x radius^2
    printf("The area of the circle is %.2f sq.m\n", area_of_circle);
    perimeter_of_circle= (2* 22* radius)/7; // perimeter = 2 x pi x radius
    printf("The perimeter of the circle %.2f m", perimeter_of_circle);
    printf("\n--------   End of Program e --------");
    return 0;
}

/*
 * Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size
 * A(n) is defined as A(n-1) cut in half parallel to its shorter sides.
 * Thus paper of size A1 would have dimensions 841 mm x 594 mm.
 * Write a program to calculate and print paper sizes A0, A1, A2, ... A8.
 */

int mainf(){
	printf("    Length  Breadth");
	int A0_length= 1189, A0_width= 841;
	printf("\nA0 = %d   %d", A0_length, A0_width);
	int A1_length= A0_width, A1_width= A0_length/2;
	printf("\nA1 = %d    %d", A1_length, A1_width);
	int A2_length= A1_width, A2_width= A1_length/2;
	printf("\nA2 = %d    %d", A2_length, A2_width);
	int A3_length= A2_width, A3_width= A2_length/2;
	printf("\nA3 = %d    %d", A3_length, A3_width);
	int A4_length= A3_width, A4_width= A3_length/2;
	printf("\nA4 = %d    %d", A4_length, A4_width);
	int A5_length= A4_width, A5_width= A4_length/2;
	printf("\nA5 = %d    %d", A5_length, A5_width);
	int A6_length= A5_width, A6_width= A5_length/2;
	printf("\nA6 = %d    %d", A6_length, A6_width);
	int A7_length= A6_width, A7_width= A6_length/2;
	printf("\nA7 = %d    %d", A7_length, A7_width);
	int A8_length= A7_width, A8_width= A7_length/2;
	printf("\nA8 = %d     %d", A8_length, A8_width);
	printf("\n--------   End of Program f --------");
	return 0;
}

int main() {
	char ans;
	printf("Program of chapter 1 of the book \'Let us C:\'");
	while(1){
		printf("\n\nEnter your choice(a-f) [To quit enter q]: ");
		scanf("%c",&ans);
		switch(ans){
		case 'a':
			maina();
			break;
		case 'b':
			mainb();
			break;
		case 'c':
			mainc();
			break;
		case 'd':
			maind();
			break;
		case 'e':
			maine();
			break;
		case 'f':
			mainf();
			break;
		case 'q':
			break;
		default:
			printf("wrong choice");
			break;
		}
		if(ans == 'q')
			break;
		//break;
		//calling getchar to consume the the extra character <Enter> key
		ans = getchar();
	}
	printf("\n--------   End of chapter 1 Program --------");
}
