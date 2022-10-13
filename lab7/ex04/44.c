//65070503448 Thanakit
//Write a program in C to Convert decimal to binary using function.

#include<stdio.h>

int Convert2Binary(int num)
{
    int i,temp,j;
    i=0;
    j=1;
    while(num != 0)
    {
         temp=num%2;
         i=i+(temp*j);
         j *= 10;
         num /= 2;
    }
    return i;
}

int main()
{
    int num, i;
    scanf("%d",&num);

    i=Convert2Binary(num);

    printf("%d",i);

    return 0;
}
