#include <stdio.h> // Programiz Edition
#include <string.h>
#include <unistd.h>
#define max 100
#define coder "Srijan"
void alphabet();
void january();
void end();
int main()
{
    sleep(0.5);
    printf("This code is specially made for you.");
    sleep(1.5);
    printf("\nNow Answer my question: ");
    sleep(1);
    printf("Do you love me?(y/n)\n");
    sleep(1);
    printf("Answer: ");
    for(int i = 1;;i++)
    {
        if(i > 1){
    sleep(1);
    printf("\nI'll not leave you baby!");
    sleep(1);
    printf("\nAgain answer me...");
    sleep(1);
    printf("\nDo you love me?(y/n)\n");
    sleep(1);
    printf("Answer: ");
    }
    char ans;
    fflush(stdin);
    scanf("%c", &ans);
    switch(ans)
    {
        case 'y':
        case 'Y':
        {
            sleep(2);
        printf("\nI am glad to hear this!");
        sleep(1);
        printf("\nNow answer my question..");
        sleep(1);
    printf("\nHow many alphabets are there in english language?\n");
    printf("Answer: ");
    int alpnum;
    scanf("%d", &alpnum);
    sleep(1);
    switch(alpnum)
    {
        case 26:
        {
            printf("\nYes! You are right..");
    sleep(1);
    printf("\nThough there are 26 alphabets in english...");
    sleep(1);
        alphabet();
        end();
        return 0;
        }
        break;
        default:
        {
           printf("\nYou answered Wrong!");
        sleep(1);
        alphabet();
        end();
        return 0;
        }
        
    }
    break;
        }

        case 'n':
        case 'N':
        {
            january();
            break;
        }

        default:
        {
            printf("\n\nSince you didnot give correct answer..");
            sleep(1);
            printf("\nThus I'll tell you a Shayari in bengali !");
            sleep(1);
            printf("\nThe Shayari goes: ");
            sleep(2);
            printf("\n\n\t\tAmi Mosha, Tumi Moshari !");
            sleep(1);
            printf("\n\t\tTomar Maa amar Sasuri ! %c\n\n", 3);
            sleep(2);
             
            break;
        }
    }
        
    }

    
    return 0;
}
void alphabet()
{
    printf("\nBut still I only love...");
    sleep(1);
    printf("\n\n\t\tU\n\n");
    sleep(2);
     
}

void january()
{
    printf("\nVery sorry!");
    sleep(1);
    printf("\nBefore seeing you for the last time..");
    sleep(1);
    printf("\nAnswer my last question: ");
    sleep(1);
    printf("what is the name of 1st month of our calender?");
    printf("\nAnswer: ");
    char a[max];
    char ans1[20] = "January";
    char ans2[20] = "january";
    char ans3[20] = "JANUARY";
    scanf("%s", &a);
    int result = strcmp(ans1, a);
    int result1 = strcmp(ans2, a);
    int result2 = strcmp(ans3, a);
    if (result == 0 || result1 == 0 || result2 == 0)
    {
        sleep(1);
        printf("Yes! You are right..");
        sleep(1);
        printf("\nSince you do not love me...");
        sleep(1);
        printf("\nBut still you are my January...");
        sleep(1);
        printf("without the last a,r,y   ");
        sleep(1);
        printf("ie,");
        sleep(1);
        printf("\n\n\t\t You are my Janu! \n\n", 3);
        sleep(2);
         
    }
    else
    {
    printf("\nYou answered Wrong!");
    sleep(1);
    printf("\nBut still you are my January...");
    sleep(1);
    printf("without the last a,r,y   ");
    sleep(1);
    printf("ie,");
    sleep(1);
    printf("\n\n\t\t You are my Janu! \n\n");
    sleep(2);
     
    }
}
void end()
{
    printf("\nThank you for using Code Crush ! ");
    sleep(1);
    printf("\n\n%s Edition!", coder);
    sleep(2);
}

