#include <stdio.h>

int main() {
    int r100, r10, r1, cash, amt;
    scanf("%d", &r100);
    scanf("%d", &r10);
    scanf("%d", &r1);
    scanf("%d", &cash);

    amt = r100 * 100 + r10 * 10 + r1;

    if (amt >= cash) {
        printf("1");
    } else if (amt < cash) {
        printf("0");
    }

    return 0;
}
