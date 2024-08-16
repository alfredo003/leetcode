int lengthOfLastWord(char* s) {
    int i =0;
    int j =0;
    int count =0;
    while(s[i])
    {
        if(s[i] == ' ' && s[i+1] >= 33 && s[i+1] <= 126)
            j = i+1;
        i++;
    }
    while(s[j] >= 33 && s[j] <= 126)
    {
        count++;
        j++;
    }
    return count;
}
