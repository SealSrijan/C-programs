#include <stdio.h>
#include <string.h>
#define max 100
int main()
{
    char a[max];
    printf("Enter string: ");
    gets(a);
    int len = strlen(a);
    int flag = 0;
    for(int i = 0; i<len/2; i++)
    {
        if(a[i] != a[--len])
        {
            flag = 0;
            break;
        }
        else    
            flag = 1;
    }
    if(flag)
    printf("Given string is palindrome! ");
    else
    printf("Given string is not palindrome! ");
}


// Step 1: Start
// step 2: Globally declare max as 100
// Step 3: Declare variable of name a[max] of string type, integer type flag assigned with 0 and len with length of the string
// Step 4: Display "Enter string: " and take input from user.
// Step 5: while i<(len/2) go to step 6 else go to step 8 
// Step 6: if(a[i] is not equals to a[--len]) set flag as zero and go to step 8, else set flag as 1
// Step 7: increment the value of i by 1 and go to step 5.
// Step 8: if(flag = 1) display "Given string is Palindrome!" else display "Given string is not palindrome!"
// Step 9: Exit.
