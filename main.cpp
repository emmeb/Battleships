//
//  main.cpp
//  Battleships
//
//  Created by Emilie Burton on 1/27/15.
//  Copyright (c) 2015 emme. All rights reserved.
//

/*
 * BattleShip.cpp
 *
 */
#include <iostream>
#include <cstdlib>

using namespace std;

bool set_ships(int **& matrix, int size, int num1);

int main()
{
    int ** B;
    int size, num_ships, row, col;
    int num_hits=0;
    
    cout << "***** Battleship *****" << endl;
    cout << "How many rows/columns is the board? ";
    cin >> size;
    row = size;
    col = size;
    
    /* CREATE THE BATTLESHIP BOARD AND SET ALL ELEMENTS TO 0*/
    
    int ** board = NULL;
    board = new int*[2];
    board [0] = new int [row];
    board [1] = new int [col];
    
    
    cout << "A " << size << "x" << size << " board has been created.\n";
    cout << "How many ships? ";
    cin >> num_ships;
    set_ships(B,size,num_ships);
    
    while(num_hits!=num_ships)
    {
        cout << "What row:";
        cin >> row;
        cout << "What col: ";
        cin >> col;
        
        /*DETERMINE IF ITâS A HIT. IF SO, UPDATE INFORMATION & TELL USER.*/
        
    }
    
    cout << "You sunk my battleships!" << endl;
    
    /*CLEAN UP YOUR MEMORY*/
    
    
    
    return 0;
}
/** Create set_ships function **/
bool set_ships(int **& matrix, int size, int num1){
    return true;
}
