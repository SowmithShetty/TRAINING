#include<stdio.h>
int main() {
    int n,i,arr[100];
    printf("Enter the integer:");
    scanf("%d",&n);
    printf("Enter the array elemens:");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int large=-1,temp=0;
    i=0;
    while(i<n){
        if(large<arr[i]){
            temp=large;
            large=arr[i];
        }
        else if(arr[i]>temp && arr[i]!=large){
            temp=arr[i];
        }
        i++;
    }
    printf("The second largest:%d",temp);
}