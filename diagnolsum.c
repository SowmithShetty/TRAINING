#include<stdio.h>
int main()
{
    int a[100][101],left=0,right=0,n,i,j;
    printf("Enter the size of the matrix\n");
    scanf("%d",&n);
         printf("Entered array elements are\n");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){

            printf("%d",a[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            left = left +a[i][i];
            right= right +a[i][n-1-i];
        }
        printf("Sum of left diagnol is:%d\n",left);
        printf("Sum of right diagnol is:%d\n",right);
        
}