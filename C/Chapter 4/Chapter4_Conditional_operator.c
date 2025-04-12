#include <stdio.h>
#include <math.h>
int maina()
{
    char character;
    printf("Enter Character: ");
    scanf(" %c", &character);
    ((character>=97 && character<=122)? printf("%c is in lower case", character):printf("%c is not in lower case", character));
    return 0;
}
int mainb()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    ((year%4==0)||(year%400==0))?printf("%d is a leap year", year):printf("%d is not a leap year", year);
    return 0;
}
int mainc()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    ((a>b)&&(a>c))?printf("%d is the largest number",a):((b>a)&&(b>c))?printf("%d is the largest number",b): printf("%d is the largest number", c);
    return 0;
}
int maind()
{
    int angle;
    float a,b;
    printf("Enter angle: ");
    scanf("%d", &angle);
    a= (sin(angle))*(sin(angle));
    b= (cos(angle))*(cos(angle));
    (a+b==1)?printf("Sum of sine and cosine of %d is 1",angle):printf("Sum of sine and cosine of %d is not equal to 1", angle);
    return 0;
}
int maine()
{
    float sal ;
    printf ( "Enter the salary: " );
    scanf ( "%f", &sal );
    (sal>= 25000 && sal <= 40000)?printf("Manager\n"):( sal >= 15000 && sal < 25000 )?printf("Accountant\n"):printf("Clerk\n");
}
int main() {
	char ans;
	printf("Program of chapter 4 of the book \'Let us C:\'");
	while(1){
		printf("\n\nEnter your choice(a-e) [To quit enter q]: ");
		scanf("%c",&ans);
		switch(ans){
		case 'a':
			maina();
			break;
        case'b':
            mainb();
            break;
        case'c':
            mainc();
            break;
        case'd':
            maind();
            break;
        case'e':
            maine();
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
	printf("\n--------   End of chapter 4 Program --------");
}
