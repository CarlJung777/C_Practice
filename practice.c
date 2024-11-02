/*********************************
 * 
 * 
 * 
 * 
 ********************************/
#include<limits.h>
#include <stdio.h>
#define PI 3.14159 
int add(int a , int b);
int count;
extern void write_extern();

int main()
{
    int num1, num2, sum;
    printf("Enter two integers:");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2);

    printf("Sum: %d\n", sum);
    /* 备注 */
    printf("hello,lulu! \n");
    printf("int 存储大小 : %lu \n", sizeof(int));
    count = 5;
    write_extern();
    return 0;
}

int add(int a, int b) {
    return a + b;
}