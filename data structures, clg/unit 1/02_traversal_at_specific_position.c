#include <stdio.h>

int main()
{
    int a[50], size, num, pos;
    printf("enter size of array: ");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("overflow condition");
    }
    else
    {

        printf("enter elements of array:- ");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
            printf("\n");
        }
        printf("enter data you want to insert: ");
        scanf("%d", &num);
        pos =2;
            for (int i = size - 1; i >= pos - 1; i--)
            {
                a[i + 1] = a[i];
            }
            a[pos - 1] = num;
            size++;
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d", a[i]);
            printf(" ");
        }
    

    return 0;
}
