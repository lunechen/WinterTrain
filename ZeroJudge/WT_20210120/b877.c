#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", (100+b-a)%100);
    return 0;
}