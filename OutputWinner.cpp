//
// Created by Jawad Khadra on 9/26/24.
//

#include "header.h"

/*
 * OutputWinner
 * This function receives as input a character indicating which player won
 * or if the game was a tie and outputs an appropriate message. This function
 * does not return anything as it simply outputs the appropriate message to
 * the screen.
 *
 * RETURNS: nothing
 * Displays the winner’s name
 */
void OutputWinner(char whoWon, // IN - represents the winner or a value
                 string playerX, // OUT - player X’s name
                 string playerO) { // OUT - player O’x name
    if (whoWon == 'X') cout << "Congratulations " << playerX << "! You have won!\n";
    else if (whoWon == 'O') cout << "Congratulations " << playerO << "! You have won!\n";
    else cout << "It's a tie!\n";

}