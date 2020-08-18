//
//    main.cpp
//    Soda Machine
//
//    Created by Kyle Lovely on 8/14/20.
//    Copyright © 2020 Kyle Lovely. All rights reserved.
//
//    CODING CHALLENGES
//
//    Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
//    Then allow the user to choose a beverage by entering a number 1-5.
//    Output which beverage they chose.
//
//    If the user enters a choice other than 1-5 then it will output
//    "Error. choice was not valid, here is your money back."

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // DEFINITIONS
    
    const string Stars {"**************************************"};
    const string Greeting {"Welcome to the Super Beverage Machine!"};
    const string BevSelection {"We have the following beverages on tap today:"};
    const string Drink1 {"Pepsi"};
    const string Drink2 {"7-UP"};
    const string Drink3 {"Root Beer"};
    const string Drink4 {"Iced Tea"};
    const string Drink5 {"Lemonade"};
    
    // GREETING
    
    cout << Stars << endl;
    cout << Greeting << endl;
    cout << Stars << endl;
    cout << endl;
    
    cout << BevSelection << endl;
    cout << endl;
    
    cout << "1. " << Drink1 << endl;
    cout << "2. " << Drink2 << endl;
    cout << "3. " << Drink3 << endl;
    cout << "4. " << Drink4 << endl;
    cout << "5. " << Drink5 << endl;
    cout << endl;
    

    cout << "Which one would you like?" << endl;
    cout << "(Enter a number 1-5) ";
    
    // MAKE SELECTION
    
    char Selection {};
    
    cin >> Selection;
    
    cout << endl;

    // LOGIC FOR INPUT
    
    if (Selection == '1') {
        cout << "One " << Drink1 << " coming right up!" << endl;
    }
    
    else if (Selection == '2') {
        cout << "One " << Drink2 << " coming right up!" << endl;
    }
    
    else if (Selection == '3') {
        cout << "One " << Drink3 << " coming right up!" << endl;
    }
    
    else if (Selection == '4') {
        cout << "One " << Drink4 << " coming right up!" << endl;
    }
        
    else if (Selection == '5') {
        cout << "One " << Drink5 << " coming right up!" << endl;
    }
    
    // INVALID SELECTION ERROR
    
    else
    
        cout << "Error. choice was not valid, here is your money back." << endl;
    
    // END
    
    cout << endl;
    
    return 0;
}
