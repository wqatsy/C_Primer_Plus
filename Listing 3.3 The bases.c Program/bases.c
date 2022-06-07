#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

///* bases.c--��ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡʮ������100 */
//#include <stdio.h>
//int main(void)
//{
//    int x = 100;
//
//    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
//    //�ڰ˽��ƺ�16����ֵǰ��ʾ0��0xǰ׺��
//    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
//
//    printf("Press any key to exit.");
//    getch();
//    return 0;
//}

#include <stdio.h>

int main(void)
{
    char type;
    int data;
    int status;

    printf("*** Convertor of Number Systems (Decimal to Octal/Hexadecimal) ***\n");
/******************************************************************************************
 * �����ƣ�Binary�����˽��ƣ�Octal����ʮ���ƣ�Decimal����ʮ�����ƣ�Hexadecimal����
 ******************************************************************************************/
    printf("Please select the data type you want to convert to:\n");
    printf("Octal - o,\nHexadecimal - h.\n");
    scanf("%c", &type);

    if (type == 'o')
    {
        printf("Please enter the data you want to convert:\n");
        status = scanf("%d", &data);

        if (status)
        {
            printf("Dec = %d, Oct = %#o.\n", data, data);
        }

        else
        {
            printf("Please enter the correct data.\n");
        }
    }

    else if (type == 'h')
    {
        printf("Please enter the data you want to convert:\n");
        status = scanf("%d", &data);

        if (status)
        {
            printf("Dec = %d, Hex = %#x.\n", data, data);
        }

        else
            printf("Please enter the correct data.\n");
    }

    else
    {
        printf("Please enter the correct data type.\n");
    }

    printf("Press any key to exit.");
    getch();
    return 0;
}