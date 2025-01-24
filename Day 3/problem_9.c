#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=5,*arr;

    arr = (int*)calloc(n , sizeof(int));
    arr[0] = 10;
    arr[1] = 20;

    n=10;
    arr = (int*)realloc(arr, n * sizeof(int));

    printf("%d %d\n", arr[0],arr[1]);

    free(arr);
}

