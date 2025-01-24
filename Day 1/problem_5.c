#include <stdio.h>

int main() {
    int n, distance = 10;
    int x = 0, y = 0;

    printf("Enter the number of turns: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        switch ((i - 1) % 4) {
            case 0:
                x += distance;
                break;
            case 1:
                y += distance;
                break;
            case 2:
                x -= distance;
                break;
            case 3:
                y -= distance;
                break;
        }
        distance += 10;
    }

    printf("Final Position: (%d, %d)\n", x, y);
    return 0;
}
