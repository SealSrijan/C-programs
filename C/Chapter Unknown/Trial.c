#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define name "From Mr.Alpha"
int main()
{
    char ans[20];
    printf("Please give your ans to my upcoming question in yes or no\n\n");
    sleep(1);
    printf("Dz?(yes/no): ");
    scanf(" %s", &ans);
    char ans1[20] = "yes";
    int result1 = strcmp(ans1, ans);
    char ans2[20] = "no";
    int result2 = strcmp(ans2, ans);
    if(result1 == 0)
    printf("Under construction");
    else if(result2 == 0)
    {
    printf("under construction");
    printf("\n\n%s", name);
    }
    else 
    printf("Wrong Input. Please read instructions carefully and run the code again.");
 return 0;
}