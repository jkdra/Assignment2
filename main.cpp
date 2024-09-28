/*
 * AUTHOR : Jawad Khadra
 * STUDENT ID : 1312092 (IVC)
 * ASSIGNMENT #2 : Tic Tac Toe
 * CLASS : CS1B
 * SECTION : MW: 7:30p - 9:50p
 * DUE DATE : September 27, 2024
 */

#include "header.h"

using namespace std;

int main() {

    char boardAr[BOARD_SIZE][BOARD_SIZE]; // tic-tac-toe board
    string playerX; // player X’s name
    string playerO; // player O’x name
    char winner;
    int selection;

    InitBoard(boardAr);

    MainMenu(selection, playerX, playerO);
    do {
        DisplayBoard(boardAr);
        GetAndCheckInp(boardAr, 'X', playerX, playerO);
        winner = CheckWin(boardAr);
        if (winner != ' ') {
            DisplayBoard(boardAr);
            OutputWinner(winner, playerX, playerO);
            MainMenu(selection, playerX, playerO);
        }
        if (selection == 1) {
            ComputerAlgorithm(boardAr, 'O', 'X');
        } else if (selection == 2) {
            DisplayBoard(boardAr);
            GetAndCheckInp(boardAr, 'O', playerX, playerO);
        }
        winner = CheckWin(boardAr);
        if (winner != ' ') {
            DisplayBoard(boardAr);
            OutputWinner(winner, playerX, playerO);
            MainMenu(selection, playerX, playerO);
        }
    } while (selection != 3);
    return 0;
}
