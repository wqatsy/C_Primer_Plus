#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

////ÓÐ´íÎóµÄ³ÌÐò
//#include <stdio.h>
//
//int main(void)
//(
//    int n, int n2, int n3;
//    n = 5;
//    n2 = n * n;
//    n3 = n2 * n2;
//
//    printf("n = %d,n squared = %d, n cubed = %d\n", n, n2, n3);
//
//    return 0;
//)

//#include <stdio.h>
//
//int main(void)
//{
//    int n;
//    int n2;
//    int n3;
//    n = 5;
//    n2 = n * n;
//    n3 = n * n * n;
//
//    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
// 
//    printf("Press any key to exit.");
//    getch();
//
//    return 0;
//}

#include <stdio.h>

int main(void)
{
    int n;
    int n2;
    int n3;

    printf("Please enter a natural number n.\n");
    scanf("%d", &n);

    n2 = n * n;
    n3 = n * n * n;

    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    printf("Press any key to exit.");
    getch();

    return 0;
}