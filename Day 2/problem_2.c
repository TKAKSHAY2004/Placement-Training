#include <stdio.h>

int main(){

    char str[100];
    int n;
    scanf("%s%n", str, &n);

    for(int i = n ; i>=1 ;i--){
        printf("%*.*s\n", n, i, str);  // 1st * is for width(total space), 2nd * is for precision (how many characters to print)
   
    }

    printf("\n");

    for(int i = n ; i>=1 ;i--){
        printf("%-*.*s\n", n, i, str);  
   
    }

    return 0;

}

