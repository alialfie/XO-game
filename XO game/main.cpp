#include <iostream>

using namespace std;

int main()
{
    char b[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
    bool condition = true;
    for(int x = 0; x<9 ;x++){
        cout << "Player X's turn" << endl;
        cout << "   1   2   3" << endl;
        cout << "1  " << b[0][0] << "   " << b[0][1] << "   " << b[0][2] << "   " << endl;
        cout << "2  " << b[1][0] << "   " << b[1][1] << "   " << b[1][2] << "   " << endl;
        cout << "3  " << b[2][0] << "   " << b[2][1] << "   " << b[2][2] << "   " << endl;

        int i, j;
        cout << "Enter row:" << endl;
        cin >> i;
        cout << "Enter column:" << endl;
        cin >> j;

        if(b[i-1][j-1] == '-'){
            b[i-1][j-1] = 'X';
        }else{
            cout << "Spot is already filled, try again" << endl;
            cout << "Enter row:" << endl;
            cin >> i;
            cout << "Enter column:" << endl;
            cin >> j;
            if(b[i-1][j-1] == '-'){
                b[i-1][j-1] = 'X';
            }else{
                cout << "You did it again! Turn skipped" << endl;
            }
        }

        if((b[0][0] == 'X' && b[0][1] == 'X' && b[0][2] == 'X') || (b[1][0] == 'X' && b[1][1] == 'X' && b[1][2] == 'X') || (b[2][0] == 'X' && b[2][1] == 'X' && b[2][2] == 'X') || (b[0][0] == 'X' && b[1][0] == 'X' && b[2][0] == 'X') || (b[0][1] == 'X' && b[1][1] == 'X' && b[2][1] == 'X') || (b[0][2] == 'X' && b[1][2] == 'X' && b[2][2] == 'X')|| (b[0][0] == 'X' && b[1][1] == 'X' && b[2][2] == 'X') || (b[0][2] == 'X' && b[1][1] == 'X' && b[2][0] == 'X')){
            cout << "Player X won!" << endl;
            cout << "   1   2   3" << endl;
            cout << "1  " << b[0][0] << "   " << b[0][1] << "   " << b[0][2] << "   " << endl;
            cout << "2  " << b[1][0] << "   " << b[1][1] << "   " << b[1][2] << "   " << endl;
            cout << "3  " << b[2][0] << "   " << b[2][1] << "   " << b[2][2] << "   " << endl;
            condition = false;
            break;
        }else if((b[0][0] == 'O' && b[0][1] == 'O' && b[0][2] == 'O') || (b[1][0] == 'O' && b[1][1] == 'O' && b[1][2] == 'O') || (b[2][0] == 'O' && b[2][1] == 'O' && b[2][2] == 'O') || (b[0][0] == 'O' && b[1][0] == 'O' && b[2][0] == 'O') || (b[0][1] == 'O' && b[1][1] == 'O' && b[2][1] == 'O') || (b[0][2] == 'O' && b[1][2] == 'O' && b[2][2] == 'O')|| (b[0][0] == 'O' && b[1][1] == 'O' && b[2][2] == 'O') || (b[0][2] == 'O' && b[1][1] == 'O' && b[2][0] == 'O')){
            cout << "Player X won!" << endl;
            cout << "   1   2   3" << endl;
            cout << "1  " << b[0][0] << "   " << b[0][1] << "   " << b[0][2] << "   " << endl;
            cout << "2  " << b[1][0] << "   " << b[1][1] << "   " << b[1][2] << "   " << endl;
            cout << "3  " << b[2][0] << "   " << b[2][1] << "   " << b[2][2] << "   " << endl;
            condition = false;
            break;
        }

        cout << "Player O's turn" << endl;
        cout << "   1   2   3" << endl;
        cout << "1  " << b[0][0] << "   " << b[0][1] << "   " << b[0][2] << "   " << endl;
        cout << "2  " << b[1][0] << "   " << b[1][1] << "   " << b[1][2] << "   " << endl;
        cout << "3  " << b[2][0] << "   " << b[2][1] << "   " << b[2][2] << "   " << endl;

        cout << "Enter row:" << endl;
        cin >> i;
        cout << "Enter column:" << endl;
        cin >> j;

        if(b[i-1][j-1] == '-'){
            b[i-1][j-1] = 'O';
        }else{
            cout << "Spot is already filled, try again" << endl;
            cout << "Enter row:" << endl;
            cin >> i;
            cout << "Enter column:" << endl;
            cin >> j;
            if(b[i-1][j-1] == '-'){
                b[i-1][j-1] = 'O';
            }else{
                cout << "You did it again! Turn skipped" << endl;
            }
        }

        if((b[0][0] == 'X' && b[0][1] == 'X' && b[0][2] == 'X') || (b[1][0] == 'X' && b[1][1] == 'X' && b[1][2] == 'X') || (b[2][0] == 'X' && b[2][1] == 'X' && b[2][2] == 'X') || (b[0][0] == 'X' && b[1][0] == 'X' && b[2][0] == 'X') || (b[0][1] == 'X' && b[1][1] == 'X' && b[2][1] == 'X') || (b[0][2] == 'X' && b[1][2] == 'X' && b[2][2] == 'X')|| (b[0][0] == 'X' && b[1][1] == 'X' && b[2][2] == 'X') || (b[0][2] == 'X' && b[1][1] == 'X' && b[2][0] == 'X')){
            cout << "Player X won!" << endl;
            cout << "   1   2   3" << endl;
            cout << "1  " << b[0][0] << "   " << b[0][1] << "   " << b[0][2] << "   " << endl;
            cout << "2  " << b[1][0] << "   " << b[1][1] << "   " << b[1][2] << "   " << endl;
            cout << "3  " << b[2][0] << "   " << b[2][1] << "   " << b[2][2] << "   " << endl;
            condition = false;
            break;
        }else if((b[0][0] == 'O' && b[0][1] == 'O' && b[0][2] == 'O') || (b[1][0] == 'O' && b[1][1] == 'O' && b[1][2] == 'O') || (b[2][0] == 'O' && b[2][1] == 'O' && b[2][2] == 'O') || (b[0][0] == 'O' && b[1][0] == 'O' && b[2][0] == 'O') || (b[0][1] == 'O' && b[1][1] == 'O' && b[2][1] == 'O') || (b[0][2] == 'O' && b[1][2] == 'O' && b[2][2] == 'O')|| (b[0][0] == 'O' && b[1][1] == 'O' && b[2][2] == 'O') || (b[0][2] == 'O' && b[1][1] == 'O' && b[2][0] == 'O')){
            cout << "Player O won!" << endl;
            cout << "   1   2   3" << endl;
            cout << "1  " << b[0][0] << "   " << b[0][1] << "   " << b[0][2] << "   " << endl;
            cout << "2  " << b[1][0] << "   " << b[1][1] << "   " << b[1][2] << "   " << endl;
            cout << "3  " << b[2][0] << "   " << b[2][1] << "   " << b[2][2] << "   " << endl;
            condition = false;
            break;
        }

        if(condition == true){
            cout << "Nobody won" << endl;
        }
    }
}
