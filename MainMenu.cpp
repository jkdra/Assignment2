//
// Created by Jawad Khadra on 9/27/24.
//

#include "header.h"

// Function to display the main menu to the user and prompts the user to
// choose a game mode. It then calls the appropriate game mode function.
void MainMenu(int & selection, string& playerX, string& playerO) {

    system("clear");

    cout << "* AUTHOR : Jawad Khadra\n";
    cout << "* STUDENT ID : 1312092 (IVC)\n";
    cout << "* ASSIGNMENT #2 : Tic Tac Toe\n";
    cout << "* CLASS : CS1B\n";
    cout << "* SECTION : MW: 7:30p - 9:50p\n";
    cout << "* DUE DATE : September 27, 2024\n";
    cout << "\n";
    OutputInstruct();
    cout << "\n\n";
    cout << "Enter '0' to set the player names & symbols.\n";
    cout << "Enter '1' to play against the computer.\n";
    cout << "Enter '2' to play against a friend.\n";
    cout << "Enter '3' to exit the game.\n\n";

    cout << "Enter your selection: ";

    cin >> selection;

    do {
        switch (selection) {
            case 0:
                GetPlayers(playerX, playerO);
                MainMenu(selection, playerX, playerO);
                break;
            case 1:
                break;
            case 2:
                break;
            case 3: exit(EXIT_SUCCESS);
            default:
                cout << "Invalid selection! Try again!\n";
                cin.ignore();
                break;
        }
    } while (selection < 1 || selection > 3);
}