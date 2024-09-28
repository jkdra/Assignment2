/*
 * AUTHOR : Jawad Khadra
 * STUDENT ID : 1312092 (IVC)
 * ASSIGNMENT #2 : Tic Tac Toe
 * CLASS : CS1B
 * SECTION : MW: 7:30p - 9:50p
 * DUE DATE : September 27, 2024
 */

#ifndef TICTACHEADER_H_
#define TICTACHEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <curses.h>
using namespace std;
const int BOARD_SIZE = 3;

/******************************************************************************
* OutputInstruct
* This function outputs instructions to the users. There are no input
* or output parameters for this function as it only displays text to
* the screen.
*
* RETURNS: nothing
* Displays the instructions to the user
*****************************************************************************/
void OutputInstruct();

/*****************************************************************************
 *
 * MainMenu
 * This function displays the main menu to the user and prompts the user to
 * choose a game mode. It then calls the appropriate game mode function.
 *
 * RETURNS: nothing
 *
 *****************************************************************************/
void MainMenu(int & selection, string& playerX, string& playerO);

/*****************************************************************************
 *
 * GameMode
 * This function displays the game mode menu to the user and prompts the user
 * to choose a game mode. It then calls the appropriate game mode function.
 *
 * RETURNS: nothing
 *
 */

/******************************************************************************
* InitBoard
* This function initializes each spot in the board to a space ' '.
*
* RETURNS: Board initialized with all spaces
*****************************************************************************/
void InitBoard(char boardAr[][BOARD_SIZE]); // OUT - tic-tac-toe board

/*
* DisplayBoard
* This function outputs the tic-tac-toe board including the tokens
* played in the proper format (as described below).
*
*       1       2        3
*    [1][1] | [1][2] | [1][3]
*           |        |
* 1         |        |
*           |        |
*    -------------------------
*    [2][1] | [2][2] | [2][3]
*           |        |
* 2         |        |
*           |        |
*    -------------------------
*    [3][1] | [3][2] | [3][3]
*           |        |
* 3         |        |
*           |        |
* RETURNS: nothing
* outputs the current state of the board
ASSIGNMENT #2 Multi-Dimensional Arrays – TIC TAC TOE CS1B
4 of 5
*/
void DisplayBoard(const char boardAr[][BOARD_SIZE]); // IN - tic-tac-toe board

/******************************************************************************
* GetPlayers
* This function prompts the user and gets the input for the players’ names.
* playerX will always contain the name of the player that is using the X token.
* playerO will always contain the name of the player that is using the O token.
*
* RETURNS: the players names through the variables playerX and playerO.
*****************************************************************************/
void GetPlayers(
        string& playerX, // OUT - player X’s name
        string& playerO); // OUT - player O’x name

        /*
        * GetAndCheckInp
        * This function prompts the user and gets the input for the players’ names.
        * playerX will always contain the name of the player that is using the X token.
        * playerO will always contain the name of the player that is using the O token.
        *
        * RETURNS: the players names through the variables playerX and playerO.
        */
void GetAndCheckInp(char boardAr[][3], char token, string playerX, string playerO);

/******************************************************************************
* SwitchToken
* This function switches the active player.
* It takes in a parameter representing the current player's token
* as a character value (either an X or an O) and returns the opposite.
* For example, if this function receives an X it returns an 0. If it
* receives and O it returns and X.
*
* RETURNS: the token opposite of the one in which it receives.
*****************************************************************************/
char SwitchToken(char token); // IN - current player’s token ('X' or 'O')

/******************************************************************************
* CheckWin
* This function checks to see if either player has run. Once it is
* possible for a win condition to exist, this should run after each a
* player makes a play.
*
* RETURNS the character value of the player that won or a value that
* indicates a tie.
*****************************************************************************/
char CheckWin(const char boardAr[][BOARD_SIZE]); // IN - tic-tac-toe board

/*****************************************************************************
 *
 * ComputerAlgorithm
 * This function takes in a tic-tac-toe board and a computer character and
 * a player character. It then checks if the computer can win, if the player
 * can win, if the game is tied, and if not, it will make a random move.
 *
 * RETURNS: nothing
 *
 *****************************************************************************/
void ComputerAlgorithm(char boardAr[][BOARD_SIZE], char computerChar, char playerChar);

/******************************************************************************
* OutputWinner
* This function receives as input a character indicating which player won
* or if the game was a tie and outputs an appropriate message. This function
* does not return anything as it simply outputs the appropriate message to
* the screen.
*
* RETURNS: nothing
* à Displays the winner’s name
*****************************************************************************/
void OutputWinner(char whoWon, // IN - represents the winner or a value
// indicating a tied game.
string playerX, // OUT - player X’s name
string playerO); // OUT - player O’x name
#endif /* TICTACHEADER_H_ */