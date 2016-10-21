#include<stdio.h>
 int main()
 {
     int i,j,arraysize;
     scanf("%d",&arraysize);
     long int arr[arraysize];
     for(i=0;i<arraysize;i++)
        scanf("%ld",&arr[i]);
     for(i=0;i<arraysize;i++)
     {
      for(j=i+1;j<arraysize;j++)
     {
       if(arr[i]==arr[j])
       {
           printf("%d",arr[i]);
           i=arraysize;
           j=arraysize;
       }
     }
     }
     return 0;
 }
