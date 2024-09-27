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

    cout << "* AUTHOR : Jawad Khadra\n";
    cout << "* STUDENT ID : 1312092 (IVC)\n";
    cout << "* ASSIGNMENT #2 : Tic Tac Toe\n";
    cout << "* CLASS : CS1B\n";
    cout << "* SECTION : MW: 7:30p - 9:50p\n";
    cout << "* DUE DATE : September 27, 2024\n";
    cout << "\n";

    char boardAr[BOARD_SIZE][BOARD_SIZE]; // tic-tac-toe board
    string playerX; // player X’s name
    string playerO; // player O’x name
    char winner;
    int selection;

    OutputInstruct();
    InitBoard(boardAr);
    MainMenu(selection, playerX, playerO);

    do {

        switch (selection) {
            case 1:
                DisplayBoard(boardAr);
                GetAndCheckInp(boardAr, 'O', playerX, playerO);
                winner = CheckWin(boardAr);
                if (winner != ' ') {
                    DisplayBoard(boardAr);
                    break;
                }
                ComputerAlgorithm(boardAr, 'O', 'X');
                break;
            case 2:
                DisplayBoard(boardAr);
                GetAndCheckInp(boardAr, 'X', playerX, playerO);
                winner = CheckWin(boardAr);
                if (winner != ' ') {
                    DisplayBoard(boardAr);
                    break;
                }
                DisplayBoard(boardAr);
                GetAndCheckInp(boardAr, 'O', playerX, playerO);
                winner = CheckWin(boardAr);
                break;
        }
    } while (winner == ' ');

    OutputWinner(winner, playerX, playerO);
    return 0;
}
