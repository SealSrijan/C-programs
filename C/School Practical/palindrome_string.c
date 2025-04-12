#include <stdio.h>
#include <string.h>
#define max 100
int main()
{
    char str[max], tempstr[max], lower_str[max], temp;
    int i = 0, j = 0;
    printf("Enter the string(without any punctuations): ");
    gets(str);
    //converts the whole string in lower case
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            lower_str[j] = str[i] + 32;
        else
            lower_str[j] = str[i];
        i++;
        j++;
    }
    lower_str[j] = '\0';
    //removes space within a string
    for(i= 0, j=0; lower_str[i] != '\0'; i++)
    {
        if(lower_str[i] != ' ')
        {
            lower_str[j] = lower_str[i];
            j++;
        }
    }
    lower_str[j] = '\0';
    //copying the original string to a temporary string
    strcpy(tempstr, lower_str);
    int k = 0, l= 0;
   int n = strlen(lower_str), flag = 1;
    for(int i = 0; i<= n/2; i++)
    {
        if(lower_str[i] != lower_str[n-i-1])
        {
            flag = 0;
            break;
        }
    } 
   
   if(flag)
   printf("\"%s\" is a Palindrome", str);
   else
   printf("\"%s\" is not a Palindrome", str);
    return 0;
}

