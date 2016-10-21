#include<stdio.h>

int main()
{
    int i,arraysize;
    scanf("%d",&arraysize);
    long int arr[arraysize];
    for(i=0;i<arraysize;i++)
    {
        scanf("%ld",&arr[i]);

    }
    for(i=0;i<arraysize;i++)
    {

        if(arr[i]==i)
            printf("%d ",i);

    }
    return 0;

}
