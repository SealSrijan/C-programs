#include <stdio.h>
int maina()
{
  int year;
      printf("\n\nEnter a year: ");
      scanf("%d", &year);
      if((year%4==0)||(year%400==0)||(year%4&&400==0))
        printf("%d is a leap year", year);
      else
        printf("%d is not a leap year",year);
      return 0;

}
int mainb()
{
  char character;
  printf("\n\nEnter any character: ");
  scanf(" %c", &character);

  if((character>64)&&(character<91))
    printf("%c is a upper case letter", character);

  else if((character>96)&&(character<123))
    printf("%c is a small case letter", character);
  else if((character>47)&&(character<58))
    printf("%c is a numerical digit", character);

  else if((character>-1)&&(character<48)||(character>57)&&(character<65)||(character>90)&&(character<97)||(character>122)&&(character<128))
    printf("%c is a special character", character);
  return 0;
}
int mainc()
{
    int hardness,tensile_strength;
    float carbon_content;
    printf("\n\nEnter hardness of steel: ");
    scanf("%d", &hardness);
    printf("Enter carbon content of steel: ");
    scanf("%f", &carbon_content);
    printf("Enter tensile strength of steel: ");
    scanf("%d", &tensile_strength);

    if((hardness>50)&&(carbon_content<0.7)&&(tensile_strength>5600))
        printf("Grade of steel is 10");

    else if((hardness>50)&&(carbon_content<0.7))
        printf("Grade of steel is 9");

    else if((carbon_content<0.7)&&(tensile_strength>5600))
        printf("Grade of steel is 8");

    else if((hardness>50)&&(tensile_strength>5600))
        printf("Grade of steel is 7");

    else if ((hardness>50)||(carbon_content<0.7)||(tensile_strength>5600))
        printf("Grade of steel is 6");

    else
        printf("Grade of steel is 5");
    return 0;

}
int maind()
{
    int a,b,c;
    printf("\n\nEnter three sides of a triangle: ");
    scanf("%d %d %d", &a,&b,&c);
    if((a<=b+c)&&(b<=a+c)&&(c<=b+a))
        printf("The triangle is valid");
    else
        printf("The triangle is not valid");
    return 0;
}
int maine()
{
    int a,b,c;
    printf("\n\nEnter length of three sides of a triangle: ");
    scanf("%d%d%d", &a,&b,&c);
    if((a==b)&&(a==c))
        printf("\n\nThe triangle is an equilateral triangle.");

    else if((a==b)||(a==c)||(b==c))
        printf("\n\nThe triangle is an isosceles triangle");

    else
        printf("\n\nThe triangle is a scalene triangle");
    return 0;
}
int mainf()
{
    int weight;
    printf("\n\nEnter Boxer's weight in pound: ");
    scanf("%d", &weight);//weight of boxer
        if(weight<115)
            printf("Boxer Class: Flyweight");

        else if((weight>=115)&&(weight<=121))
            printf("Boxer Class: Bantamweight");

        else if((weight>=122)&&(weight<=153))
            printf("Boxer Class: Featherweight");

        else if((weight>=154)&&(weight<=189))
            printf("Boxer Class: Middleweight");

        else if(weight>=190)
            printf("Boxer Class: Heavyweight");
        return 0;
}
int mainh()
{
    int birth_date,month;
    printf("Enter Birth date (1 - 31): ");
    scanf("%d", &birth_date);
    printf("Enter month(1 - 12): ");
    scanf("%d", &month);
    if(((month==12)&&(birth_date>=22))||((month==1)&&(birth_date<=19)))
        printf("\nZodiac sign: CAPRICORN");
    else if(((month==1)&&(birth_date>=20))||((month==2)&&(birth_date<=17)))
        printf("\nZodiac sign: AQUARIUS");
    else if(((month==2)&&(birth_date>=18))||((month==3)&&(birth_date<=19)))
        printf("Zodiac sign: PISCES");
    else if(((month==3)&&(birth_date>=20))||((month==4)&&(birth_date<=19)))
        printf("Zodiac sign: ARIES");
    else if(((month==4)&&(birth_date>=20))||((month==5)&&(birth_date<=20)))
        printf("Zodiac sign: TAURUS");
    else if(((month==5)&&(birth_date>=21))||((month==6)&&(birth_date<=20)))
        printf("Zodiac sign: GEMINI");
    else if(((month==6)&&(birth_date>=21))||((month==7)&&(birth_date<=22)))
        printf("Zodiac sign: CANCER");
    else if(((month==7)&&(birth_date>=23))||((month==8)&&(birth_date<=22)))
        printf("Zodiac sign: LEO");
    else if(((month==8)&&(birth_date>=23))||((month==9)&&(birth_date<=22)))
        printf("Zodiac sign: VIRGO");
    else if(((month==9)&&(birth_date>=23))||((month==10)&&(birth_date<=22)))
        printf("Zodiac sign: LIBRA");
    else if(((month==10)&&(birth_date>=23))||((month==11)&&(birth_date<=21)))
        printf("Zodiac sign: SCORPIO");
    else if(((month==11)&&(birth_date>=22))||((month==12)&&(birth_date<=21)))
        printf("Zodiac sign: SAGGITARIUS");
        else
            printf("Entered Wrong..!!");
   return 0;
}
int maini()
{
    float weight,height,BMI;
    printf("Enter weight(kg) and height(m): ");
    scanf("%f%f", &weight,&height);
    BMI=weight/(height*height);
    if(BMI<15.0)
        printf("Starvation");
    else if((BMI>=15.1)&&(BMI<=17.5))
        printf("Anorexic");
        else if((BMI>=17.6)&&(BMI<=18.5))
            printf("Underweight");
        else if((BMI>=18.6)&&(BMI<=24.9))
            printf("Ideal");
        else if((BMI>=25.0)&&(BMI<=29.9))
            printf("Overweight");
        else if((BMI>=30.0)&&(BMI<=39.9))
            printf("Obese");
        else
            printf("Morbidly obese");
        return 0;
}
int main() {
	char ans;
	printf("Program of chapter 4 of the book \'Let us C:\'");
	while(1){
		printf("\n\nEnter your choice(a-i) [To quit enter q]: ");
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
        case'e':
            maine();
            break;
        case'f':
            mainf();
            break;
        case'h':
            mainh();
            break;
        case'i':
            maini();
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
