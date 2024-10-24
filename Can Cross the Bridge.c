#include <stdio.h>
int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    int maxLoad = Z - Y;
    int maxMangoes = maxLoad / X;
    printf("%d\n", maxMangoes);
}
