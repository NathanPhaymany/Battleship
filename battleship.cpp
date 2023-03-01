// Battleship Project
// Nathan Phaymany
// 02/26/2023

#include <iostream>
#include <memory>
#include <time.h>
#include <vector>

using namespace std;

const int ROWS = 10; // Left to right
const int COLS = 10; // Up to down

class Ship {

	private:
	static string* board[ROWS][COLS];
	string name;
	int length;
	
	public:
	Ship(string initName, int initLength) {
		name = initName;
		length = initLength;
		randPos();
	}
	static void assignBoard(string arr[ROWS][COLS]) {
		board = arr;
	}
	void randPos(); 
};

void Ship::randPos() {
}

void setBoard(string arr[][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = "[ ]";
		}
	}
}

void showBoard(string arr[][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	srand(time(0));
	string board[ROWS][COLS];
	setBoard(board);
	Ship::assignBoard(&board);
	Ship* ship1 = new Ship("Frigate", 2);
	Ship* ship2 = new Ship("Sub", 3);
	Ship* ship3 = new Ship("Destroyer", 3);
	Ship* ship4 = new Ship("Battleship", 4);
	Ship* ship5 = new Ship("Aircraft Carrier", 5);
	showBoard(board);
}
