/*
    main.cpp
    Soda Machine

    Created by Kyle Lovely on 8/14/20.
    Copyright © 2020 Kyle Lovely. All rights reserved.

    CODING CHALLENGES

    Write a program that presents the user w/ a choice of your 5 favorite beverages (Coke, Water, Sprite, ... , Whatever).
    Then allow the user to choose a beverage by entering a number 1-5.
    Output which beverage they chose.

    If the user enters a choice other than 1-5 then it will output
    "Error. choice was not valid, here is your money back."
 
    Update - My good friend @KevinWilliams68 on GitHub challenged me to refactor this as a switch statement instead of an if else ladder. I then went ahead and made a few simple functions that execute within main.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// DEFINITIONS

string CustomerSelection {};

const string Drink1 {"Pepsi"};
const string Drink2 {"7-UP"};
const string Drink3 {"Root Beer"};
const string Drink4 {"Iced Tea"};
const string Drink5 {"Lemonade"};

const string Stars {"**************************************"};
const string Greeting {"Welcome to the Super Beverage Machine!"};
const string BevSelection {"We have the following beverages on tap today:"};

// FUNCTIONS

void SuccessfulPurchase() {
    
    cout << "One " << CustomerSelection << " coming right up!" << endl;
};

void SystemGreeting() {
    
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
}

void InputLogic() {
    
    char Selection {};
    cin >> Selection;
    cout << endl;
    
    switch (Selection) {
        case '1':
            CustomerSelection = Drink1;
            break;
        case '2':
            CustomerSelection = Drink2;
            break;
        case '3':
            CustomerSelection = Drink3;
            break;
        case '4':
            CustomerSelection = Drink4;
            break;
        case '5':
            CustomerSelection = Drink5;
            break;
            
        default:
            cout << "Error. choice was not valid, here is your money back." << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    SystemGreeting();
    
    InputLogic();
    
    SuccessfulPurchase();

    return 0;
}
