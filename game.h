#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//声明 
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void  PlayerMove(char board[ROW][COL],int row, int col);
void  ComputerMove(char board[ROW][COL], int row, int col);

//返回四种游戏状态
//1，玩家赢  *
//2，电脑赢  #
//3，平局	 Q
//4，继续游戏 C
char IsWin(char board[ROW][COL], int row, int col);
