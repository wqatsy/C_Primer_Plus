#define _CRT_SECURE_NO_WARNINGS

/* print2.c��������printf()������ */
#include <stdio.h>

/******************************************************************************************
 * unsigned int--%u; long--%ld; 16����long--%lx; 8����long--%lo; short--%h; ʮ����short--%hd;
 * 8����short--%ho; unsignedd long--%lu; long long--%lld(�з���)%llu(�޷���)��
 ******************************************************************************************/
int main(void)
{
    unsigned int un = 3000000000; /* intΪ32λ��ϵͳ */
    short end = 200; /* shortΪ16λ��ϵͳ */
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