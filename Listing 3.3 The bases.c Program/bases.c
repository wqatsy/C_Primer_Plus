#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

///* bases.c--以十进制、八进制、十六进制打印十进制数100 */
//#include <stdio.h>
//int main(void)
//{
//    int x = 100;
//
//    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
//    //在八进制和16进制值前显示0和0x前缀。
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
 * 二进制（Binary），八进制（Octal），十进制（Decimal），十六进制（Hexadecimal）。
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