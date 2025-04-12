#include <stdio.h> //vowel consonant checker
int main()
{
    char alphabets[100], b[100], c1[100];
    int k = 0, m = 0, c = 0;
    int x = 0,y = 0;

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
        k++;
        b[x] = alphabets[i];
        x++;
    }
    else if(alphabets[i] == '0'||alphabets[i]==' ')
    {
        m++;
    } 
    else
    {
        c1[y] = alphabets[i];
        y++;
    }
    }
    printf("Number of Vowels: %d", k);
    printf("\nVowels: ");
    for(i = 0; i<x; i++)
    {
        printf("%c ", b[i]);
    }  
    printf("\n");
    printf("\nNumber of Consonants: %d", (c-m-k));
    printf("\nConsonants: ");
    for(i = 0; i<y; i++)
    {
        printf("%c ", c1[i]);
    }
   return 0;
}