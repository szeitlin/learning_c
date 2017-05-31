#include <stdio.h>

int main(void)
{
    int player = 0;
    int winner = 0;
    int square = 0;
    //char symbol='?';
    unsigned int row = 0;
    unsigned int column = 0;

    //displayed board is 1-indexed, but actual checking will be done with 0-index
    unsigned int board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
                        };

for(unsigned int i=0; i < 9 && winner == 0; ++i)
{
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

    //player 1 gets odd turns and X, player 2 gets even turns and O
    player = i%2 + 1;

    do
    {
    printf("Player %d, select a square (1-9) for where to place your %c: ",
            player, (player==1) ? 'X' : 'O');
    scanf("%d", &square);

    row = --square/3;                   //-- to subtract 1
    column = square % 3;

    }while(square < 0 || square > 9);
        //printf("That is not a valid square number. Pick again or go away!");
      board[row][column] = (player == 1) ? 'X' : 'O'; //this line is not working at all

    //check for a winner

    if((board[0][0]==board[1][1] && board[0][0]==board[2][2]) ||
      (board[0][2]==board[1][1] && board[0][2]==board[2][0]))
      winner = player;
    else
    {
      for(unsigned int line=0; line <=2; ++line)
      {
        if((board[line][0]==board[line][1] && board[line][0]==board[line][2]) ||
           (board[0][line]==board[1][line] && board[0][line]==board[2][line]))
           winner=player;
      }

    }
}
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);

    if(winner)
        printf("\n Congratulations player %d, you won!\n", winner);
    else
        printf("\n Tie \n");
return 0;

}