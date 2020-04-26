#include <iostream>
#include <windows.h>
using namespace std;

char square1[10] = {'0','1','2','3','4','5','6','7','8','9'};
char square2[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int checkwin();
void board();

int main()
{
    int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square1[1] == '1')
{
    square1[1] = mark;
    square2[1] = mark;
}
        else if (choice == 2 && square1[2] == '2')
{
    square1[2] = mark;
    square2[2] = mark;
}
        else if (choice == 3 && square1[3] == '3')
{
    square1[3] = mark;
    square2[3] = mark;
}
        else if (choice == 4 && square1[4] == '4')
{
    square1[4] = mark;
    square2[4] = mark;
}
        else if (choice == 5 && square1[5] == '5')
{
    square1[5] = mark;
    square2[5] = mark;
}
        else if (choice == 6 && square1[6] == '6')
{
    square1[6] = mark;
    square2[6] = mark;
}
        else if (choice == 7 && square1[7] == '7')
{
    square1[7] = mark;
    square2[7] = mark;
}
        else if (choice == 8 && square1[8] == '8')
{
    square1[8] = mark;
    square2[8] = mark;
}
        else if (choice == 9 && square1[9] == '9')
{
    square1[9] = mark;
    square2[9] = mark;
}
        else
        {
            cout<<"Invalid move ";

            player--;
            Sleep(2000);
        }
        i=checkwin();

        player++;
    }
    while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 FOR GAME IS OVER WITH RESULT
    -1 FOR GAME IS IN PROGRESS
    O GAME IS OVER AND NO RESULT
**********************************************/

int checkwin()
{
    if (square1[1] == square1[2] && square1[2] == square1[3])

        return 1;
    else if (square1[4] == square1[5] && square1[5] == square1[6])

        return 1;
    else if (square1[7] == square1[8] && square1[8] == square1[9])

        return 1;
    else if (square1[1] == square1[4] && square1[4] == square1[7])

        return 1;
    else if (square1[2] == square1[5] && square1[5] == square1[8])

        return 1;
    else if (square1[3] == square1[6] && square1[6] == square1[9])

        return 1;
    else if (square1[1] == square1[5] && square1[5] == square1[9])

        return 1;
    else if (square1[3] == square1[5] && square1[5] == square1[7])

        return 1;
    else if (square1[1] != '1' && square1[2] != '2' && square1[3] != '3'
             && square1[4] != '4' && square1[5] != '5' && square1[6] != '6'
             && square1[7] != '7' && square1[8] != '8' && square1[9] != '9')
        return 0;
    else
        return -1;
}


/*******************************************************************
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "\t     |     |     " << endl;
    cout << "\t  " << square2[1] << "  |  " << square2[2] << "  |  " << square2[3] << endl;

    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;

    cout << "\t  " << square2[4] << "  |  " << square2[5] << "  |  " << square2[6] << endl;

    cout << "\t_____|_____|_____" << endl;
    cout << "\t     |     |     " << endl;

    cout << "\t  " << square2[7] << "  |  " << square2[8] << "  |  " << square2[9] << endl;

    cout << "\t     |     |     " << endl << endl;
}

/*******************************************************************
                END OF PROJECT
********************************************************************/
