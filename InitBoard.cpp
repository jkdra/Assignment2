//
// Created by Jawad Khadra on 9/25/24.
//

#include "header.h"

/*
 * InitBoard
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: nothing
 * Board initialized with all spaces
 */
void InitBoard(char boardAr[][BOARD_SIZE]) {
    for (int vPos = 0; /* CALC - position of the vertical*/
        vPos < BOARD_SIZE; vPos++) {
        for (int hPos = 0; /* CALC - position of the horizontal*/
             hPos < BOARD_SIZE; hPos++) {
            boardAr[vPos][hPos] = ' ';
        }
    }
}