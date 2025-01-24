#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,*arr;
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    //instead of void pointer we can use int pointer because array is integer type data
    printf("%d %d\n", arr[0],arr[1]);
}