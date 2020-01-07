#include <stdio.h>

extern char* get_hello_greeting();

int main()
{
    printf("%s\n", get_hello_greeting());
    return 0;
}
