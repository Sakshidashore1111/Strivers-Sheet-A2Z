#include <stdio.h>

int minBitFlips(int start, int goal)
{
    int x = start ^ goal;
    int count = 0;

    while (x > 0)
    {
        if (x & 1)
        {
            count++;
        }

        x = x >> 1;
    }

    return count;
}

int main()
{
    int start = 10;
    int goal = 7;

    printf("Minimum Bit Flips = %d\n", minBitFlips(start, goal));

    return 0;
}











//2md version

#include <stdio.h>

int minBitFlips(int start, int goal)
{
    int x = start ^ goal;
    int count = 0;

    while (x != 0)
    {
        count++;
        x = x & (x - 1);
    }

    return count;
}

int main()
{
    int start = 10;
    int goal = 7;

    printf("Minimum Bit Flips = %d\n", minBitFlips(start, goal));

    return 0;
}







//3rd version

#include <stdio.h>

int minBitFlips(int start, int goal)
{
    return __builtin_popcount(start ^ goal);
}

int main()
{
    int start = 10;
    int goal = 7;

    printf("Minimum Bit Flips = %d\n", minBitFlips(start, goal));

    return 0;
}
