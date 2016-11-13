#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

class mystring
{
public:
    mystring(const char *s=NULL) ;                 //���캯��
    mystring(const char *s,int n);
    mystring(int n,const char *s);
    mystring(char c,int n);
    mystring(int n,char c);
    mystring(const mystring &other);               //�������캯��
    virtual ~mystring();                           //��������
    mystring & operator=(const mystring &other);   //���ƹ��캯��

    int length() const;                      //ͳ���ַ�������
    void swap(mystring &other);              //���������ַ���
    int find(const mystring &other) ;        //�ҵ�ĳ���ַ������Ӵ���һ�γ��ֵ�λ��
    int find(const char c);                 //�ҵ�ĳ���ַ�����ĳ���ַ���һ�γ��ֵ�λ��
    void up();                             //���ַ����е���ĸ��д��
    void low();                            //���ַ����е���ĸСд��
     char & operator[](int index);					// �����ţ��±꣩����������÷��ؿ�����ֵ����ֵ
	friend mystring operator+(const mystring &Str1 ,const mystring &Str2); // ��Ԫ�������ַ���ƴ��
	mystring & operator+=(const mystring &Str);			// �ַ���ƴ�Ӽ���ֵ
    // ���ع�ϵ����
	friend bool operator==(const mystring &Str1, const mystring &Str2);
	friend bool operator!=(const mystring &Str1, const mystring &Str2);
	friend bool operator> (const mystring &Str1, const mystring &Str2);
	friend bool operator>=(const mystring &Str1, const mystring &Str2);
	friend bool operator< (const mystring &Str1, const mystring &Str2);
	friend bool operator<=(const mystring &Str1, const mystring &Str2);
    // ���� I/O �������
	friend ostream & operator<<(ostream &out, const mystring &Str);
	friend istream & operator>>(istream &in, mystring &Str);

private:
    char *str;
};
#endif // MYSTRING_H_INCLUDED
