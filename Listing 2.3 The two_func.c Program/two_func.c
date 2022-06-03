//一个文件中包含两个函数
#include <stdio.h>
void bulter(void);

int main(void)
{
    printf("I will summon the bulter function.\n");
    bulter();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    printf("Press any key to exit.");

    getch();
    return 0;
}

void bulter(void)
{
    printf("You rang, Sir?\n");
}