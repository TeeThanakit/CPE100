//65070503448 Thanakit
/*Write a program in C to check whether two given arrays are an anagram or not using function.

# Anagram : a word, phrase, or name formed by rearranging the letters of another, such as cinema, formed from iceman.*/

#include <stdio.h>  

int anagram(int N[], int N1[], int J, int J1);

int main()
{
    int i,size,size1;

    //Length of array
    scanf("%d",&size);
    int array[size];

    //number per line
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    //Length of array1
    scanf("%d",&size1);
    int array1[size1];

    //number per line
    for(i=0; i<size; i++)
    {
        scanf("%d",&array1[i]);
    }

    anagram(array,array1,size,size1);

    return 0;
}

int anagram(int N[], int N1[], int J, int J1)
{
    int I, k, l = 0;

    for(I=0; I<J; I++)
    {
        for(k=0; k<J1; k++)
        {
            if(N[I] == N1[k])
            {
                l++;
                break;
            }
        }
    }
    if((l==J)&&(l==J1))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
