#define _CRT_SECURE_NO_WARNINGS 1  
#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
//声明
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col );
void Playermove(char board[ROW][COL],int row, int col);
void Computermove(char board[ROW][COL],int row, int col);


//告诉我们四种游戏的状态
//玩家赢 '*'
//电脑赢  '#'
//平局   'Q'
//继续游戏  'C'	
char IsWin(char board[ROW][COL],int row ,int col);