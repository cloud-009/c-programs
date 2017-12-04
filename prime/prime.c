int isPrime(int x) {
    if (x == 0 || x == 1)
        return 2;
    for (int i = 2; i <= x/2; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
