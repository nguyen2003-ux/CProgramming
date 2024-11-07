#include <stdio.h>

union example {
    int i;
    char c;
};

int main(void)
{
    union example v;

    v.c = 'A'; // Assign 'A' (ASCII 65) to the char member
    printf("v.c: %c   v.i: %i\n", v.c, v.i);

    v.i = 10000; // Assign 10000 to the int member, which may alter the char value
    printf("v.c: %c   v.i: %i\n", v.c, v.i);

    return 0;
}
