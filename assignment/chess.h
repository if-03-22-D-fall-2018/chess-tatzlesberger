/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHDV
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			chess.h
 * Author:			P. Bauer
 * Due Date:		October 15, 2014
 * ----------------------------------------------------------
 * Description:
 * Basic chess functions.
 * ----------------------------------------------------------
 */

#include "stdbool.h"
enum Color {WHITE, BLACK};

enum PieceType {PAWN, ROOK, KNIGHT, BISHOP, QUEEN, KING};

struct ChessPiece{
  enum Color color;
  enum PieceType type;
};

struct ChessSquare{
  bool is_set;
  struct ChessPiece piece;
};

void initaialize(struct ChessSquare board[8][8]);
void print_board(struct ChessSquare board[8][8]);
