#include<stdio.h>
int main() {
    int n,i,arr[100];
    printf("Enter the integer:");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int j=n-1;
    for(i=0;i<n;i++) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        if(i>=j){
            break;
        }
    }
    printf("The reveresed Array:");
    for(i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}