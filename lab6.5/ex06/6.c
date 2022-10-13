#include <stdio.h>

int main()
{
    int n, arr[100], i, j, temp, p[2] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[n - 1];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            temp = arr[i] + arr[j];
            if (temp < 0)
            {
                temp *= -1;
            }

            if (temp < min)
            {
                min = temp;
                p[0] = arr[i];
                p[1] = arr[j];
            }
        }

    printf("%d\n%d", p[0], p[1]);

    return 0;
}
