// C_String01.c		���ļ�����Ҫ����4�������Ķ��壨������ʵ�֣�
#include <stdlib.h>
#include <string.h>
// ���� SWAP1��SWAP2��SWAP3��STRCAT�Ķ���

// SWAP1
void SWAP1(char str1[], char str2[]) {
    char tmp[10];
    strcpy(tmp, str1);
    strcpy(str1, str2);
    strcpy(str2, tmp);
}

// SWAP2
void SWAP2(char **p_1, char **p_2) {
    char *tmp;
    tmp = *p_1;
    *p_1 = *p_2;
    *p_2 = tmp;
}

// SWAP3
void SWAP3(char **p_1, char **p_2) {
    char *tmp;
    tmp = *p_1;
    *p_1 = *p_2;
    *p_2 = tmp;
}

// STRCAT
char *STRCAT(char *dest, const char *src) {
    char *tmp = dest;

    while (*dest)
        dest++;
    while ((*dest++ = *src++) != '\0');

    return tmp;
}

