#include <stdio.h>
int main()
{
    int x,c;
    printf(" มีคนอยู่ทั้งหมด : ");
    scanf("%d",&x);

    c = (x*(x-1))/2;

    printf("ดังนั้นจะต้องมีการจับมือกันทั้งหมด %d ครั้ง",c);

    return 0;
}