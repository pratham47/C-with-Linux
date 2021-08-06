#include <stdio.h>

void tower_of_hanoi(int n, char from, char to, char aux, int *moves)
{
    if(n == 0)
    {
        return;
    }
    tower_of_hanoi(n-1, from, aux, to, moves);

    printf("\n %c to %c", from, to);
    (*moves)++;

    tower_of_hanoi(n-1, aux, to, from, moves);
}

int main()
{
    int moves = 0;
    tower_of_hanoi(3,'A','C','B',&moves);

    printf("\n\n Total Movements Required = %d", moves);
}
