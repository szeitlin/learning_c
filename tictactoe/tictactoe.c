#include <stdio.h>

int main(void)
{
    int current_player = 0;
    int winner = 0;
    int square = 0;
    char symbol='';
    unsigned int row = 0;
    unsigned int column = 0;

    //displayed board is 1-indexed, but actual checking will be done with 0-index
    unsigned int board[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
                        };

for(unsigned int i=0; i < 9 && winner == 0; ++i)
{
    printf(" %d | %d | %d\n"), board[0][0], board[0][1], board[0][2]);
    printf(" %d | %d | %d\n"), board[1][0], board[1][1], board[1][2])
    printf(" %d | %d | %d\n"), board[2][0], board[2][1], board[2][2];

    //player 1 gets odd turns and X, player 2 gets even turns and O
    player = i%2 + 1;

    do
    {
    printf("Player %d, select a square (1-9) for where to place your %c: ",
            player, (player==1) ? 'X' : 'O');
    scanf(%d, &square);

    row = --square/3;                   //-- to subtract 1
    column = square % 3;

    }while(square < 0 || square > 9);
        printf("That is not a valid square number. Pick again or go away!"); //not sure if this works here
        




    }

return 0;







}