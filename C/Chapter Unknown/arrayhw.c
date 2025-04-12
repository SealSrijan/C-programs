#include <stdio.h>
int main()
{
    char alphabets[100];
    int k = 0, m = 0, c = 0;
    printf("\n\t\tCode to check number of vowels and consonants in your name.\n\n");
    printf("Enter your name (type '0' at end to confirm): ");
    int i;
    for(i = 0; i<100; i++)
    {
        scanf("%c", &alphabets[i]);
        if (alphabets[i] == '0')
        {
            break;
        }
        c++;
    }
    for(i = 0; i<c; i++){
    if(( alphabets[i] == 'a' || alphabets[i] == 'e' || alphabets[i] == 'i' || alphabets[i] == 'o' || alphabets[i] ==  'u')||( alphabets[i] == 'A' || alphabets[i] == 'E' || alphabets[i] == 'I' || alphabets[i] == 'O' || alphabets[i] ==  'U'))
    {
        k ++;
    }
    else if(alphabets[i] >= 'a' && alphabets[i] <= 'z')
    {
        m ++;
    } 
    }
    printf("Number of Vowels: %d", k);
    printf("\nNumber of Consonants: %d", m);
    return 0;
}