//
// Created by Jawad Khadra on 9/25/24.
//

#include "header.h"

/*
 * OutputInstruct
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: nothing
 * Displays the instructions to the user
 */
void OutputInstruct() {
    cout << "Welcome to TIC TAC TOE!\n"
            "This game is played on a 3x3 board.\n"
            "The objective of the game is to get three in a row.\n"
            "The game is played with two tokens, X and O.\n"
            "Each player has a turn to play.\n"
            "To play, enter the name of the player using the token.\n"
            "If the player is correct, they will be prompted to enter their move.\n"
            "If the player is incorrect, they will be prompted to enter a new name.\n"
            "The game will continue until one player has three in a row.\n"
            "Good luck!\n";
}