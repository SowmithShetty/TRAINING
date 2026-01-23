#include<stdio.h>
int main(){
 int a[20],b[30],m,n,i,j,temp;
    printf("Enter the size of array-1\n");
    scanf("%d",&m);
    printf("Enter the size of array-2\n");
    scanf("%d",&n);
    printf(" Enter the  array-1 elements \n");
        for(i=0;i<m;i++){
        scanf("%d",&a[i]);
         }
    printf(" Enter the  array-2 elements \n");
        for(i=0;i<n;i++){
        scanf("%d",&b[i]);
         }
         printf("Entered array-1 elements are\n");
            for(i=0;i<m;i++){
            printf("%d\t",a[i]);
            }
            printf("\nEntered array-2 elements are\n");
            for(i=0;i<n;i++){
            printf("%d\t",b[i]);
            }
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(a[i]==b[j]){
                        printf("%d\t",a[i]);
                    }
                }
            }
    }            