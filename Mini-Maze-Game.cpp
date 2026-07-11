#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateGrid();
void displayGrid();
void movePlayer(char move);

const int SIZE = 5;
char grid[SIZE][SIZE];

int playerX = 0, playerY = 0;
int endX = SIZE - 1, endY = SIZE - 1;

int main() {
    cout << "---------------------------------------" << endl;
    cout << "Welcome to Obstacle Maze Game!" << endl;
    
    generateGrid();
    
    while (playerX != endX || playerY != endY) {
        displayGrid();
        cout << "Enter Move (Up: U, Down: D, Left: L, Right: R): ";
        char move;
        cin >> move;
        movePlayer(move);
    }
    cout << "---------------------------------------" << endl;
    cout << "You reached the end! You Win!" << endl;
    cout << "---------------------------------------" << endl;
    return 0;
}

void generateGrid(){
    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grid[i][j] = '.';
        }
    }
    
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (rand() % 3 == 0 && !(i == 0 && j == 0) && !(i == endX && j == endY)) {
                grid[i][j] = '#';
            }
        }
    }
    grid[0][0] = 'P';
    grid[endX][endY] = 'E';
}

void displayGrid(){
    cout << "---------------------------------------" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == playerX && j == playerY) {
                cout << 'P' << ' ';
            } else {
                cout << grid[i][j] << ' ';
            }
        }
        cout << endl;
    }
    cout << "---------------------------------------" << endl;
}

void movePlayer(char move){
    int newX = playerX, newY = playerY;
    
    switch (move) {
        case 'U': case 'u': newX--; break;
        case 'D': case 'd': newX++; break;
        case 'L': case 'l': newY--; break;
        case 'R': case 'r': newY++; break;
        default: cout << "Invalid input! Use U, D, L, or R." << endl; return;
    }
    
    if (newX < 0 || newX >= SIZE || newY < 0 || newY >= SIZE || grid[newX][newY] == '#') {
        cout << "Invalid move! Try again." << endl;
    } else {
        playerX = newX;
        playerY = newY;
    }
}