#include<stdio.h>
int main(){
    int a[40][40],m,n,i,j;
        printf("Enter the row size of the matrix\n");
        scanf("%d",&m);
        printf("Enter the column size of the matrix\n");
        scanf("%d",&n);
         printf("Enter array elements are\n");
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    scanf("%d",&a[i][j]);
            }
        }
        printf("  Matrix elements are\n");
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    printf("%d\t",a[i][j]);
            }printf("\n");
        }
        printf("Matrix after 90 degree anticlockwise rotation :\n");
        for(j=n-1;j>=0;j--){
            for(i=0;i<m;i++){
                printf("%d\t",a[i][j]);
            }printf("\n");
        }
        return 0;
}