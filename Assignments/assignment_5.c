#include <stdio.h>

#define MAX 10

void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int r, int c) {
    int sum[MAX][MAX];
    printf("Addition of matrices:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void saddlePoint(int a[MAX][MAX], int r, int c) {
    int found = 0;

    for(int i=0;i<r;i++) {
        int min = a[i][0], col = 0;

        for(int j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        int isSaddle = 1;
        for(int k=0;k<r;k++) {
            if(a[k][col] > min) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("Saddle Point: %d\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("No Saddle Point\n");
}

int main() {
    int a[MAX][MAX], b[MAX][MAX];
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    printf("Enter Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &b[i][j]);

    addMatrix(a, b, r, c);
    saddlePoint(a, r, c);

    // Note: Inverse & Magic Square can be added if needed (complex)
    
    return 0;
}