 #include <stdio.h>
#define max 10
int main()
{
    int a[max];
    int i, u = max - 1, l = 0, mid;
    for (i = 0; i < max; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }
    int num;
    printf("Enter number you want to search: ");
    scanf("%d", &num);
    while (l <= u)
    {
        mid = (u + l) / 2;

        if (a[mid] == num)
        {
            printf("Found at: %d\n", mid);
            break;
        }
        else if (a[mid] < num)
        {
            l = mid + 1;
        }
        else
        {
            u = mid - 1;
        }
    }
    if (l > u)
    {
        printf("Number not found!\n");
    }
}
