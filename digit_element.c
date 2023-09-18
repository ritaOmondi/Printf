#include "main.h"
int calculate_number_of_digits(unsigned int num, int base)
{
    int count = 0;
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num > 0)
        {
            count++;
            num /= base;
        }
    }
    return count;
}
