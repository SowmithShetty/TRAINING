#include<stdio.h>
int main() {
    int n,i,arr[100],count=0;
    printf("Enter the integer:");
    scanf("%d",&n);
    printf("Enter the array elemens:");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        printf("%d=%d\n",arr[i],count);
        count=0;
    }
}