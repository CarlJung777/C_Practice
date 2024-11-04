/*********************************
 *
 *
 *
 *
 ********************************/
#include <limits.h>
#include <stdio.h>
#include <string.h>
#define PI 3.14159
int add(int a, int b);
int arr();
int count;
int pointer();

void charArray();
int whatsBook();
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
    pointer();
    charArray();
    whatsBook();
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

int pointer()
{
    int some = 44;
    int *someP;
    someP = &some;

    printf("some 的地址：%p \n", &some);
    printf("someP 的地址：%p \n", someP);
    printf("someP 的值：%d \n", *someP);
    return 0;
}

void charArray()
{
    char lu[9] = {'n', 'a', 'n', 'a', 's', 'a', 'w', 'a'};
    char str1[14] = "lululu";
    char str2[14] = "ssssss";
    char str3[14];
    int len;
    strcpy(str3, str1);
    printf("赋值右边str1 到 str3: %s \n", str3);
    strcat(str1, str2);
    printf("链接左边和右边: %s \n", str1);
    len = strlen(str1);
    printf("链接后长度:  %d\n", len);
    printf("是：%s \n", lu);
     
}

int whatsBook()
{
    struct Books
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    };

    struct Books book1;

    strcpy(book1.title, "milu");
    strcpy(book1.author, "lu");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;

    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);

    return 0;
}