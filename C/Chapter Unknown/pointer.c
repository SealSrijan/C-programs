#include<stdio.h>
int main()
{
    int a=10;
    int *p = &a; 
    //* - derefernce operator
    //& - reference operator 
    //*p = a
    // p = &a
    printf("1. %d\n",a); //value of a
    printf("2. %p\n",&a); // address
    printf("3. %p\n",*p); // memory address
    printf("4. %d\n",*p); // 10
    printf("5. %p\n",p); // address

    int a[4] = {1,5,7,8};
    for(int i = 0; i<4; i++)
    printf("%p\n", &a[i]);

int a[5] = {25, 50, 75, 100, 125};
printf("%lu", sizeof(a));
}