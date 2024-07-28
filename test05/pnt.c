#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int T[6];
    int S ;
    int *P ;

    P = T ;

    printf("enter les numbers in tabel follos : \n");
    for(P = T; P < T+6 ; P++)
    {
        printf("T[%ld] = ", P-T);
        scanf("%d", P);
    }
}
