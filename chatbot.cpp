#include <iostream>
#include <string>

using namespace std;

int main () {
    string greeting = "Hello! What is your name?";
    cout << greeting << endl;

    string name;
    cin >> name;

    cout << "Hello, " << name << "!" << endl;

    cout << "What's your birth year?" << endl;
    int birth_year;
    cin >> birth_year;

   //bad programming practice: hardcoded
    int current_year = 2026;
    cout << "Your age is:" << current_year - birth_year << endl;

    bool has_credit_card = 0;

    string answer;

    while (has_credit_card == 0) {
    cout << "Hey, " << name << ", just curious... but, do you have one of those credit card thingies?" << endl;
    cout << "Yes" << endl;
    cout << "No" << endl;

    std::cin >> answer;
    if (answer == "No") {
        cout << "Your lying. don't lie to me." << endl;
        has_credit_card = 0;
        
     }
    if (answer == "Yes") {
        cout << "That's so cool!" << endl;
        has_credit_card = 1;
     }
    }
    
    cout << "Oooh! I just had a cool idea!" << endl;
    cout << "Wanna hear it?" << endl;
    cout << "Yeah" << endl;
    cout << "Nah" << endl;
    
    bool dead = 0;
    cin >> answer;
    while (dead == 0) {
        if (answer == "Nah") {
            cout << "That's too bad." << endl;
            cout << "You dont get a choice, I'm telling you anyways." << endl;
            dead = 1;
         }
        if (answer == "Yeah") {
            cout << "Alright, here goes:" << endl;
            has_credit_card = 1;
            dead = 1;
        }
    }

     cout << "We'll exchange credit card info!" << endl;
     cout << "Genius, right?" << endl;
     cout << "Alright, you go first.";
     cout << " I dont wanna tell you mine and then have you running off." << endl;
     cout << "C'mon front first. Go." << endl;
     string credit_card_info_front;
     cin >> credit_card_info_front;

     cout << "Now the expiration date." << endl;
     string credit_card_info_exp_date;
     cin >> credit_card_info_exp_date;

     cout << "Now the back." << endl;
     string credit_card_info_back;
     cin >> credit_card_info_back;

     cout << "Oh shoot I lost my card, I'll go find it real quick." << endl;
     cout << "Please hold..." << endl;

}