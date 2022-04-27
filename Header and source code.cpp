// Matthew Nispel 04-24-2022//
// calls the header file//
#include "Header.h"



int main()
{
    // delcanres a var for user input//
    int uin;
    // prints out the title of the game//
    cout << "Welcome to Winter Storm Survial" << endl;
    // asks the user to pick a number//
    cout << "Pick 1 to play or antother to quit" << endl;
    // calls the user input//
    cin >> uin;
    int i = 0;
    // has a do while loop to repeat the game when the program ends (meant to help you win)//
    do {
        //calls the function path1//
        path1(uin);
        i++;
    } while (i < 2);
}
