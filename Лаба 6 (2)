#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    ++n;
    scanf("%d", &n);
    char* arr = (char*)malloc(n * sizeof(char));
    for (int i = 0; i < n; ++i) {
        scanf("%c", &arr[i]);
    }
    for (int i = 1; i < n; i++) {
        printf("%d %c\n", i-1, arr[i]);
    }
    free(arr);
    return 0;
}
