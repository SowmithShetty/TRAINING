#include<stdio.h>
int main() {
    int n,i,arr[100],temp,count=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("The Entered Array Elements Are :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]>=arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("The Sorted Array is :\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    i=n-1;
    while(i>=0){
        if(arr[i]==arr[i-1]){
            count++;
        }
        i--;
    }
    i=n-1;
    printf("\nThe largest repeating number is %d and it is being repeated %d times..",arr[i],count);

}
