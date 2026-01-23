#include<stdio.h>
int main(){
    int n,sum=0,even=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        even=n%10;
        if(even%2==0){
            sum=sum+even;
        }n=n/10;
    }
    printf("Sum of even digits of a number is :%d",sum);   
}
