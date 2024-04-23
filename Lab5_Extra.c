#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int matrix1[n][n], matrix2[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }
    int res[n][n];
    for (int i=0; i<n; i++){
         for (int j=0; j<n; j++){
         res[i][j]=0;
         for (int m=0; m<n; m++){
             res[i][j]=res[i][j]+matrix1[i][m]*matrix2[m][j];
             }
        }
    }
    for (int i=0; i<n;i++){
        for (int j=0; j<n; j++){
            printf("%d%c",res[i][j], ' ');
        }
        printf("\n");
    }
    return 0;
}
