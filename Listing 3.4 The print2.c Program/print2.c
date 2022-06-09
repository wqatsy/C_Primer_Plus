#define _CRT_SECURE_NO_WARNINGS

/* print2.c——更多printf()的特性 */
#include <stdio.h>

/******************************************************************************************
 * unsigned int--%u; long--%ld; 16进制long--%lx; 8进制long--%lo; short--%h; 十进制short--%hd;
 * 8进制short--%ho; unsignedd long--%lu; long long--%lld(有符号)%llu(无符号)。
 ******************************************************************************************/
int main(void)
{
    unsigned int un = 3000000000; /* int为32位的系统 */
    short end = 200; /* short为16位的系统 */
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    printf("Press any key to exit.");
    getch();
    return 0;
}