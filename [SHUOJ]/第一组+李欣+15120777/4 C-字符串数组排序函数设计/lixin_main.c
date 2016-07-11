//��GBK����

//Encoded with GBK

#include <stdio.h>
#include <conio.h>
#include "declare.h"

void test1() {
    int i;
    char str[12][8] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake",
                       "side"};
    printf("\n�ڲ��� 1 ��:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    //���ú���sort1_1
    sort1_1(str, 12);
    printf("\n���к��:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    printf("\n�˳����� 1 ����������\n");
}

void test2() {
    int i;
    char str[12][8] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake",
                       "side"};
    printf("\n�ڲ��� 2 ��:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    //���ú���sort1_2
    sort1_2(str, 12);
    printf("\n���к��:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    printf("\n�˳����� 2 ����������\n");
}

void test3() {
    int i;
    char *str[12] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake",
                     "side"};
    printf("\n�ڲ��� 3 ��:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    //���ú���sort2_1
    sort2_1(str, 12);
    printf("\n���к��:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    printf("\n�˳����� 3 ����������\n");
}

void test4() {
    int i;
    char *str[12] = {"enter", "number", "size", "begin", "of", "cat", "case", "program", "centain", "a", "cake",
                     "side"};
    printf("\n�ڲ��� 4 ��:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    //���ú���sort2_2
    sort2_2(str);
    printf("\n���к��:\n\nstr:\n");
    for (i = 0; i < 12; i++) {
        printf("%s\n", str[i]);
    }
    printf("\n�˳����� 4 ����������\n");
}

int main(void) {
    int choice;
    void (*f[])() = {test1, test2, test3, test4};
    int n = sizeof(f) / sizeof(*f);
    while (1) {
        printf("\nC-�ַ���������������Ʋ���(1--%d, 0-�˳�): ", n);
        choice = getche() - '0';
        printf("\n");

        if (choice <= 0)
            break;
        else if (choice > n)
            continue;
        else
            f[choice - 1]();
    }
    return 0;
}
