#include "Pars.h"

void skipspace(string a)
{
    while (a[i] == ' ')
        i++;
}

string partStr(string a)
{
    return a[0] == 'a' ? "circle" : "sdcdf";
}

int partStr2(string a)
{
    if(i == 1)
        return 1;
    if(i == 2)
        return 4;
    if(i == 3)
        return 5;
    return 0;
}
