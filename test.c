#include <time.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <errno.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>

// <assert.h>
void test_positive(int x)
{
    assert(x > 0);
}
struct MyStruct {
    int a;
    double b;
    char c;
};

int main()
{
    
    int a = 5;
    int b = 3;
    test_positive(a);
    test_positive(b);
    printf("This line will not be executed if an assertion fails.\n");
    
    // <ctype.h>
    char ch;
    char chars[] = "Lu 1? \n";
    for (int i = 0; chars[i] != '\0'; i++) {
        ch = chars[i];
        printf("Character: '%c'\n", ch);
        if (isalpha(ch)) {
            printf(" - isalpha: Yes\n");
        } else {
            printf(" - isalpha: No\n");
        }    
        if (isspace(ch)) {
            printf(" - ispunct: Yes\n");
        } else {
            printf(" - ispunct: No\n");
        }
    }
    
    // <float.h>
    printf("float 类型范围：%.10e 到 %.10e\n", FLT_MIN, FLT_MAX);
    printf("double 类型范围：%.10e 到 %.10e\n", DBL_MIN, DBL_MAX);
    printf("long double 类型范围：%.10Le 到 %.10Le\n", LDBL_MIN, LDBL_MAX);

    printf("float 精度：%d 位\n", FLT_DIG);
    printf("double 精度：%d 位\n", DBL_DIG);
    printf("long double 精度：%d 位\n", LDBL_DIG);
    
    // <limits.h>
    printf("Character types:\n");
    printf("CHAR_BIT: %d\n", CHAR_BIT);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("SCHAR_MIN: %d\n", SCHAR_MIN);
    printf("SCHAR_MAX: %d\n", SCHAR_MAX);
    printf("UCHAR_MAX: %u\n", UCHAR_MAX);
    
    // <math.h>
    double x = 9.0;
    double y = 2.0;
    // 计算平方根
    printf("sqrt(%.1f) = %.1f\n", x, sqrt(x));
    // 计算幂
    printf("%.1f ^ %.1f = %.1f\n", x, y, pow(x, y));
    
    // <errno.h>
    FILE *file;
    // 尝试打开一个不存在的文件
    file = fopen("nonexistent_file.txt", "r");

    if (file == NULL) {
        // 输出错误代码和错误信息
        printf("无法打开文件！错误代码: %d\n", errno);
        printf("错误信息: %s\n", strerror(errno));
    } else {
        // 文件成功打开，关闭文件
        fclose(file);
    }
    
    // <locale.h>
    setlocale(LC_ALL, "en_US.UTF-8");
    printf("当前地区设置为: %s\n", setlocale(LC_ALL, NULL));
    
    // <time.h>
    time_t current_time; 
    struct tm *time_info; 
    char buffer[80];
    
    time(&current_time);
    time_info = localtime(&current_time);
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", time_info);
    printf("Formatted time: %s\n", buffer);
    
    printf("Current time: %s", ctime(&current_time));
    
    // <string.h>
    char str1[6] = "lu";
    char str2[3] = "lu";
    strcat(str1, str2);
    printf("is %s ! \n", str1);
    
    // <stddef.h>
    printf("Offset of a: %zu bytes\n", offsetof(struct MyStruct, a));
    printf("Offset of b: %zu bytes\n", offsetof(struct MyStruct, b));
    printf("Offset of c: %zu bytes\n", offsetof(struct MyStruct, c));
    
    // <stdlib.h>
    srand(time(NULL));
    int min = 1, max = 99;
    int random_number = (rand() % (max - min + 1)) + min;
    printf("随机数: %d\n", random_number);
    
    int *arr;
    size_t n = 5;
    
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    for (size_t i = 0; i < n; i++) 
        {
            arr[i] = i + 1;
            printf("%d \n", arr[i]);
        }
    free(arr); 
    return 0;
}