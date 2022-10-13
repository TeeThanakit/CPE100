#include<stdio.h>

int main()
{
    int A,i;
    scanf("%d", &A);
    char B[17] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char C[17];

    for(i = 0; i < 8; i++)
    {
        C[i] = B[0];
        if(A % 16 >= 10)
        {
            if(A % 16 == 10) C[i] = B[10];
            else if(A % 16 == 11)C[i] = B[11];
            else if(A % 16 == 12)C[i] = B[12];
            else if(A % 16 == 13)C[i] = B[13];
            else if(A % 16 == 14)C[i] = B[14];
            else if(A % 16 == 15)C[i] = B[15];
        }
        else if(A % 16 < 10)
        {
            
            if(A % 16 == 1) C[i] = B[1];
            else if(A % 16 == 2) C[i] = B[2];
            else if(A % 16 == 3) C[i] = B[3];
            else if(A % 16 == 4) C[i] = B[4];
            else if(A % 16 == 5) C[i] = B[5];
            else if(A % 16 == 6) C[i] = B[6];
            else if(A % 16 == 7) C[i] = B[7];
            else if(A % 16 == 8) C[i] = B[8];
            else if(A % 16 == 9) C[i] = B[9];
        }
        A = A/16;
    }
    for(i = 8; i >= 0; i--)
    {
        printf("%c", C[i]);
    }
}