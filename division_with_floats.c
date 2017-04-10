//cut a piece of wood into 4 pieces

#include <stdio.h>

int main (void)
    {
    float plank_length = 10.0f;
    int number_pieces = 4;                             //interesting that he has you do this with floats
    float piece_length = 0.0f;

    piece_length = plank_length/number_pieces;

    printf("Dividing a plank of length %.0f inches into %d pieces: each piece will be %.1f inches long\n",
            plank_length, number_pieces, piece_length);
    return 0;

}
