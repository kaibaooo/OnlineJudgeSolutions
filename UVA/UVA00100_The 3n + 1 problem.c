#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    int counter = 0;
    int max = 0;
    int i;
    int exchange=0;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (a>b)
        {
            int c = b;
            b = a;
            a = c;
            exchange++;
        }
        for (i = a; i <= b; i++)
        {
            int num = i;
            while (1)
            {
                if (num == 1)
                    break;
                else
                {
                    if (num % 2 == 0)
                        num =num / 2;
                    else
                        num = 3 * num + 1;
                }
                counter++;
            }
            if (counter > max)
                max = counter;
            counter = 0;
        }
        if(exchange>0)
            printf("%d %d %d\n", b, a, max + 1);
        else
            printf("%d %d %d\n", a, b, max + 1);
        max = 0;
        exchange = 0;
    }

    return 0;
}
