//
// Created by Jawad Khadra on 9/26/24.
//

#include "header.h"

/*
 * SwitchToken
 * This function switches the active player.
 * It takes in a parameter representing the current player's token
 * as a character value (either an X or an O) and returns the opposite.
 * For example, if this function receives an X it returns an 0. If it
 * receives and O it returns and X.
 *
 * RETURNS: the token opposite of the one in which it receives.
 */
char SwitchToken(char token /* IN - current player’s token ('X' or 'O') */) {
    return token == 'X' ? 'O' : 'X';
}