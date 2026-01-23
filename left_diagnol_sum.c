#include<stdio.h>
int main()
{
    int a[100][101],sum=0,n,i,j;
    printf("Enter the size of the matrix\n");
    scanf("%d",&n);
         printf("Entered array elements are\n");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                 scanf("%d",&a[i][j]);
            }
        }
         for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(i!=j){
                        sum=sum+a[i][j];

                  }
                }
            }
        
        printf("Sum is:%d\n",sum);
        
}