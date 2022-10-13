//65070503448 Thanakit
#include <stdio.h>

int main()
{
    int n, i, j, k, temp;
    int Arr[100] = {0}, F[100] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
        F[Arr[i]] += 1;
    }
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }

    for (i = 0; i < 100; i++)
    {
        if (F[Arr[i]] != 0 && Arr[i] != temp)
        {
            temp = Arr[i];
            printf("%d %d\n", Arr[i], F[Arr[i]]);
        }
    }

    return 0;
}
