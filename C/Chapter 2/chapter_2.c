#include <stdio.h>
#include <math.h>
/*If a five-digit number is input through the keyboard, write a
*program to calculate the sum of its digits. (Hint: Use the modulus
*operator ‘%’)*/
int maina()
{
    int a,b,c,d,e,f, g;
    printf("a) Enter a five digit number ");
    scanf("%d", &f);
    a= f%10;
    b= f%100/10;
    c= f%1000/100;
    d= f%10000/1000;
    e= f%100000/10000;
    g= a+ b+ c+ d+ e;
    printf("The sum of the digits of the number: %d", g);
    return 0;
}
//If a five-digit number is input through the keyboard, write a program to reverse the number.

int mainb()
{
    int a,b,c,d,e,f, g;
    printf("b) Enter a five digit number ");
    scanf("%d", &f);
    a= f%10;
    b= f%100/10;
    c= f%1000/100;
    d= f%10000/1000;
    e= f%100000/10000;
    printf("The reverse number of the entered number: %d%d%d%d%d", a,b,c,d,e);
    return 0;
}

//If lengths of three sides of a triangle are input through the
//keyboard, write a program to find the area of the triangle.
//a=/s(s-a)(s-b)(s-c)
int mainc()
{
    float a,b,c, area, semiperimeter,x,y,z;
    printf("c) The lengths of the three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("The lengths of the triangle are %.1fcm %.1fcm %.1fcm", a,b,c );
    semiperimeter= (a+b+c)/2;
    printf("\ns= %.1f", semiperimeter);
    x= semiperimeter-a;
    y= semiperimeter-b;
    z= semiperimeter-c;
    area= sqrt(semiperimeter*x*y*z);
    printf("\nThe area is %.1f", area);
    return 0;
}
//Write a program to receive Cartesian co-ordinates (x, y) of a point
//and convert them into polar co-ordinates (r, ).
//Hint: r = sqrt ( x2 + y2 ) and tan-1 ( y / x )
int maind()
{
    int x,y,r,phi;
    printf("d) Write the Cartesian co-ordinates: ");
    scanf("%d %d", &x,&y);
    printf("\nThe given co-ordinates are: (%d, %d)", x,y);
    r= sqrt((x*x)+(y*y));
    phi= tan(-1)*(y/x);
    printf("\nThe co-ordinate in polar co-ordinate: (%d, %d)", r, phi);
    return 0;

}
int maine()
{
    float L1, L2, G1, G2, D;
    printf("e) The latitude in degrees: ");
    scanf("%f %f", &L1, &L2);
    printf("\nThe longitude in degrees: ");
    scanf("%f %f", &G1, &G2);
    printf("The latitude is %.1f, %.1f", L1, L2);
    printf("\nThe longitude is %.1f, %.1f", G1, G2);
    //D= 1/cos(3961)* (sin(L1)*sin(L2)+ cos(L1)* cos(L2)* cos(G2-G1));
    printf("\nThe distance in nautical miles is %.2f",1/cos(3961)* (sin(L1)*sin(L2)+ cos(L1)* cos(L2)* cos(G2-G1)));
    return 0;
}
int mainf()
{
    float t,v,a;
    printf("f) Temperature of air ");
    scanf("%f", &t);
    printf("Velocity of air ");
    scanf("%f", &v);
    //wind_chill_factor = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v0.16
    a= pow(v,0.16);
    printf("The wind chill factor is %.2f", 35.74+ (0.6215*t)+ ((0.4275*t)- 35.75)*a);
    return 0;
}
int maing()
{
    int x;
    printf("g) Enter angle: ");
    scanf("%d", &x);
    printf("\ntan of the given angle: %.2f ", tan(x));
    printf("\ncos of the given angle: %.2f ", cos(x));
    printf("\nsin of the given angle: %.2f ", sin(x));
    return 0;
}
//Two numbers are input through the keyboard into two locations C
//and D. Write a program to interchange the contents of C and D.
int mainh()
{
    int C, D,x;
    x=C;
    C=D;
    D=x;
   printf("\nh) Enter only number");
    printf("\nC: ");
    scanf("%d", &C);
    printf("D: ");
    scanf("%d", &D);
    printf("\nInterchanging the contents of C and D");
    printf("\nC: %d", D);
    printf("\nD: %d", C);
    return 0;
}
int maini()
{
    int rs, a,b,c,x,y,z;
    printf("\nRs. ");
    scanf("%d", &rs);
    a=rs/ 100;
    rs= rs -(a*100);
    b= rs/ 50;
    rs= rs - (b*50);
    c= rs/ 10;
    rs= rs - (c*10);
    x= rs / 5;
    rs= rs - (x*5);
    y= rs / 2;
    rs= rs - (y*2);
    z= rs/ 1;
    rs= z- (z*1);
    printf("\n%d number of Rs.100 is required", a);
    printf("\n%d number of Rs.50 is required", b);
    printf("\n%d number of Rs.10 is required", c);
    printf("\n%d number of Rs.5 is required", x);
    printf("\n%d number of Rs.2 is required", y);
    printf("\n%d number of Rs.1 is required", z);
    return 0;

}
int main() {
	char ans;
	printf("Program of chapter 2 of the book \'Let us C:\'");
	while(2){
		printf("\n\nEnter your choice(a-i) [To quit enter q]: ");
		scanf("%c",&ans);
		switch(ans){
		case 'a':
			maina();
			break;
        case 'b':
            mainb();
            break;
		case 'c' :
            mainc();
            break;
        case'd':
            maind();
            break;
        case'e':
            maine();
            break;
        case'f':
            mainf();
            break;
        case 'g':
            maing();
            break;
        case'h':
            mainh();
            break;
        case 'i':
            maini();
            break;
		case 'q':
			break;
		default:
			printf("wrong choice ");
			break;
		}
		if(ans == 'q')
			break;
		//break;
		//calling getchar to consume the the extra character <Enter> key
		ans = getchar();
	}
	printf("\n--------   End of chapter 2 Program --------");
}
