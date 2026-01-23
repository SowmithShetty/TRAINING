#include<stdio.h>
int main()
{
    int a[100],count[200]={0},n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf(" Enter the  array elements \n");
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
         }
         for(i=0;i<n;i++)
         {
            if(count[a[i]]==1)
            {
                printf("\nDuplicate element in the array is :%d",a[i]);
            }count[a[i]]++;
         }
}