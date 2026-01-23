#include<stdio.h>
int main() {
    int n,i,arr[100],temp;
    printf("Enter the integer:");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int j=n-1;
    for(i=0;i<n;i++){
        if(arr[j]==0){
            j--;
        }
        if(arr[i]==0){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j--;
        }
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}