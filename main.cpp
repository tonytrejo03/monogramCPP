//
//  main.cpp
//  Assignment4.cpp
//
//  Created by Anthony Trejo on 4/5/23.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    string initials;
    cout << "        Welcome to the Monogram Layout Program! ! !      \n";
    cout << "What are your initials? ";
    cin >> initials;
    cout << "Thank You!\n";
    cout << "Your monogram will be \n";
    initials[1] = toupper(initials[1]);
    initials[2] = toupper(initials[2]);
    cout << initials[1];
    cout << initials[0];
    cout << initials[2];
    cout << "\n";
    return 0;
}
