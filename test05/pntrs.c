#include <unistd.h>
#include <stdio.h>


void echange(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y ;
    *y = tmp ;
}

int main(void)
{
    int a = 1 ;
    int b = 2 ;
    printf("a = %d and b = %d\n", a, b);
    echange(&a, &b);
    printf("a = %d and b = %d\n", a, b);
    return 0;
}