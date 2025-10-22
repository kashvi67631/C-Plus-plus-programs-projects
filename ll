double myPow(double x, int n) {
    double i=1,pro=1;
    long long  exp=(n<0)? -n:n;
    while (i<=exp){
        pro=pro*x;
        i++;
    }
    if (n<=0){
        pro=1.0/pro;
    }
    return pro;

    
}
