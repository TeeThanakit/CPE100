#include <stdio.h>

int main()
{
    int Decimal,i,count,digits,temp,array[16],j;
    printf("Please input Decimal number: ");
    scanf("%d",&Decimal);
    count = 0;
    temp = Decimal;
    while(Decimal > 0)
    {
        Decimal /= 2;
        count++;
    }

    for (i = 1; i <= 16-count; i++)
    {
        printf("0");
    }

    i = 0;
    while(temp != 0)
    {
        if(temp % 2 == 0 && temp != 0)
        {
            array[i]=0;
        }
        else
        {
            array[i]=1;
        }
        i++;
        temp /= 2;
    }
    for (j = i-1; j >= 0; j--)
    {
        printf("%d",array[j]);
    }
    
    return 0;
}