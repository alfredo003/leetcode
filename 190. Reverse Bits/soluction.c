uint32_t reverseBits(uint32_t n) {
    
    int bit = 32;
    uint32_t res;
    while(bit--)
    {
        res = res * 2 + (n % 2);
        n = n / 2;
    }
    return (res);
}
