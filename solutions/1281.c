int subtractProductAndSum(int n) {
    int yu = 1;
    int mul = 0;
    while (n > 0) {
        yu *= n % 10;
        mul += n % 10;
        n = n / 10;
    }
    return (yu - mul);
}