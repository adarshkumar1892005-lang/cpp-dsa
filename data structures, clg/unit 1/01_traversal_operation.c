#include <stdio.h>

int main()
{
    int a[50], size, num , pos ;
    printf("enter size of array: ");
    scanf("%d", &size);
    printf("enter elements of array:- ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
        printf("\n");
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
        printf(" ");
    }
    
    
    return 0;
}

