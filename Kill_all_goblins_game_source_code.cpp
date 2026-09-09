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
        "(1)healing_potion",
        "(2)fireball_scroll",
        "(3)smoke_bomb",
        "(4)glock"
    };

    string BATTLE_OPTIONS_1[3] = {
        "(1)ATTACK",
        "(2)DEFEND",
        "(3)ITEM"
    };

    string BATTLE_OPTIONS_SECRET[4] = {
        "(1)ATTACK",
        "(2)DEFEND",
        "(3)ITEM",
        "(4)Lawsuit from Nintendo"
    };
   
    //the code that gets your name.
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
    string A_act;
    string B_act;
    string C_act;
    string D_act;
    
    int num_of_turns;

    //healthbars
    int player_health = 100;
    int goblin_health = 70;

    cout << "A goblin appears! what will you do?" << endl;
   
    //int uses_1 = 0;
    //int uses_2 = 0;
    //int uses_3 = 0;
    //int uses_4 = 0;
    int quantity_1 = 2;
    int quantity_2 = 1;
    int quantity_3 = 1;
    int quantity_4 = 1;

    //a simple while loop that keeps the battle going as long as both of you have 1 or more health.
    while(goblin_health >= 1 && player_health >= 1) {
       //cout << act << endl;


       //lists the battle options
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

        //detects what you chose.
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


        string confirm;
        
        
        //handles how much of each item there is, as well as making sure to decrease it with each use. does not control what happens if # of uses reahces 0.
        //int quantity;
            //potion
            //if (opt == "1" && act == "3") {
                    //quantity_1 -= uses_1;
                //};
            //fireball
            //if (opt == "2" && act == "3") {
                    //quantity_2 -= uses_2;
                //};
            //smoke
            //if (opt == "3" && act == "3") {
                    //quantity_3 -= uses_3;
                //};
            //gun
            //if (opt == "4" && act == "3") {
                    //quantity_4 -= uses_4;
                //};

        

        //responses for your actions.
        //attack
        //cout << act << endl;
        if(act == "1") {
            goblin_health -= 10;
            cout << "since you feel your above dulling your blade on a lowly goblin, You whacked him on the head with the butt of your sword for 10 damage, stunning him and skipping his turn!" << endl;
        }
        //defend
        else if(act == "2") {
                cout << "The goblin atatcks, but you block it's attack with your shield, taking no damage!" << endl;
        }
        //inventory
        else if(act == "3") {    
            cout << "-- INVENTORY : --" << endl;
                 int size2 = sizeof(inventory) / sizeof(inventory[0]);
                    for (int i = 0; i < size2; i++) {
                        cout << inventory[i] << " ";
                    };
            cin >> opt;
                if(opt == "1") {
                    resp = "Healing potion, restores 25 health.", 
                    cout << "quantity = " << quantity_1 << endl;
                    cout << "You have " << player_health << " health" <<endl;
                    cout << "Do you want to use a health potion?" << endl;
                    cout << "(Y)Yes" "(N)No" << endl;
                    cin >> confirm;
                        if(confirm == "Y" && quantity_1 >= 1) {
                                    //potion
                                        cout << "You use a health potion, restoring 25 health!" << endl;
                                        player_health += 25;
                                        cout << "you now have " << player_health << " health!" << endl;
                                        //uses_1 += 1;
                                        quantity_1 -= 1;
                        }
                        else if(confirm == "N" || quantity_1 == 0) {
                            act = "3";
                        }
                }
                else if(opt == "2") {
                    resp = "Spell scroll of Fireball, summons a concentrated orb of magical fire to seek out and incinerate your target"; 
                    cout << "quantity = " << quantity_2 << endl;
                    cout << "Do you want to use a Scroll of Fireball?" << endl;
                    cout << "(Y)Yes" "(N)No" << endl;
                    cin >> confirm;
                        //if(confirm == "Y") {uses_2 += 1;}
                        if(confirm == "Y" && quantity_2 >= 1) {
                                    //fireball
                                    cout << "You recite a needlessly long - but nonetheless very cool sounding - ancient incantation as magical power concentrates into an orb before your eyes until it turns into a blazing, red hot, ball of pure fire" << endl;
                                    cout << "Type L to launch : ";
                                    string launch = "L";
                                    cin >> launch;
                                    cout << "You do some fancy hand motions and send the orb hurling towards the goblin, and hitting him for 35 health points!" << endl;
                                    cout << "You've done it now! the goblin harnesses his rage and retatliates at you, dealing 25 damage!";
                                    cout << "It seems the goblin took some extra damage while pushing through the pain, he got hit 5 damage!";
                                    goblin_health -= 40;
                                    //uses_2 += 1;
                                    quantity_2 -= 1;
                        }
                        else if(confirm == "N" || quantity_2 == 0) {
                            act = "3";
                        }
                }
                else if(opt == "3") {
                    resp = "a rudimentary, but still very effective, seemingly scrapped-together smoke bomb. Creates a temporary smoke cloud that blinds enemies."; 
                    cout << "quantity = " << quantity_3 << endl;
                    cout << "Do you want to use a Smoke bomb?" << endl;
                    cout << "(Y)Yes" "(N)No" << endl;
                    cin >> confirm;
                        if(confirm == "Y" && quantity_3 >= 1) {
                                    //smoke
                                    cout << "You throw a smoke bomb out!" << endl;
                                    cout << "The goblin is blinded by the smoke and cant see or attack you" << endl;
                                    //uses_3 += 1;
                                    quantity_3 -= 1;
                        }
                        else if(confirm == "N" || quantity_3 == 0) {
                            act = "3";
                        }
                }
                else if(opt == "4") {
                    resp = "A glock 19. you have one bullet for it. kills whatever it hits instantly.";
                    cout << "quantity = " << quantity_4 << endl;
                    cout << "Do you want to use le glock?" << endl;
                    cout << "(Y)Yes" "(N)No" << endl;
                    cin >> confirm;
                        if(confirm == "Y" && quantity_4 >= 1) {
                                    //gun
                                    cout << "You used a Glock and shot the goblin! he died instantly! This is why gun control laws should exist!" << endl;
                                    goblin_health -= 70;
                                    //uses_4 += 1;
                                    quantity_4 -= 1;
                        }
                        else if(confirm == "N" || quantity_4 == 0) {
                            act = "3";
                        }
                }
            }
        
        //lawsuit
        else if(act == "4") {
            cout << "You took the goblin to court, suing it for infringing upon the company's intellectual property." << endl;
            cout << "The goblin's punishment..." << endl;
            cout << "IS DEATH!!!" << endl;
            cout << "FINISH HIM!!!" << endl << endl;
            cin >> opt;
            if(opt == "1") {
                goblin_health -= 70;
                cout << "F A T A L I T Y" << endl;
            };
            /*else if(opt == "2" || opt == "3" || opt == "4") {
              cout << "you cannot perform that action at this time"
            }*/
        }





    cout << "The goblin has " << goblin_health << " health remaining!" << endl;
    cout << "You have " << player_health << " health remaining" << endl;
    cout << "It's your turn now, what will you do?!" << endl;
    num_of_turns += 1;


    if (player_health <= 0) {
        cout << "You died, loser." << endl;
    }

    if (goblin_health <= 0) {
        cout << "Goblin has been slain" << endl;
        cout << "Congrats, you beat the game!" << endl;
        cout << "Thanks for QA testing my shitty little text rpg for free!" << endl;
        cout << "More updates to come in the future! Stay tuned." << endl;
        cout << "Disclaimer: many goblins were harmed in the making of this." << endl;
    }

}
};