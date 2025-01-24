#include <stdio.h>

int main(){
    /*
    printf("%u\n", -1); //unsigned int
    printf("%x\n", -1); //hexadecimal
    printf("%hi\n", -1); //short int
    printf("%u\n", -1); //unsigned int

*/ 
    printf("%-5d %s\n", 11 , "akshay");
    printf("%-5d %s\n", 110 , "jayadeep");
    printf("%-5d %s\n", 11 , "arjun");  

    printf("%5d %s\n", 11 , "akshay");
    printf("%5d %s\n", 110 , "jayadeep");
    printf("%5d %s\n", 11 , "arjun"); 
    
    // "-" left align
    // "+" right align
    return 0; 
}