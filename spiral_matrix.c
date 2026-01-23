#include<stdio.h>
int main()
{
    int a[100][101],sum=0,n,m,i,j;
    printf("Enter the size of m\n");
    scanf("%d",&m);
    printf("Enter the size of n\n");
    scanf("%d",&n);
         printf("Entered array elements are\n");
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                 scanf("%d",&a[i][j]);
            }
        }

}        