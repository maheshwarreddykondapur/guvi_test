
#include<stdlib.h>
#include<stdio.h>

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 =  high - mid;

    int Left[n1], Right[n2];


    for (i = 0; i < n1; i++)
        Left[i] = arr[low + i];
    for (j = 0; j < n2; j++)
        Right[j] = arr[mid + 1+ j];


    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}


void mergeSort(long int arr[], int low, int high)
{
    if (low < high)
    {

        int mid = low+(high-low)/2;


        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);

        merge(arr, low, mid, high);
    }
}


int main()
{

    int arraysize,i;
    scanf("%d",&arraysize);
    long int arr[arraysize];
    for(i=0;i<arraysize;i++)
    {
        scanf("%ld",&arr[i]);
    }
    mergeSort(arr, 0, arraysize - 1);

    for(i=0;i<arraysize;i++)
    {
        if(arr[i]==arr[i+1])
        {


            while(arr[i]==arr[i+1])
            {

                i++;
            }
        }
        else{
            printf("%ld",arr[i]);
        }

    }
    return 0;
}
