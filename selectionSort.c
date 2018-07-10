#include<stdio.h> //For printf

int main(void)
{
    int inp[]={5, 4, 1, 3, 6, 2};
    int n = 0, small, temp, pos = 0;

    for (int i = 0; i < 6; i++)
    {
        n = i;
        small = inp[n];
        while (n < 6)
        {
            if ((n + 1) < 6)
            {
                if ((inp[n+1] < small))
                {
                    small = inp[n+1];
                    pos = n + 1;
                }
            }
            n++;
        }
        temp = inp[i];
        inp[i] = small;
        inp[pos] = temp;
        for (int p = 0; p < 6; p++)
            {printf("%d ", inp[p]);
            }
    printf("\n");
    }
}