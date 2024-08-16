
int countSeniors(char ** details, int detailsSize){
    int i = 0;
    int j= 0;
    int res=0;
    int age;
    while(detailsSize > i)
    {
        age = (details[i][11]-'0')* 10 + (details[i][12]-'0');
        if(age > 60)
        {
            res++;
        }
        i++;
    }
    return (res);
}