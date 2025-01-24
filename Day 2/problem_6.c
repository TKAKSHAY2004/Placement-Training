//program to swap the elements of an array

#include <stdio.h>
int main(){

    //int  arr[] = {1,2,3,4,5,6,10};
    int n;
    scanf("%d",&n); 
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }   
    //printf("%d",sizeof(arr)/sizeof(arr[0]));

    /*for( int j = sizeof(arr)/sizeof(arr[0])-1 ; j>=0 ; j--)
    {
        printf("%d ",arr[j]);
    }*/

    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j;

    for(i=0 , j = size-1 ; i<j ; i++ , j--)
    {
        arr[i] = arr[i] + arr[j] - (arr[j] = arr[i]);
    }
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}