int hammingWeight(int n) {
    int bit = 32;
    char res =0;
    int  i=0;
    while(bit--)
    {
        res = (n >> bit & 1);
        if(res == 1)
            i++;
    }

    return i;
}
