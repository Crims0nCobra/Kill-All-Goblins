#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

int main () {
   /* 
    //converts spaces to underscores so it doesnt break the program whenever you type a space.
    find(&32) {
        replace(&lowbar);
    }
    cout << "type 'space space'" << endl;
    
    string response;
    cin >> response;
    cout << response << endl;

     if (cin == "inventory") {
        cout << inventory
    };
*/


    //your inventory, type "inventory" at any time to see what items you have.
    string inventory[4] = {
        "sword",
        "shield",
        "healing_potion",
        "fireball_scroll"
    };

    string BATTLE_OPTIONS_1[3] = {
        "(1)ATTACK",
        "(2)DEFEND",
        "(3)ITEM(BROKEN RIGHT NOW DO NOT USE)"
    };

    string BATTLE_OPTIONS_SECRET[4] = {
        "(1)ATTACK",
        "(2)DEFEND",
        "(3)ITEM(UNDER CONSTRUCTION DO NOT USE)"
        "(4)Lawsuit from Nintendo"
    };

    string greeting = "Enter your name, Hero:";
    cout << greeting << endl;

    string name;
    cin >> name;

    cout << "Welcome, " << name << "." << endl;

    bool Nintendos_Lawyers;

    if(name == "Nintendo" || name == "Lawyer") {
        Nintendos_Lawyers = true;
    };

    string ATTK;
    string DEF;
    string ITEM;

    string opt;
    string resp;
    string act;

    int player_health = 100;
    int goblin_health = 70;

    cout << "A goblin appears! what will you do?" << endl;
    cout << "OPTIONS:" << endl;
    int size = sizeof(BATTLE_OPTIONS_1) / sizeof(BATTLE_OPTIONS_1[0]);
    for (int i = 0; i < size; i++) {
        if (Nintendos_Lawyers == false) {
            cout << BATTLE_OPTIONS_SECRET[i] << " ";
        }
        else if(Nintendos_Lawyers == false) {
            cout << BATTLE_OPTIONS_1[i] << " ";
        }
    };

    while(goblin_health =>1 && player_health =>1) {

        cin >> opt;

        if(opt == "1") {
            resp = "ATTK";
            act = 1;
        }
        else if(opt == "2") {
            resp = "DEF";
            act = 2;
        }
        else if(opt == "3") {
            resp = "ITEM";
            act = 3;
        }
        else if(opt == "4") {
            resp = "Lawsuit from Nintendo";
            act = 4;
        };

        cout << resp << endl;

        cin >> act;


        string goblin {
            if(act == 1) {
                goblin_health -= 10;
                cout << "You attacked the goblin for 10 damage, stunning him and skipping his turn!" << endl;
            }
            else if(act == 2) {
                    cout << "The goblin atatcks, but you block it's attack with your shield, taking no damage!" << endl;
            }
            else if(act == 3) {    
                cout << "I told you this doesn't work right now, but you didnt listen, did you?"
                player_health -= 100;
                cout << "You Died(curiosity killed the cat and all that)"
            }
            else if(act == 4) {
                cout << "You took the goblin to court, suing it for infringing upon the company's intellectual property." << endl;
                cout << "The goblin's punishment..." << endl;
                cout << "IS DEATH!!!" << endl;
                cout << "FINISH HIM!!!" << endl << endl;
                cin >> opt;
                if(opt == "1") {
                    goblin_health -= 70;
                    cout << "F A T A L I T Y"
                }

            }
        };
    }

    if (player_health <= 0) {
        cout << "You died, loser." << endl;
    }

    if (goblin_health <= 0) {
        cout << "Congrats, you beat the game!" << endl;
        cout << "Thanks for QA testing my shitty little text rpg for free!" << endl;
        cout << "More updates to come in the future! Stay tuned." << endl;
    }


};