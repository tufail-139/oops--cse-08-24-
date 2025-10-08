#include <stdio.h>

int main()
{

    int a[6] = {2, 1, 1, 3, 1, 1};

    int b[6];
    int counter = 0;

    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 6; j++)
        {

            if (a[i] == a[j])
            {

                counter++;
            }
            b[i] = counter;
        }
    }
    int te = 0;
    int tp = 0;

    for (int i = 0; i < 6; i++)
    {

        if (b[i] > te)
        {

            te = b[i];
            tp = i;
        }
    }

    printf("%d  %d", tp, te);
    return 0;
}