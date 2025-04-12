#include <stdio.h>
#include <conio.h>
int maine()
{
    float t; //t= temperature
    printf("\n\nEnter Temperature in Celsius: ");
    scanf("%f", &t);
    printf("In which unit you want to change? \nKelvin(k) \nFahrenheit(f)\n");
    char x;
    scanf(" %c", &x);
    if (x=='k')
    printf("The temperature in Kelvin scale is %.2fK", t+273);
    else if(x=='f')
        printf("The temperature in Fahrenheit scale is %.2fF",  (5*(t-32))/9);
    return 0;
}
int maind()
{
    int amt;
    printf("\n\nEnter amount in Indian Rupees: ");
    scanf("%d", &amt);
    char x;
    printf("In which currency do you want to convert? \nPress 'd' for Dollar \nPress 'e' for Euro \n\n");
    scanf(" %c", &x);
    if(x=='d')
            printf("Entered amount in dollar is: $%.2f", amt*82.89);
    else if(x=='e')
        printf("Entered amount in euro is: %.2f", amt*89.65);
    return 0;
}

int mainb()
{
    float l;
    printf("\n\nEnter length in metre(m): ");
    scanf("%f", &l);
    char x;
    printf("In which unit do you want to convert? press \n 'k' for Km \n 'c' for cm \n 'm' for mm \n 'i' for inch\n 'f' for feet\n");
    scanf(" %c", &x);
    if(x=='k')
        printf("Entered length in km is: %f", l/1000);
    else if(x=='c')
        printf("Entered length in cm is: %f", l*100);
        else if(x=='m')
        printf("Entered length in mm is: %f", l*1000);
        else if(x=='i')
        printf("Entered length in inch is: %.2f", l*39.37);
        else if(x=='f')
        printf("Entered length in feet is: %.2f", l*3.28);
        return 0;
}
int mainc()
{
    int v;
    printf("\n\nEnter volume in cc: ");
    scanf("%d", &v);
    char x;
    printf("In which unit you want to convert? SI(s) or CGS(c): ");
    scanf(" %c", &x);
    if (x=='s')
        printf("Entered volume in SI unit is: %d cubic metre", v*1000000);
        else if(x=='c')
        printf("Entered volume in CGS unit is: %dL", v*1000);
    return 0;
}
int maina()
{
    int m; //m= mass
    printf("\n\nEnter mass in g: ");
    scanf("%d", &m);
    char x;
    printf("In which unit you want to convert? \n Kilogram(k) \n Milligram(m) \n Pound(p) \n Carat(c)\n");
    scanf(" %c", &x);
    if(x=='k')
        printf("Mass in Kilogram is: %.3fkg", (float)m/1000);
    else if(x=='m')
        printf("Mass in Milligram is: %dmg", m*1000);
    else if(x=='p')
        printf("Mass in pound is: %f", m*0.002205);
    else if(x=='c')
        printf("Mass in carat is: %.2f", m*5);
        return 0;
}

int main() {
	int ans;
	printf("WELCOME TO UNIT CONVERTER PROGRAMME. \n\nPress ENTER to continue\n");
	while(1){
            getch();
		printf("\n\nEnter your choice..\n 1. Mass\n 2. Length\n 3. Volume\n 4. Currency\n 5. Temperature\n 6. Quit\n : ");
		scanf("%c",&ans);
		switch(ans){
		case '1':
			maina();
			break;
        case'2':
            mainb();
            break;
        case'3':
            mainc();
            break;
        case'4':
            maind();
            break;
        case'5':
            maine();
            break;
        default:
			printf("wrong choice");
			break;
		}
		if(ans == '6')
			break;
		//break;
		//calling getchar to consume the the extra character <Enter> key
		ans = getchar();
    }
	printf("\n-------- THANK YOU FOR USING!! --------");
	printf("\n\n DEVELOPER: SRIJAN");
	printf("\n-------- SEND YOUR VALUABLE ADVISES TO creative.ideas1610@gmail.com--------\n\n\n");

}
