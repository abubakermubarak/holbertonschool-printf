#include "main.h"
char get_sign(const char *format)
{
    const char *copy = format;
    if (*copy == '+')
    {
        return '+';
    }
    else if (*copy == '-')
    {
        return '-';
    }
    else if (*copy == '0')
    {
        return 'z';
    }
    return 'n';
}