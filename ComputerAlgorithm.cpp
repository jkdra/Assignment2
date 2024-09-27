//
// Created by Jawad Khadra on 9/27/24.
//

#include "header.h"

// Function to make a computer move
void ComputerAlgorithm(char boardAr[][BOARD_SIZE], char computerChar, char playerChar) {

    // First, check if the computer can win
    for (int row = 0; row < BOARD_SIZE; row++) {
        for (int col = 0; col < BOARD_SIZE; col++) {
            if (boardAr[row][col] == ' ') {
                boardAr[row][col] = computerChar;  // Try the move
                if (CheckWin(boardAr) == computerChar) {
                    return;  // If this move results in a win, make it
                }
                boardAr[row][col] = ' ';  // Undo the move
            }
        }
    }

    // Next, check if the player is about to win and block
    for (int row = 0; row < BOARD_SIZE; row++) {
        for (int col = 0; col < BOARD_SIZE; col++) {
            if (boardAr[row][col] == ' ') {
                boardAr[row][col] = playerChar;  // Try the player's move
                if (CheckWin(boardAr) == playerChar) {
                    boardAr[row][col] = computerChar;  // Block the player
                    return;
                }
                boardAr[row][col] = ' ';  // Undo the move
            }
        }
    }

    // If neither can win/block, take the center if available
    if (boardAr[BOARD_SIZE/2][BOARD_SIZE/2] == ' ') {
        boardAr[BOARD_SIZE/2][BOARD_SIZE/2] = computerChar;
        return;
    }

    // Take one of the corners if available
    if (boardAr[0][0] == ' ') {
        boardAr[0][0] = computerChar;
        return;
    }
    if (boardAr[0][BOARD_SIZE-1] == ' ') {
        boardAr[0][BOARD_SIZE-1] = computerChar;
        return;
    }
    if (boardAr[BOARD_SIZE-1][0] == ' ') {
        boardAr[BOARD_SIZE-1][0] = computerChar;
        return;
    }
    if (boardAr[BOARD_SIZE-1][BOARD_SIZE-1] == ' ') {
        boardAr[BOARD_SIZE-1][BOARD_SIZE-1] = computerChar;
        return;
    }

    // Otherwise, pick a random available spot
    int availableMoves[BOARD_SIZE * BOARD_SIZE][2];  // Store available moves
    int moveCount = 0;
    for (int row = 0; row < BOARD_SIZE; row++) {
        for (int col = 0; col < BOARD_SIZE; col++) {
            if (boardAr[row][col] == ' ') {
                availableMoves[moveCount][0] = row;
                availableMoves[moveCount][1] = col;
                moveCount++;
            }
        }
    }

    if (moveCount > 0) {
        int randomMove = rand() % moveCount;
        int randomRow = availableMoves[randomMove][0];
        int randomCol = availableMoves[randomMove][1];
        boardAr[randomRow][randomCol] = computerChar;  // Place computer's move
    }
}