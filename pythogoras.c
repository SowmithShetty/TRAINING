#include <stdio.h>
#include<math.h>

int main() {
    int a[20],n,i,p1,p2,p3,j,k,flag=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf(" Enter the  array elements \n");
        for(i=0;i<n;i++){
        scanf("%d",&a[i]);
         }
         printf("Entered array elements are\n");
            for(i=0;i<n;i++){
            printf("%d\t",a[i]);
            }   
            for(i=0;i<n;i++)
            {
                
                for(j=i+1;j<n;j++)
                {
                    
                    for(k=j+1;k<n;k++){
                        p1=a[i]*a[i];
                        p2=a[j]*a[j];
                        p3=a[k]*a[k];
                        if(p1==p2+p3 ||p2==p1+p3|| p3==p1+p2){
                            flag=1;
                            printf("true");
                            printf("\na=%d,b=%d,c=%d\n",a[i],a[j],a[k]);
                        }
                    }
                }
            }if(flag==0)
            {
                printf("\nfalse\n");
            }

    return 0;
}  