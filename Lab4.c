#include <stdio.h>
int main() {
    long long int a;
    scanf("%d", &a);
    printf("%d (1 - win, 0 - lose)\n", (a >= 33) && (a <= 55));
    printf("%d",a & (1<<14));
    return 0;
}
