#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int tmp = *a;
    *a += *b;
    *b = *b - tmp;
    *b = *b > 0? *b: -*b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}