#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");
    return 0;
}
