#include <iomanip>
#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;

/*
 **************************************************************************************************
 *  Nathan Redmond
 *  Last Modified: 3 December 2019
 *
 *  Game is partially working. I only play beting on the thirds. Firsts 12, second 12, third 12.
 **************************************************************************************************
 */

void printMenu(){
cout << "********************************" << endl;
cout << "*******                 ********" << endl;
cout << "*****                      *****" << endl;
cout << "***    Welcome               ***" << endl;
cout << "**                            **" << endl;
cout << "**     to       <> <3 {> o8-  **" << endl;
cout << "**                            **" << endl;
cout << "***    Roulette              ***" << endl;
cout << "*****                      *****" << endl;
cout << "*******                  *******" << endl;
cout << "********************************" << endl << endl;
}

int main(){
    char play;
    bool playing = true;
    printMenu();

    cout << "Would you like to play?" << endl;
    cout << "Any button to continue," << endl;
    cout << "Q to quit" << endl;
    cin >> play;
    if( play == 'Q' || play == 'q' )
    {
        return 0;
    }

    double bank = 100;
    double bet = 0;
    int choose = 0;
    while( playing ){
        while( true ){
            system("cls");
            cout << "Bank: $" << bank << endl << endl;
            cout << "How much would you like to bet? ";
            cin >> bet;
            if( bet > 0 && bet <= bank)
                break;
        }
        while( true ){
            cout << "Bank: $" << bank << endl << endl;
            cout << "1) bet first 12" << endl;
            cout << "2) bet second 12" << endl;
            cout << "3) bet third 12" << endl;
            cin >> choose;
            if( choose == 1 || choose == 2 || choose == 3 )
                break;
        }
        srand (time(NULL));
        int random = rand()%37;
        system("cls");
        cout << "Bank: " << bank << endl << endl;
        if( random == 0 ){
            cout << "The roll was: " << random << " GREEN" << endl;
        }
        else if( random == 1 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 2 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 3 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 4 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 5 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 6 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 7 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 8 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 9 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 10 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 11 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 12 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 13 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 14 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 15 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 16 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 17 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 18 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 19 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 20 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 21 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 22 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 23 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 24 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 25 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 26 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 27 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 28 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 29 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 30 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 31 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 32 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 33 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 34 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 35 ){
            cout << "The roll was: " << random << " BLACK" << endl;
        }
        else if( random == 36 ){
            cout << "The roll was: " << random << " RED" << endl;
        }
        else if( random == 37 ){
            cout << "The roll was: 00 GREEN" << endl;
        }

        if( choose == 1 && random < 13){
            cout << "YOU WON! $" << bet*2 << endl << endl;
            bank = bank + bet*2;
            cout << "Would you like to roll again?" << endl;
            cout << "Any button to continue," << endl;
            cout << "Q to quit" << endl;
            cin >> play;
            if( play == 'Q' || play == 'q' )
            {
                return 0;
            }
        }
        else if( choose == 2 && random > 12 && random < 25){
            cout << "YOU WON! $" << bet*2 << endl << endl;
            bank = bank + bet*2;
            cout << "Would you like to roll again?" << endl;
            cout << "Any button to continue," << endl;
            cout << "Q to quit" << endl;
            cin >> play;
            if( play == 'Q' || play == 'q' )
            {
                return 0;
            }
        }
        else if( choose == 3 && random > 24){
            cout << "YOU WON! $" << bet*2 << endl << endl;
            bank = bank + bet*2;
            cout << "Would you like to roll again?" << endl;
            cout << "Any button to continue," << endl;
            cout << "Q to quit" << endl;
            cin >> play;
            if( play == 'Q' || play == 'q' )
            {
                return 0;
            }
        }
        else{
            cout << "YOU LOSE..." << endl << endl;
            bank = bank - bet;
            if( bank <= 0 ){
                cout << "Game over no more money... :( " << endl;
                return 0;
            }
            else{
                cout << "Would you like to roll again?" << endl;
                cout << "Any button to continue," << endl;
                cout << "Q to quit" << endl;
                cin >> play;
                if( play == 'Q' || play == 'q' )
                {
                    return 0;
                }
            }
        }


    }

}
