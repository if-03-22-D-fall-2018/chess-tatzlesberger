/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.c
 * Author:			P. Bauer
 * Due Date:		November 03, 2010
 * ----------------------------------------------------------
 * Description:
 * Implementation of basic chess functions.
 * ----------------------------------------------------------
 */
#include "chess.h"
#include <stdio.h>

void initaialize(struct ChessSquare board[8][8])
{
    board [0] [0].is_set = true;
    board [0] [0].piece.color = BLACK;
    board [0] [0].piece.type = ROOK;
    printf("Initaialize\n");
}

void print_board(struct ChessSquare board[8][8])
{
    printf("Printed\n");
}
