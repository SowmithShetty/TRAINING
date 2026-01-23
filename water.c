#include <stdio.h>
#include<math.h>

int main() {
    int a[20],n,i,j,maxArea=0,Area,Base,Height,right,left;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf(" Enter the  array elements \n");
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
         }
         for(i=0;i<n;i++){
            left=a[0];
            right=a[n-1];
            while(left<right){
                Base=right-left;
                if(a[left]<a[right]){
                    Height=a[left];
                }else
                 Height=a[right];
                    Area=Base*Height;
                    if(Area>maxArea){
                        maxArea=Area;
                    }else
                    maxArea=maxArea;
                    if(a[left]<=a[right]){
                        left++;
                    }else
                    right--;
            }
         }
         
}         