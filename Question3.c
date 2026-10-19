#include <stdio.h>

int main(){

    int mat1[3][3], mat2[3][3];

    printf("\nEnter values for Matrix 1: ");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter values for Matrix 2: ");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    
    printf("\nAddition: \n");
    int mat3[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}