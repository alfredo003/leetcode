#include <limits.h>
int myAtoi(char* s) {
    int res =0;
    int i= 0;
    int sign = 1;

    while(s[i] == ' ')
        i++;
    if(s[i] == '-')
        sign = -1;
    if(s[i] == '-' || s[i] == '+')
        i++;
    while(s[i] >= '0' && s[i] <= '9')
    {
         int digit = s[i] - '0';

        if (res > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        res = res * 10 + digit;
        i++;
    }
    return (sign * res);
}
