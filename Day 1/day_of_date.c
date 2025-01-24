#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int d, int m, int y){
    if (m < 1 || m > 12 || d < 1 || d > 31 || y < 1900){
        return false;
    }
    switch (m){
        case 4: case 6: case 9: case 11:
            return d <= 30;
        case 2:
            if (isLeapYear(y)){
                return d <= 29;
            } else {
                return d <= 28;
            }
        default:
            return true;
    }
}

int main(){
    int dd, mm, yy;
    scanf("%d %d %d", &dd, &mm, &yy);
    if(isValidDate(dd, mm, yy)){
        int f, D, C;
        if(mm == 1 || mm == 2){
            mm += 10;
            yy--;
        } else {
            mm -= 2;
        }
        D = yy % 100;
        C = yy / 100; 
        f = (dd + (13 * (mm + 1)) / 5 + D + (D / 4) + (C / 4) - (2 * C)) % 7;
        if(f < 0){
            f += 7;
        }
        switch(f){
            case 0:
                printf("Saturday");
                break;
            case 1:
                printf("Sunday");
                break;
            case 2:
                printf("Monday");
                break;
            case 3:
                printf("Tuesday");
                break;
            case 4:
                printf("Wednesday");
                break;
            case 5:
                printf("Thursday");
                break;
            case 6:
                printf("Friday");
                break;
        }    
    } else {
        printf("Invalid Date");
    }
    return 0;
}