#include <stdio.h>

// 声明已经在第一个文件 main.c 中定义的 count。
extern int count;

void write_extern(void) 
{
    printf("count is %d \n", count);
}