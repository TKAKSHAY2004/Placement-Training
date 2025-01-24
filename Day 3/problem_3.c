#include <stdio.h>

int main(){
    int a,b,*c,*d;
    a = 10; 
    b= 20;

    c = &a;
    d = &b;

    printf("%d\n",*c + *d);

    // printf("%d\n",sizeof(int*),sizeof(char*),sizeof(float*),sizeof(double*));
}