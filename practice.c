/*********************************
 *
 *
 *
 *
 ********************************/
#include <limits.h>
#include <stdio.h>
#define PI 3.14159
int add(int a, int b);
int arr();
int count;
extern void write_extern();

enum DAY
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main()
{

    int num1, num2, sum;
    printf("Enter two integers:");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);
    arr();
    printf("Sum: %d\n", sum);
    /* 备注 */
    printf("hello,lulu! \n");
    printf("int 存储大小 : %lu \n", sizeof(int));
    count = 5;
    write_extern();
    enum DAY day;
    day = WED;
    printf("%d \n", day);

    for (day = MON; day <= SUN; day++)
    {
        printf("枚举：%d \n", day);
    }
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int arr()
{
    int n[8];
    int s, d;
    for (s = 0; s < 8; s++)
    {
        n[s] = s + 20;
    }

    for (d = 0; d < 8; d++)
    {
        printf("element [%d] = %d \n", d, n[d]);
    }
    int leghth = sizeof(n) / sizeof(n[0]);
    printf(" n leghth is %d \n", leghth);
    return 0;
}