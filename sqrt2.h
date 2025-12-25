double sqrt2(const int x) {
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
