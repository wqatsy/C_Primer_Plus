/******************************************************************************************
 * 在VS2019中忽略C4996和C6031警告的方法：
 * 方法1：（可以编译运行，但依然报Warning）
 * 右键单击工程名或.c文件，Properties - C/C++ - General - SDL check - No (/sdl-)
 * 方法2：（可以编译运行，也不再报Warning）
 * #define _CRT_SECURE_NO_WARNINGS // 忽略函数安全报错，需写在程序开头，作用同方法1
 * #pragma warning(disable:4996)   // 忽略 Error   C4996，作用同方法1
 * #pragma warning(disable:6031)   // 忽略 Warning C6031
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
 * 加入以下两行命令，使得程序运行完毕后不自动退出，而是按任意键退出。
 ******************************************************************************************/
    printf("Press any key to exit.");
    getch();

    return 0;
}