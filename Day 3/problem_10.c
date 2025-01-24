//bitfields

#include <stdio.h>

struct flag{
    int a:4; // a:4 means 4 bits are allocated to a
    int b:3;
    int c:2;  
};

int main(){
    struct flag f = {10,7,3};
    printf("%d %d %d\n",f.a,f.b,f.c);
}
//  is a 4-bit field. The maximum value that can be stored in a 4-bit signed integer is 7 (0111 in binary) and the minimum value is -8 (1000 in binary).
// The value 10 (1010 in binary) exceeds the range of a 4-bit signed integer, so it will be stored as -6 (1010 in binary for a 4-bit signed integer).
