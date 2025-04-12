#include <stdio.h>
#include <string.h>
int main()
{
    char a1[20] = "yes", ans[3];
    scanf("%s", &ans);
    int i = strcmp(a1, ans);
    if(i == 0)
    printf("Code runs in 0");
    else
    printf("Runs in 1");

}
