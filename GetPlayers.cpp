//
// Created by Jawad Khadra on 9/26/24.
//

#include "header.h"

/*
 * GetPlayers
 * This function prompts the user and gets the input for the players’ names.
 * playerX will always contain the name of the player that is using the X token.
 * playerO will always contain the name of the player that is using the O token.
 *
 * RETURNS: the players names through the variables playerX and playerO.
 */
void GetPlayers(string& playerX, // OUT - player X’s name
                string& playerO) { // OUT - player O’x name
    cout << "Enter the name of the player using the X token: ";
    cin >> playerX;
    cout << "Enter the name of the player using the O token: ";
    cin >> playerO;

    cin.ignore();
}