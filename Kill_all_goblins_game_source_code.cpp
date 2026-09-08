#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

int main () {
  
    //ASCII art from https://patorjk.com/
     cout <<   "  .S    S.    .S  S.      S.             .S_SSSs    S.      S.              sSSSSs    sSSs_sSSs     .S_SSSs    S.       .S   .S_sSSs      sSSs " << endl;
     cout <<   ".SS    SS.  .SS  SS.     SS.           .SS~SSSSS   SS.     SS.            d%%%%SP   d%%SP~YS%%b   .SS~SSSSS   SS.     .SS  .SS~YS%%b    d%%SP  " << endl;
     cout <<   "S%S    S&S  S%S  S%S     S%S           S%S   SSSS  S%S     S%S           d%S'      d%S'     `S%b  S%S   SSSS  S%S     S%S  S%S   `S%b  d%S'    " << endl;
     cout <<   "S%S    d*S  S%S  S%S     S%S           S%S    S%S  S%S     S%S           S%S       S%S       S%S  S%S    S%S  S%S     S%S  S%S    S%S  S%|     " << endl;
     cout <<   "S&S   .S*S  S&S  S&S     S&S           S%S SSSS%S  S&S     S&S           S&S       S&S       S&S  S%S SSSS%P  S&S     S&S  S%S    S&S  S&S     " << endl;
     cout <<   "S&S_sdSSS   S&S  S&S     S&S           S&S  SSS%S  S&S     S&S           S&S       S&S       S&S  S&S  SSSY   S&S     S&S  S&S    S&S  Y&Ss    " << endl;
     cout <<   "S&S~YSSY%b  S&S  S&S     S&S           S&S    S&S  S&S     S&S           S&S       S&S       S&S  S&S    S&S  S&S     S&S  S&S    S&S  `S&&S   " << endl;
     cout <<   "S&S    `S%  S&S  S&S     S&S           S&S    S&S  S&S     S&S           S&S sSSs  S&S       S&S  S&S    S&S  S&S     S&S  S&S    S&S    `S*S  " << endl;
     cout <<   "S*S     S%  S*S  S*b     S*b           S*S    S&S  S*b     S*b           S*b `S%%  S*b       d*S  S*S    S&S  S*b     S*S  S*S    S*S     l*S  " << endl;
     cout <<   "S*S     S&  S*S  S*S.    S*S.          S*S    S*S  S*S.    S*S.          S*S   S%  S*S.     .S*S  S*S    S*S  S*S.    S*S  S*S    S*S    .S*P  " << endl;
     cout <<   "S*S     S&  S*S   SSSbs   SSSbs        S*S    S*S   SSSbs   SSSbs         SS_sSSS   SSSbs_sdSSS   S*S SSSSP    SSSbs  S*S  S*S    S*S  sSS*S   " << endl;
     cout <<   "S*S     SS  S*S    YSSP    YSSP        SSS    S*S    YSSP    YSSP          Y~YSSY    YSSP~YSSY    S*S  SSY      YSSP  S*S  S*S    SSS  YSS'    " << endl;
     cout <<   "SP          SP                                SP                                                  SP                  SP   SP                  " << endl;
     cout <<   "Y           Y                                 Y                                                   Y                   Y    Y                   " << endl;
     cout <<   "-- A game by Thane Marsh --"                                                                                                                     << endl;



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
        "(3)ITEM(UNDER CONSTRUCTION DO NOT USE)",
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
   
    while(goblin_health >= 1 && player_health >= 1) {
         cout << "OPTIONS:" << endl;
        int size = sizeof(BATTLE_OPTIONS_1) / sizeof(BATTLE_OPTIONS_1[0]);
        for (int i = 0; i < size; i++) {
            if (Nintendos_Lawyers == true) {
                cout << BATTLE_OPTIONS_SECRET[i] << " ";
            }
            else if(Nintendos_Lawyers == false) {
                cout << BATTLE_OPTIONS_1[i] << " ";
            }
        };

        cin >> opt;

        if(opt == "1") {
            resp = "ATTK";
            act = "1";
        }
        else if(opt == "2") {
            resp = "DEF";
            act = "2";
        }
        else if(opt == "3") {
            resp = "ITEM";
            act = "3";
        }
        else if(opt == "4") {
            resp = "Lawsuit from Nintendo";
            act = "4";
        };

        cout << resp << endl;

        //cin >> act;


        //string goblin {
            if(act == "1") {
                goblin_health -= 10;
                cout << "You attacked the goblin for 10 damage, stunning him and skipping his turn!" << endl;
            }
            else if(act == "2") {
                    cout << "The goblin atatcks, but you block it's attack with your shield, taking no damage!" << endl;
            }
            else if(act == "3") {    
                cout << "I told you this doesn't work right now, but you didnt listen, did you?"<< endl;
                player_health -= 100;
                cout << "You Died(curiosity killed the cat and all that)"<< endl;
            }
            else if(act == "4") {
                cout << "You took the goblin to court, suing it for infringing upon the company's intellectual property." << endl;
                cout << "The goblin's punishment..." << endl;
                cout << "IS DEATH!!!" << endl;
                cout << "FINISH HIM!!!" << endl << endl;
                cin >> opt;
                if(opt == "1") {
                    goblin_health -= 70;
                    cout << "F A T A L I T Y" << endl;
                }

           }
        //};
        cout << "The goblin has " << goblin_health << " health remaining!" << endl;
        cout << "You have " << player_health << " health remaining" << endl;
        cout << "It's your turn now, what will you do?!" << endl;
    };

    if (player_health <= 0) {
        cout << "You died, loser." << endl;
    }

    if (goblin_health <= 0) {
        cout << "Congrats, you beat the game!" << endl;
        cout << "Thanks for QA testing my shitty little text rpg for free!" << endl;
        cout << "More updates to come in the future! Stay tuned." << endl;
    }


};