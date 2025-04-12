#include <stdio.h>
#include <math.h>
/*If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred.*/
int maina()
{
    float cp, sp;
    printf("a) Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    if(sp>cp)
    {
        printf("Profit is %.0f", sp-cp);
        printf("\nProfit percentage is %.1f", ((sp-cp)/cp)*100);
    }
    else
    {
        printf("Loss is %.0f", cp-sp);
        printf("\nLoss percentage is %.1f", ((cp-sp)/cp)*100);
    }
    return 0;
}
/*Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.*/
int mainb()
{
    printf("Enter a number to check whether it is even or odd: ");
    int x;
    scanf("%d", &x);
    if(x%2 == 0)
        printf("%d is an even number", x);
    else
        printf("%d is an odd number", x);
    return 0;
}
int mainc()
{
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    if(year%400 ==0, year%4==0)
        printf("%d is a Leap Year", year);
    else
        printf("%d is not a leap year", year);
    return 0;
}
int maind()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    return 0;
}
int maine()
{
    int number, a,b,c,d,e,reversed_number;
    printf("Enter a five digit number: ");
    scanf("%d", &number);
    a=number%10;
    b=number%100/10;
    c=number%1000/100;
    d=number%10000/1000;
    e=number%100000/10000;
    reversed_number= (a*10000)+(b*1000)+(c*100)+(d*10)+(e*1);
    printf("The reverse number:  %d", reversed_number);
    if (number==reversed_number)
        printf("\nBoth are equal");
    else
        printf("\nThey are not equal");
    return 0;
}
int mainf()
{
    int ram, shyam, ajay; //Years of the three boys
    printf("Enter the age of Ram: ");
    scanf("%d", &ram);
    printf("Enter the age of Shyam: ");
    scanf("%d", &shyam);
    printf("Enter the age of Ajay: ");
    scanf("%d", &ajay);
    if (ram<shyam)
        printf("\nRam is the youngest.");
        else
        {
            if(shyam<ajay)
                printf("\nShyam is the youngest.");
                else
                printf("\nAjay is the youngest.");
        }
    return 0;
}
int maing()
{
    int x,y,z;//name of three angles
    printf("Enter the value of three angles of a triangle: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x+y+z == 180)
            printf("\nThe triangle is valid.");
    else
        printf("\nThe triangle is not valid.");
    return 0;
}
int mainh()
{
    int x;
    printf("\nEnter a number to get its absolute value: ");
    scanf("%d", &x);
    printf("The absolute value is %d\n", abs(x));
    return 0;
}
int maini()
{
    float x,y,area,perimeter;
    printf("Enter the lengths of rectangle: ");
    scanf("%f %f", &x,&y);
    area= x*y;
    perimeter=2.0*(x+y);
    if (area>perimeter)
        printf("\nThe area is greater then perimeter.");
    else
        printf("\nThe area is not greater than perimeter.");
    return 0;
}
int mainj()
{
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the co-ordinates(x1,y1): ");
    scanf("%d %d", &x1,&x2);
    printf("Enter the co-ordinates(x2,y2): ");
    scanf("%d %d", &x2,&y2);
    printf("Enter the co-ordinates(x3,y3): ");
    scanf("%d %d", &x3,&y3);
    if (((x1*(y2-y3))*(x2*(y3-y1))*(x3*(y1-y2))/2)==0)
    printf("Three points lie on one straight line.\n");
    else
        printf("Three points donot lie on one straight line.\n");
    return 0;
}
int maink()
{
    int x1,y1,x2,y2,r,PC,a,b;//PC= distance between center and point
    printf("Enter the coordinate of center: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius: ");
    scanf("%d", &r);
    printf("Enter the coordinate of a point: ");
    scanf("%d %d", &x2, &y2);
    a= pow((x2-x1), 2);
    b= pow((y2-y1), 2);
    PC= sqrt(a+b);
    if(r==PC)
        printf("\nThe point (%d,%d) lies on the circumference of the circle of radius %d.", x2,y2, r);
    else
    {
      if (r<PC)
      printf("\nThe point (%d, %d) lies outside the circle of radius %d.", x2, y2, r);
    else
        printf("\nThe point (%d, %d) lies within the circle of radius %d.", x2, y2, r);
    }
    return 0;
}
int mainl()
{
    int x,y;
    printf("Enter the co-ordinate(x,y): ");
    scanf("%d %d", &x,&y);
    if (x !=0, y !=0)
        printf("The points lie on origin\n");
        else
        {
            if (x ==0 ,y == 0)
            printf("The points lie on origin\n");
            else
                printf("The points lie on \n");
        }
    if (x == 0, y != 0)
        printf("The points donot lie on origin axis");
    return 0;
}

int main() {
	char ans;
	printf("Program of chapter 3 of the book \'Let us C:\'");
	while(1){
		printf("\n\nEnter your choice(a-l) [To quit enter q]: ");
		scanf("%c",&ans);
		switch(ans){
		case 'a':
			maina();
			break;
		case 'b':
			mainb();
			break;
        case'c':
            mainc();
            break;
        case'd':
            maind();
            break;
        case 'e':
            maine();
            break;
        case 'f':
            mainf();
            break;
        case'g':
            maing();
            break;
        case 'h':
            mainh();
            break;
        case'i':
            maini();
            break;
        case'j':
            mainj();
            break;
        case 'k':
            maink();
            break;
        case'l':
            mainl();
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
	printf("\n--------   End of chapter 3 Program --------");
}

