#include <stdio.h>

int main(void) {
    int a, b, c;
    int *p = &a;
    int *q = &b;
    int *r = &c;

    scanf("%d", p);
    *q = 5;
    *r = *p + *q;

    printf("%d,%d,%d", a, b, c);
    return 0;
}
