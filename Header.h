#pragma once
#include <iostream>
#include <string>

// calls the namespace used//
using namespace std;
// string for path4 thanks the player for playing and returns the name of user//
string path4(string s) {
    cout << "Thank you for playing " << s << " Your fire got blow out by the wind,you have frooze to death" << endl;
    return s;
}
// function that asks for the name and saves the variable then goes to path4//
void path3() {
    cout << "Please tell me your name" << endl;
    string s;
    string* ptr = &s;
    cin >> s;
    path4(s);
}
//function to find out what choice they made and print the  you win or you lose//
void path2(int j) {
    cout << "pick 1 to look for the cabin or 2 to just start a fire" << endl;
    cin >> j;
    if (j == 1) {
        cout << "You found the cabin and made it to the moring, You win!!!" << endl;
    }
    else if (j == 2) {
        path3();

    }
    else {
        cout << " You tried to break the matrix,you lose!!!!" << endl;
    }
}
// funtion that prints you died
void choice1(int i) {
    cout << " You died looking for the road in the blizard " << endl;
}
//function that ask the user to play, make a choice and go to the correct function. //
void path1(int i) {
    if (i == 1) {
        cout << " You chose to play" << endl;
        // prints out the scenery
        cout << " There is a Blizard and you need to get warm" << endl;
        cout << "pick 1 for collecting wood or 2 for looking for the road" << endl;
        cin >> i;
        if (i == 1) {
            path2(i);
        }
        else if (i == 2) {
            choice1(i);
        }
    }
    else {
        cout << "You quit Winter Storm Survial, Have a wonder and warm day!!" << endl;
    }
}