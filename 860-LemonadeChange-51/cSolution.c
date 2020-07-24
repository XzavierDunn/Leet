#include <stdio.h>

int main()
{
    int boi(int);

    int bills[] = {5, 5};
    int billsSize = 2;

    int fives, tens, i;
    fives = tens = 0;

    for (i = 0; i < billsSize; i++)
    {
        if (bills[i] == 5)
        {
            fives++;
        }
        else if (bills[i] == 10)
        {
            tens++;
            fives--;
        }
        else if (tens > 0)
        {
            tens--;
            fives--;
        }
        else
        {
            fives -= 3;
        }
        if (fives < 0)
        {
            return 0;
        }
    }

    return 1;
}
