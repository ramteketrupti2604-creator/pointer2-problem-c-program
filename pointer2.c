//Change value of a variable using pointer
#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    *p = 20;

    printf("Updated value = %d", a);
    return 0;
}
