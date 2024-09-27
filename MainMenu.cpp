//
// Created by Jawad Khadra on 9/27/24.
//

#include "header.h"

// Function to display the main menu to the user and prompts the user to
// choose a game mode. It then calls the appropriate game mode function.
void MainMenu(int & selection, string& playerX, string& playerO) {

    cout << "\n\n";

    cout << "Enter '1' to play against the computer.\n";
    cout << "Enter '2' to play against a friend.\n";
    cout << "Enter '3' to exit the game.\n";

    cin >> selection;

    do {
        switch (selection) {
            case 1:
                cout << "Enter the name of the human player using the X token: ";
                cin >> playerX;
                playerO = "CPU";
                break;
            case 2:
                GetPlayers(playerX, playerO);
                break;
            case 3: exit(EXIT_SUCCESS);
            default:
                cout << "Invalid selection! Try again!\n";
                cin.ignore();
                break;
        }
    } while (selection < 1 || selection > 3);
}