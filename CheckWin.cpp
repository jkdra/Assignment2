//
// Created by Jawad Khadra on 9/26/24.
//

#include "header.h"

/*
 * CheckWin
 * This function checks to see if either player has run. Once it is
 * possible for a win condition to exist, this should run after each a
 * player makes a play.
 *
 * RETURNS the character value of the player that won or a value that
 * indicates a tie.
 */
char CheckWin(const char boardAr[][BOARD_SIZE]) {

    // Check rows for uniformity
    for (int row = 0; row < BOARD_SIZE; row++) {
        char currentChar = boardAr[row][0];  // First character in the row
        if (currentChar != ' ') {
            int sameCharCount = 1;
            for (int col = 1; col < BOARD_SIZE; col++) {
                if (boardAr[row][col] == currentChar) sameCharCount++;
                else break;
            }
            if (sameCharCount == BOARD_SIZE) return currentChar;  // Return 'X' or 'O'

        }
    }

    // Check columns for uniformity
    for (int col = 0; col < BOARD_SIZE; col++) {
        char currentChar = boardAr[0][col];  // First character in the column
        if (currentChar != ' ') {
            int sameCharCount = 1;
            for (int row = 1; row < BOARD_SIZE; row++) {
                if (boardAr[row][col] == currentChar) sameCharCount++;
                else break;
            }
            if (sameCharCount == BOARD_SIZE) return currentChar;  // Return 'X' or 'O'
        }
    }

    // Check diagonal from top-left to bottom-right
    char currentChar = boardAr[0][0];  // Start at top-left corner
    if (currentChar != ' ') {
        int sameCharCount = 1;
        for (int i = 1; i < BOARD_SIZE; i++) {
            if (boardAr[i][i] == currentChar) sameCharCount++;
            else break;
        }
        if (sameCharCount == BOARD_SIZE) return currentChar;  // Return 'X' or 'O'
    }

    // Check diagonal from top-right to bottom-left
    currentChar = boardAr[0][BOARD_SIZE - 1];  // Start at top-right corner
    if (currentChar != ' ') {
        int sameCharCount = 1;
        for (int i = 1; i < BOARD_SIZE; i++) {
            if (boardAr[i][BOARD_SIZE - 1 - i] == currentChar) {
                sameCharCount++;
            } else {
                break;
            }
        }
        if (sameCharCount == BOARD_SIZE) {
            return currentChar;  // Return 'X' or 'O'
        }
    }

    // Check for tie or unfinished game (spaces still available)
    for (int vPos = 0; vPos < BOARD_SIZE; vPos++) {
        for (int hPos = 0; hPos < BOARD_SIZE; hPos++) {
            if (boardAr[vPos][hPos] == ' ') {
                return ' ';  // Game still in progress
            }
        }
    }

    return 'T';  // If no winner and no spaces, it's a tie
}