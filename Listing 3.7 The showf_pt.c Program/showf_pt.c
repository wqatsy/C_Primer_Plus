#define _CRT_SECURE_NO_WARNINGS

/* showf_pt.c���������ַ�ʽ��ʾfloat���͵�ֵ */
#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat); // ��%e��ӡָ���������ĸ�����
    // ��һ��Ҫ�������֧��C99�����е��������
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    printf("Press any key to exit.");
    getch();
    return 0;
}