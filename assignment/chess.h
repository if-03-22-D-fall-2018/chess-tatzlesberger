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
#ifndef ___Chess_H
#define ___Chess_H
#include "stdbool.h"
enum Color {White, Black};

enum PieceType {Pawn, Rook, Knight, Bishop, Queen, King, NoPiece};

enum MoveType {NormalMove, CaptureMove};

struct ChessPiece{
  enum Color color;
  enum PieceType type;
};

struct ChessSquare{
  bool is_occupied;
  struct ChessPiece piece;
};

typedef struct ChessSquare ChessBoard[8][8];

typedef int File;
typedef int Rank;

void init_chess_board(ChessBoard chess_board);
void print_board(struct ChessSquare board[8][8]);

bool is_piece(struct ChessPiece chess_piece, enum Color color, enum PieceType piece_type);

struct ChessSquare* get_square(ChessBoard chess_board, File file, Rank rank);
bool is_square_occupied(ChessBoard chess_board, File file, Rank rank);
bool add_piece(ChessBoard chess_board, File file, Rank rank, struct ChessPiece chess_piece);
struct ChessPiece get_piece(ChessBoard chess_board, File file, Rank rank);
void setup_chess_board(ChessBoard chess_board);
bool remove_piece(ChessBoard chess_board, File file, Rank rank);
bool squares_share_file(File fileOne, Rank rankOne, File fileTwo, Rank rankTwo);
bool squares_share_rank(File fileOne, Rank rankOne, File fileTwo, Rank rankTwo);
bool squares_share_diagonal(File fileOne, Rank rankOne, File fileTwo, Rank rankTwo);
bool squares_share_knights_move(File fileOne, Rank rankOne, File fileTwo, Rank rankTwo);
bool squares_share_pawns_move(enum Color color, enum MoveType move_type, File fileOne, Rank rankOne, File fileTwo, Rank rankTwo);
bool squares_share_queens_move(File fileOne, Rank rankOne, File fileTwo, Rank rankTwo);
bool squares_share_kings_move(File fileOne, Rank rankOne, File fileTwo, Rank rankTwo);
#endif
