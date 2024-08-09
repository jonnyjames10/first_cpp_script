#include <iostream>

using namespace std;

void disp_board(char board[3][3]) {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

bool check_win(char board[3][3], char player) {
    // Check all diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    } 
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    } 

    for (int i = 0; i < 3; i++) {
        // Check all verticals
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        // Check all horizontals
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    return false;
}

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player = 'X';
    int row, col;
    int n;

    for (n = 0; n < 9; n++) {

        disp_board(board);

        while (true) {
            cout << "Player " << player << ", enter a column (1-3) and row (1-3) with a space in between: ";
            cin >> col >> row;

            if (board[4 - row - 1][col - 1] != ' ' || row < 1 || row > 3 || col < 1 || row > 3) {
                cout << "Invalid move. Try again.\n";
            } else {
                break;
            }
        }

        board[4 - row - 1][col - 1] = player;

        if (check_win(board, player)) {
            cout << "Player " << player << " wins!\n";
            disp_board(board);
            break;
        }

        if (player == 'X') {
            player = 'O';
        } else {
            player = 'X';
        }
    }

    if (n == 9 && check_win(board, 'X') == false && check_win(board, 'O') == false) {
        disp_board(board);
        cout << "It's a draw!\n";
    }

    return 0;
}