/******************************************************************************************
 * ��VS2019�к���C4996��C6031����ķ�����
 * ����1�������Ա������У�����Ȼ��Warning��
 * �Ҽ�������������.c�ļ���Properties - C/C++ - General - SDL check - No (/sdl-)
 * ����2�������Ա������У�Ҳ���ٱ�Warning��
 * #define _CRT_SECURE_NO_WARNINGS // ���Ժ�����ȫ������д�ڳ���ͷ������ͬ����1
 * #pragma warning(disable:4996)   // ���� Error   C4996������ͬ����1
 * #pragma warning(disable:6031)   // ���� Warning C6031
 ******************************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <stdio.h>

int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you have %d dog(s)!\n", dogs);
/******************************************************************************************
 * ���������������ʹ�ó���������Ϻ��Զ��˳������ǰ�������˳���
 ******************************************************************************************/
    printf("Press any key to exit.");
    getch();

    return 0;
}