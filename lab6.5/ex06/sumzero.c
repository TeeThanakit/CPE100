//65070503448 Thanakit
#include <stdio.h>

int main()
{
    int n, arr[100], temp, p[2] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = 2001;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            temp = arr[i] + arr[j];
            if (temp < 0)
            {
                temp *= -1;
            }

            if (temp < min&&i!=j)
            {
                min = temp;
                p[0] = arr[i];
                p[1] = arr[j];
            }
        }

    printf("%d\n%d", p[0], p[1]);

    return 0;
}
