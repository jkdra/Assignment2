//
// Created by Jawad Khadra on 9/26/24.
//

#include "header.h"

/*
 * GetAndCheckInp
 * This function prompts the user and gets the input for the players’ names.
 * playerX will always contain the name of the player that is using the X token.
 * playerO will always contain the name of the player that is using the O token.
 *
 * RETURNS: the players names through the variables playerX and playerO.
 */
void GetAndCheckInp(char boardAr[][BOARD_SIZE], char token, string playerX, string playerO) {

    bool valid = false;   // CALC
    int row, col;        // IN - row and column of the play

    do {
        if (token == 'X') cout << playerX;
        else cout << playerO;
        cout << "'s turn! What is your play?:\n";
        cin >> row >> col;
        row--; col--;

        bool invalidRow = row >= BOARD_SIZE || row < 0;
        bool invalidCol = col >= BOARD_SIZE || col < 0;

        if (invalidRow || invalidCol) {
            valid = false;
            cout << "Invalid entry! Try Again!\n";
        } else if (boardAr[row][col] != ' ') {
            cout << "Already played! Try Again!\n";
        } else {
            boardAr[row][col] = token;
            valid = true;
        }
    } while (!valid);

    cin.ignore();
}