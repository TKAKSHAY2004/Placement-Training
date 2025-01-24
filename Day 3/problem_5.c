#include <stdio.h>  

int main(){
    int x = 10;
    int y=20;
    float f = 10.5;
    char c = 'A';   
    void *ptr;
    ptr = &x;
    ptr = &y; //pointer cann't be used to store multiple data but it can be used to store address of multiple data individually
    printf("%d\n",*(int*)ptr);
    ptr = &f; 
    printf("%f\n",*(float*)ptr);
    ptr = &c;
    printf("%c\n",*(char*)ptr);
}