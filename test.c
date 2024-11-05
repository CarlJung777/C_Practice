#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#include <ctype.h>

void test_positive(int x)
{
    assert(x > 0);
}

int main()
{
    
    int a = 5;
    int b = 3;
    test_positive(a);
    test_positive(b);
    printf("This line will not be executed if an assertion fails.\n");
    
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

    return 0;
}
