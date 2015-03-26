struct Complex prod(struct Complex c1, struct Complex c2) {

    float k, l, m, n;

    struct Complex c3;

    k = c1.a;

    l = c1.b;

    m= c2.a;

    n = c2.b;

    c3.a = k*m - l*n;

    c3.b = k*n + l*m;

    return c3;

}


