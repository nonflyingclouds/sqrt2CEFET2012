#include <stdio.h>

double square_root(int x) {
    int b, i, in = 0;
    for(i = 0; i * i != x - in && i * i != x + in; i++) {
        if(i * i > x + in) {
            in++;
            i = 0;
        }
    }
    b = i * i;
    double sqr = (x + b) / (double) (2 * i);
    return sqr;
}

int main() {
    for(int i = 0; i <= 1000; i++) {
        printf("Square root of %d: %lf\n", i, square_root(i));
    }
}
