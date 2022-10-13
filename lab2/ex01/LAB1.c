#include <stdio.h>

int main()
{
    printf("+---+---+-------+-------+-------+-----------+-------+\n");
    printf("| A | B |A AND B| A OR B|A XOR B|IF A THEN B|A IFF B|\n");
    printf("+---+---+-------+-------+-------+-----------+-------+\n");
    for(int A=0;A <= 1;A++)
    {
        for(int B=0; B <= 1;B++)
        {
            printf("| %d ",A);
            printf("| %d ",B);
            printf("|   %d   ",A&B);
            printf("|   %d   ",A|B);
            printf("|   %d   ",A^B);
            printf("|     %d     ", !A||B);
            printf("|   %d   |",A==B);
            printf("\n");
        }   
    }
    printf("+---+---+---------+--------+---------+--------------+\n");
    return 0;
}