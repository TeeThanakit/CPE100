//65070503457 Paratthakon Suksukhon
#include<stdio.h>
#include<string.h>

void Intersect(int *A, int *B, int *t1, int *t2)
{
    int i = 0;
    int j = 0;
    int count = 0;

    for(i = 0 ;i < *t1; i++) //check repeated
    {
        for(j = 0; j < i; j++)
        {
            if(*(A+i)==*(A+j))
            {
                *(A+i) = 1001; // change num repeated
            }
        }
    }

    for(i=0;i<*t1;i++)
    {
        for(j=0;j<*t2;j++)
        {
            if(*(A+i)==*(B+j))
            {
                printf("%d\n", *(A+i));
                count++;
                break;
            }
        }
    }
    if(count < 1)
    {
        printf("None");
    }
}


int main()
{
    int n;
    int temp;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    } 

    int m;
    scanf("%d", &m);
    int B[m];
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &B[i]);
    }
    Intersect(A,B, &n, &m);
}

