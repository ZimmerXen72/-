#include <stdio.h>
int main() {
    int arr1[2][2] = {{1, 1}, {0, 1}};
    int arr2[2][2] = {{2, 0}, {3, 0}};
    int ans[2][2] = {0};
    for (int i = 0; i<2; i++){
        for (int j = 0; j<2; j++){
            for (int l=0; l<2; l++){
                ans[i][j] += arr1[i][l]*arr2[l][j];
            }
        }
    }

    for (int i=0; i<2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d %d\n", ans[i][j], ans[i][j+1]);
            j += 1;
        }
    }
    return 0;
}
