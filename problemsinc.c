#include <stdio.h>
int mod(int a){
    if (a<0){
        a = -a;
    }
    else {
        a=a;
    }
    return a;
}

void update(int *a,int *b) {
    int c = *a;
    *a = mod(*a+*b);
    *b = mod(c-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
