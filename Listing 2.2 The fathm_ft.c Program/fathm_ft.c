#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/******************************************************************************************
 * 把2英寻转换成英尺
 ******************************************************************************************/
//#include <stdio.h>
//
//int main(void)
//{
//    int feet, fathoms;
//    fathoms = 2;
//    feet = 6 * fathoms;
//
//    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//    printf("Yes, I said %d feet!\n", 6 * fathoms);
//
//    return 0;
//}

/******************************************************************************************
 * 把任意整数英寻转换成英尺
 ******************************************************************************************/
#include <stdio.h>

int main(void)
{
    int feet, fathoms;
    fathoms = 0;

    printf("There are 6 feet in 1 fathoms!\n");
    printf("How many fathoms do you have?\n");
    scanf("%d", &fathoms);
    printf("Then %d fathoms = %d feet!\n", fathoms, 6 * fathoms); // feet = 6 * fathoms

    printf("Press any key to exit.");
    getch();

    return 0;
}