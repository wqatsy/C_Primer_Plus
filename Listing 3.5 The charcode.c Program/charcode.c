#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/* charcode.c������ʾ�ַ��Ĵ����� */
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch); /* �û������ַ� */
/******************************************************************************************
 * printf()������%cָ������ӡ���ַ���
 ******************************************************************************************/
    printf("The code for %c is %d.\n", ch, ch);
 
    printf("Press any key to exit.");
    getch();
    return 0;
}