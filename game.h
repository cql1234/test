#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_count 80
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS],int row ,int col);
void FindMIne(char mind[ROWS][COLS], char show[ROWS][COLS], int row, int col);