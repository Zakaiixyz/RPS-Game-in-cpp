//
// Created by zakaiixyz on 12/2/25.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

char player() {
    char p;
    cin >> p;
    while ((p != 'R' && p != 'r') && (p != 'P' && p != 'p') && (p != 'S' && p != 's')) {
        cout << "Invalid input , Choose again : ";
        cin >> p;
    }
    return p;
}

char computer() {
    int r = rand() % 3 + 1;
    if (r == 1) return 'r';
    else if (r == 2) return 'p';
    else return 's';
}

int main(void) {
    srand(time(NULL));

    string name;

    cout << "====== Welcome to Rock , Paper , Scissors game ======\n";
    cout << "Enter Your Name : ";

    cin >> name;
    
    cout << "Please choose Rock or Paper or Scissors\n";
    cout << "(note : 'R' or 'r' for Rock , 'P' or 'p' for Paper , 'S' or 's' for Scissors\n";
    cout << "Enter your choice : ";

    char p = player();
    char c = computer();

    cout << name <<"(" << p << ")" << " vs " << "Computer (" << c << ") :" << endl;

    if (((p == 'P' || p == 'p') && c == 'p') ||
        ((p == 'S' || p == 's') && c == 's') ||
        ((p == 'R' || p == 'r') && c == 'r')) {
        cout << "DRAW!" << endl;
        }
    else if ((p == 'P' || p == 'p') && c == 'r') {
        cout << name << " WINS!" << endl;
    }
    else if ((p == 'R' || p == 'r') && c == 'p') {
        cout << "THE COMPUTER WINS!" << endl;
    }
    else if ((p == 'S' || p == 's') && c == 'r') {
        cout << "THE COMPUTER WINS!" << endl;
    }
    else if ((p == 'R' || p == 'r') && c == 's') {
        cout << name << " WINS!" << endl;
    }
    else if ((p == 'P' || p == 'p') && c == 's') {
        cout << "THE COMPUTER WINS!" << endl;
    }
    else if ((p == 'S' || p == 's') && c == 'p') {
        cout << name << " WINS!" << endl;
    }

    cout << "THANK YOU FOR PLAYING!!";
}