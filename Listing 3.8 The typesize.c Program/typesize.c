#define _CRT_SECURE_NO_WARNINGS

//* typesize.c������ӡ���ʹ�С */
#include <stdio.h>

int main(void)
{
    /* C99Ϊ���ʹ�С�ṩ%zdת��˵�� */
    printf("Type int has a size of %zd bytes.\n", sizeof(int)); // sizeof������������ֽ�Ϊ��λ����ָ�����͵Ĵ�С
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n",
        sizeof(long long));
    printf("Type double has a size of %zd bytes.\n",
        sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",
        sizeof(long double));

    printf("Press any key to exit.");
    getch();
    return 0;
}