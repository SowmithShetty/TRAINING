 #include <stdio.h>

int main()
{
     int a[20],n,i,res[60],prefix=1,suffix=1;
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
            for(i=0;i<=n;i++)
            {
                res[i]=prefix;
                prefix=prefix*a[i];
            }
            for(i=n-1;i>=0;i--)
            {
                res[i]=res[i]*suffix;
                suffix=suffix*a[i];

            }
            printf("\nresultant array is \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",res[i]);
        }
            
         
              
    }    
                    