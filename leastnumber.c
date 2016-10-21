#include <stdio.h>

int digitstoremove,numbersize;

void recurse(int* input, int* output, int begin, int end){
    int i;
    int min = begin;

    for (i = begin; i < end; ++i){
        if (input[min] > input[i]){
            min = i;
        }
    }
    output[end - digitstoremove - 1] = input[min];

    if (end < numbersize){
        recurse(input, output, min + 1, end + 1);
    }
}

int main(void) {

    int numbersize,digitstoremove,i;
    long int number;
    scanf("%d",&digitstoremove);
    scanf("%d",&numbersize)
    scanf("%d",&number);
    int foo[numbersize];
   for(i=(numbersize-1);i>=0;i--)
    {
        foo[i]=number%10;
        number=number/10;


    }

    int arr[numbersize-digitstoremove];
    int i;

    recurse(foo,arr, 0, digitstoremove + 1);

    for (int i = 0; i < numbersize - digitstoremove; ++i){
        printf("%d", arr[i]);
    }
    return 0;
}
