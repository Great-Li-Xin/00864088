#include <stdio.h>
int main(void){
    int n=0;
    char ch;
    printf("Enter a number: ");
    do{                                      //��do
        if (ch!='-'){
            n++;
        }
    }while ((ch=getchar())!='\n');           //���ж�
    printf("%d",n);
    return 0;
}
