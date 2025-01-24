#include <stdio.h>

int main(){
    int n, cnt = 0;
    int freq[10] = {0};
    scanf("%d", &n);

    while(n){
        freq[n % 10]++;
        n /= 10;   
    }
    for (int i = 0; i < 10; i++)
        if(freq[i] > 1){
            cnt++;
        }
    if(cnt){
        printf("%d\n", cnt);
    } else {
        printf("None\n");
    }

    return 0;
}