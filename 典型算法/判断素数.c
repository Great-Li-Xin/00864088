#include <stdio.h>
int main(void){
    int i,m;
    printf("����m:");
    scanf("%d",&m);
    for (i = 2; i <= m/2 ; i++)
        if (m%i==0)
            break;
        if (i>m/2&&m!=1)
            printf("%d������",m);
        else
            printf("%d��������",m);
    return 0;
}