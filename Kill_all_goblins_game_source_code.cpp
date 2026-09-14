#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <random>
#include <thread>
#include <chrono>

using namespace std;

int main () {
  
    //ASCII art from https://patorjk.com/
     cout <<   "\033[31m  .S    S.    .S  S.      S.   \033[34m         .S_SSSs    S.      S.            \033[32m  sSSSSs    sSSs_sSSs     .S_SSSs    S.       .S   .S_sSSs      sSSs  " << endl;
     cout <<   "\033[31m.SS    SS.  .SS  SS.     SS.   \033[34m        .SS~SSSSS   SS.     SS.           \033[32m d%%%%SP   d%%SP~YS%%b   .SS~SSSSS   SS.     .SS  .SS~YS%%b    d%%SP  " << endl;
     cout <<   "\033[31mS%S    S&S  S%S  S%S     S%S   \033[34m        S%S   SSSS  S%S     S%S           \033[32md%S'      d%S'     `S%b  S%S   SSSS  S%S     S%S  S%S   `S%b  d%S'    " << endl;
     cout <<   "\033[31mS%S    d*S  S%S  S%S     S%S   \033[34m        S%S    S%S  S%S     S%S           \033[32mS%S       S%S       S%S  S%S    S%S  S%S     S%S  S%S    S%S  S%|     " << endl;
     cout <<   "\033[31mS&S   .S*S  S&S  S&S     S&S   \033[34m        S%S SSSS%S  S&S     S&S           \033[32mS&S       S&S       S&S  S%S SSSS%P  S&S     S&S  S%S    S&S  S&S     " << endl;
     cout <<   "\033[31mS&S_sdSSS   S&S  S&S     S&S   \033[34m        S&S  SSS%S  S&S     S&S           \033[32mS&S       S&S       S&S  S&S  SSSY   S&S     S&S  S&S    S&S  Y&Ss    " << endl;
     cout <<   "\033[31mS&S~YSSY%b  S&S  S&S     S&S   \033[34m        S&S    S&S  S&S     S&S           \033[32mS&S       S&S       S&S  S&S    S&S  S&S     S&S  S&S    S&S  `S&&S   " << endl;
     cout <<   "\033[31mS&S    `S%  S&S  S&S     S&S   \033[34m        S&S    S&S  S&S     S&S           \033[32mS&S sSSs  S&S       S&S  S&S    S&S  S&S     S&S  S&S    S&S    `S*S  " << endl;
     cout <<   "\033[31mS*S     S%  S*S  S*b     S*b   \033[34m        S*S    S&S  S*b     S*b           \033[32mS*b `S%%  S*b       d*S  S*S    S&S  S*b     S*S  S*S    S*S     l*S  " << endl;
     cout <<   "\033[31mS*S     S&  S*S  S*S.    S*S.  \033[34m        S*S    S*S  S*S.    S*S.          \033[32mS*S   S%  S*S.     .S*S  S*S    S*S  S*S.    S*S  S*S    S*S    .S*P  " << endl;
     cout <<   "\033[31mS*S     S&  S*S   SSSbs   SSSbs\033[34m        S*S    S*S   SSSbs   SSSbs        \033[32m SS_sSSS   SSSbs_sdSSS   S*S SSSSP    SSSbs  S*S  S*S    S*S  sSS*S   " << endl;
     cout <<   "\033[31mS*S     SS  S*S    YSSP    YSSP\033[34m        SSS    S*S    YSSP    YSSP        \033[32m  Y~YSSY    YSSP~YSSY    S*S  SSY      YSSP  S*S  S*S    SSS  YSS'    " << endl;
     cout <<   "\033[31mSP          SP                 \033[34m               SP                         \033[32m                         SP                  SP   SP                  " << endl;
     cout <<   "\033[31mY           Y                  \033[34m               Y                          \033[32m                         Y                   Y    Y                   " << endl;
     this_thread::sleep_for(chrono::seconds(1));
     cout <<   "\033[0m-- A game by Thane Marsh --\n";
     this_thread::sleep_for(chrono::seconds(1));
    


    //your inventory, type "inventory" at any time to see what items you have.
    string inventory[6] = {
        "(\033[33m1\033[0m)healing_potion\n"
        "(\033[33m2\033[0m)fireball_scroll\n"
        "(\033[33m3\033[0m)smoke_bomb\n"
        "(\033[33m4\033[0m)glock\n"
        "(\033[33m5\033[0m)???\n"
        "(\033[33m6\033[0m)???\n"
        "\n"
    };

    string BATTLE_OPTIONS_1[5] = {
        "(\033[33m1\033[0m)ATTACK\n"
        "(\033[33m2\033[0m)DEFEND\n"
        "(\033[33m3\033[0m)ITEM\n"
        "(\033[33m4\033[0m)???LOCKED???\n"
        "(\033[33m5\033[0m)???LOCKED???\n"
        "\n"
    };

    string BATTLE_OPTIONS_SECRET[5] = {
        "(\033[33m1\033[0m)ATTACK\n"
        "(\033[33m2\033[0m)DEFEND\n"
        "(\033[33m3\033[0m)ITEM\n"
        "(\033[33m4\033[0m)???UNLOCKED???\n"
        "(\033[33m5\033[0m)???LOCKED???\n"
        "\n"
    };

    string BATTLE_OPTIONS_SECRET_2[5] = {
        "(\033[33m1\033[0m)ATTACK\n"
        "(\033[33m2\033[0m)DEFEND\n"
        "(\033[33m3\033[0m)ITEM\n"
        "(\033[33m4\033[0m)???UNLOCKED???\n"
        "(\033[33m5\033[0m)???UNLOCKED???\n"
        "\n"
    };

    string BATTLE_OPTIONS_SECRET_3[5] = {
        "(\033[33m1\033[0m)ATTACK\n"
        "(\033[33m2\033[0m)DEFEND\n"
        "(\033[33m3\033[0m)ITEM\n"
        "(\033[33m4\033[0m)???LOCKED???\n"
        "(\033[33m5\033[0m)???LOCKED???\n"
        "\n"
    };
   
    //the code that gets your name.
    string greeting = "Enter your name, Hero : \033[34m";
    cout << greeting << endl;
    this_thread::sleep_for(chrono::seconds(1));

    string name;
    cin >> name;

    this_thread::sleep_for(chrono::seconds(1));
    cout << "\033[0mWelcome, \033[34m" << name << "\033[0m." << endl;
    this_thread::sleep_for(chrono::seconds(2));

    bool Nintendos_Lawyers = false;
    bool Has_Crypto = false;
    bool Pump_n_dump = false;
    bool goblin_blind = false;

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
    
    int num_of_turns = 0;
    int crypto = 0;
    int crypto_amnt = 0;
    int gob_dmg_dealt = 0;
    int player_dmg_dealt = 0;

    //healthbars
    int player_health = 100;
    int goblin_health = 70;

    //bank accounts
    int player_bank_acc = 1;
    int goblin_bank_acc = 1001;
    crypto = 10;

    cout << "A goblin appears! what will you do?" << endl;
    this_thread::sleep_for(chrono::seconds(1));
   
    //int uses_1 = 0;
    //int uses_2 = 0;
    //int uses_3 = 0;
    //int uses_4 = 0;
    int quantity_1 = 2;
    int quantity_2 = 1;
    int quantity_3 = 1;
    int quantity_4 = 1;

    //gob_dmg_dealt = 0;
    //player_dmg_dealt = 0;

    //a simple while loop that keeps the battle going as long as both of you have 1 or more health.
    //---- LOOP START ----
    while(goblin_health >= 1 && player_health >= 1) {
        gob_dmg_dealt = 0;
        player_dmg_dealt = 0;


       //lists the battle options, tbh I stole this code off the internet, threw it inside some if statements, copy pasted it a few times, and tweaked it slightly. I have no idea how it actually works lol, it just does.
        if (Nintendos_Lawyers == true && Has_Crypto == false) {
            cout << "-- OPTIONS: --" << endl;
            int size = sizeof(BATTLE_OPTIONS_SECRET) / sizeof(BATTLE_OPTIONS_SECRET[0]);
            for (int i = 0; i < size; i++) cout << BATTLE_OPTIONS_SECRET[i] << " ";
            }
        else if (Nintendos_Lawyers == true && Has_Crypto == true) {    
            cout << "-- OPTIONS: --" << endl;
            int size = sizeof(BATTLE_OPTIONS_SECRET_2) / sizeof(BATTLE_OPTIONS_SECRET_2[0]);
            for (int i = 0; i < size; i++) cout << BATTLE_OPTIONS_SECRET_2[i] << " ";
            }
        else if (Nintendos_Lawyers == false && Has_Crypto == true) {
            cout << "-- OPTIONS: --" << endl;
            int size = sizeof(BATTLE_OPTIONS_SECRET_3) / sizeof(BATTLE_OPTIONS_SECRET_3[0]);
            for (int i = 0; i < size; i++) cout << BATTLE_OPTIONS_SECRET_3[i] << " ";
            }
        else {
            cout << "-- OPTIONS: --" << endl;
            int size = sizeof(BATTLE_OPTIONS_1) / sizeof(BATTLE_OPTIONS_1[0]);
            for (int i = 0; i < size; i++) cout << BATTLE_OPTIONS_1[i] << " ";
            }

        //detects what you chose.
        cin >> opt;

        //needlessly overcomplicated system.
        if(opt == "1") {
            resp = "\nATTK\n";
            this_thread::sleep_for(chrono::seconds(1));
            act = "1";
        }
        else if(opt == "2") {
            resp = "\nDEF\n";
            this_thread::sleep_for(chrono::seconds(1));
            act = "2";
        }
        else if(opt == "3") {
            resp = "\nITEM\n";
            this_thread::sleep_for(chrono::seconds(1));
            act = "3";
        }
        else if(opt == "4" && Nintendos_Lawyers == true) {
            resp = "\nLawsuit from Nintendo\n";
            this_thread::sleep_for(chrono::seconds(1));
            act = "4";
        }
        else if(opt == "4" && Nintendos_Lawyers == false) {
            resp = "\n\\\\LOCKED. FIND THE KEY.\\\\ \n";
            this_thread::sleep_for(chrono::seconds(1));
            act = "4";
        }
        else if(opt == "5" && Has_Crypto == true) {
            resp = "\nPlay it up\n";
            this_thread::sleep_for(chrono::seconds(1));
            act = "5";
        }
        else if(opt == "4" && Has_Crypto == false) {
            resp = "\n\\\\LOCKED. FIND THE KEY.\\\\ \n";
            cout << "HINT : https://en-americas-support.nintendo.com/app/answers/detail/a_id/50035/~/intellectual-property-policy\n";
            this_thread::sleep_for(chrono::seconds(1));
            act = "5";
        };
        cout << resp << endl;


        string confirm;
        

        //responses for your actions.
        //attack
        //cout << act << endl;
        if(act == "1") {
            goblin_health -= 10;
            cout << "since you feel your above dulling your blade on a lowly goblin, You whacked him on the head with the butt of your sword for 10 damage, stunning him and skipping his turn!" << endl;
            this_thread::sleep_for(chrono::seconds(1));
            cin.ignore();
            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
            cin.get();

        }
        //defend
        else if(act == "2") {
            cout << "The goblin atatcks, but you block it's attack with your shield, taking half damage!\n" << endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "You took \033[31m5\033[0m damage!\n";
            this_thread::sleep_for(chrono::seconds(1));
            cin.ignore();
            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
            cin.get();
        }
        //inventory
        else if(act == "3") {    
            cout << "-- INVENTORY : --" << endl;
                 int size2 = sizeof(inventory) / sizeof(inventory[0]);
                    for (int i = 0; i < size2; i++) {
                        cout << inventory[i] << "";
                    };
                    cout << "\n";
            cin >> opt;
                if(opt == "1") {
                    cout << "Healing potion, restores 25 health.",
                    this_thread::sleep_for(chrono::seconds(1)); 
                    cout << "quantity = \033[33m" << quantity_1 << endl;
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "\033[0mYou have \033[32m" << player_health << "\033[0m health" <<endl;
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "Do you want to use a \033[34mhealth potion\033[0m?" << endl;
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "(Y)Yes" "(N)No" << endl;
                    cin >> confirm;
                        if(confirm == "Y" && quantity_1 >= 1) {
                                    //potion
                                        this_thread::sleep_for(chrono::seconds(1));
                                        cout << "Type \033[33mH\033[0m to drink : \033[33m";
                                        string Heal_press = "H";
                                        cin >> Heal_press;
                                        this_thread::sleep_for(chrono::seconds(1));
                                        cout << "\033[0mYou use a health potion, restoring \033[31m25\033[0m health!" << endl;
                                        this_thread::sleep_for(chrono::seconds(3));
                                        player_health += 25;
                                        cout << "you now have \033[31m" << player_health << "\033[0m health!\n" << endl;
                                        //uses_1 += 1;
                                        quantity_1 -= 1;
                                        this_thread::sleep_for(chrono::seconds(1));
                                        cin.ignore();
                                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                        cin.get();
                        }
                        else if(confirm == "N" || quantity_1 == 0) {
                            act = "3";
                        }
                }
                else if(opt == "2") {
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "Spell scroll of Fireball, summons a concentrated orb of magical fire to seek out and incinerate your target\n";
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "quantity = \033[33m" << quantity_2 << endl;
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "\033[0mDo you want to use a \033[34mScroll of Fireball\033[0m?" << endl;
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "(\033[33mY\033[0m)Yes\n" "(\033[33mN\033[0m)No\n" << endl;
                    cin >> confirm;
                        //if(confirm == "Y") {uses_2 += 1;}
                        if(confirm == "Y" && quantity_2 >= 1) {
                                    //fireball
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "You recite a needlessly long - but nonetheless very cool sounding - ancient incantation as magical power concentrates into an orb before your eyes until it turns into a blazing, red hot, ball of pure fire." << endl;
                                    std::this_thread::sleep_for(std::chrono::seconds(5));
                                    cout << "Type L to launch : \033[33m";
                                    string launch_press = "L";
                                    cin >> launch_press;
                                    cout << "\033[0mYou do some fancy hand motions and send the orb hurling towards the goblin, hitting him for \033[31m35\033[0m damage!" << endl;
                                    std::this_thread::sleep_for(std::chrono::seconds(3));
                                    cout << "You've done it now!\n"; 
                                    std::this_thread::sleep_for(std::chrono::seconds(2));
                                    cout << "the goblin harnesses his rage and retatliates at you, dealing \033[31m25\033[0m damage!\n";
                                    std::this_thread::sleep_for(std::chrono::seconds(2));
                                    cout << "It seems the goblin took some extra damage while pushing through the pain, he got hit for \033[31m5\033[0m damage!\n";
                                    std::this_thread::sleep_for(std::chrono::seconds(5));
                                    cin.ignore();
                                    cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                    cin.get();
                                    goblin_health -= 40;
                                    player_dmg_dealt += 40;
                                    player_health -= 25;
                                    gob_dmg_dealt += 25;
                                    //uses_2 += 1;
                                    quantity_2 -= 1;
                        }
                        else if(confirm == "N" || quantity_2 == 0) {
                            act = "3";
                        }
                }
                else if(opt == "3") {
                    cout << "a rudimentary, but still very effective, seemingly scrapped-together smoke bomb. Creates a temporary smoke cloud that \033[33mblinds\033[0m enemies.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "quantity = " << quantity_3 << endl;
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "Do you want to use a \033[34mSmoke bomb\033[0m?" << endl;
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "(\033[33mY\033[0m)Yes\n" "(\033[33mN\033[0m)No\n" << endl;
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cin >> confirm;
                        if(confirm == "Y" && quantity_3 >= 1) {
                                    //smoke
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "Type \033[33mA\033[0m to aim : \033[33m";
                                    string aim_press = "A";
                                    cin >> aim_press;
                                    cout << "\033[0mYou clutch the smoke bomb in your hand tightly, dart your eyes over towards the goblin, attempt to estimate a rough trajectory, adjust your arm's position accordingly, and prepare to toss it.\n";
                                    this_thread::sleep_for(chrono::seconds(4));
                                    cout << "Type \033[33mT\033[0m to throw : \033[33m";
                                    string throw_press = "T";
                                    cin >> throw_press;
                                    cout << "\033[0mYou throw the smoke bomb out!\n" << endl;
                                    this_thread::sleep_for(chrono::seconds(2));
                                    cout << ".";
                                    this_thread::sleep_for(std::chrono::seconds(1));
                                    cout << ".";
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << ".\n";
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "The bomb hits the ground next to the goblin. you hear a small explosion from it, then a flash of light. smoke starts billowing out, quickly creating a dense cloud blanketing the immediate area around the goblin.\n";
                                    this_thread::sleep_for(chrono::seconds(3));
                                    cout << "He can't see a thing!\n";
                                    //this_thread::sleep_for(chrono::seconds(2));
                                    //cout << "The goblin is blinded by the smoke and cannot see or attack you!\n" << endl;
                                    //this_thread::sleep_for(chrono::seconds(0));
                                    cin.ignore();
                                    cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                    cin.get();
                                    cout << "Now's you chance! Get him!\n";
                                    cout << "Type \033[33mA\033[0m to attack : \033[33m";
                                    string attack_press = "A";
                                    cin >> attack_press;
                                    cout << "\n\033[0mStripped of his eyesight, the goblin had no idea you were there until it was too late, you hit him for \033[31m15\033[0m damage!\n";
                                    this_thread::sleep_for(chrono::seconds(3));
                                    cout << "He's still blind. Attack again!\n";
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "Type \033[33mA\033[0m to attack : \033[33m";
                                    cin >> attack_press;
                                    cout << "\n\033[0mThe goblin was flailing about, hoping he might be able to hit you; unfortunately for him, however, this only made him more vulnerable to your attack. You hit him for \033[31m20\033[0m damage!\n";
                                    this_thread::sleep_for(chrono::seconds(3));
                                    cout << "The smoke is starting to clear, but, if you're quick, you figure, you could probably get another hit in.\n";
                                    cout << "Do you want to try for a 3rd hit?" << endl;
                                    std::this_thread::sleep_for(std::chrono::seconds(1));
                                    cout << "(\033[33mY\033[0m)Yes\n" "(\033[33mN\033[0m)No\n" << endl;
                                    cin >> confirm;
                                    if (confirm == "Y") {
                                        cout << "It's a bit of a gamble, but you're feeling lucky today.\n";
                                        cin.ignore();
                                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                        cin.get();
                                        cout << "You rush over towards the still flailing goblin as the smoke cloud slowly starts to dissipate.\n";
                                        this_thread::sleep_for(chrono::seconds(1));
                                        cout << "As you approach the goblin, you think you notice him suddenly stop flailing, but you dont pay much mind to it, you can't start hesitating now.\n";
                                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                        cin.get();
                                        cout << "You swing your sword at the goblin.";
                                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                        cin.get();
                                        cout << "What!??? He's not there. you were sure he was- you mean- but just a moment ago, ri-\n";
                                        this_thread::sleep_for(chrono::seconds(1));
                                        cout << "Suddenly, your train of thought is interrupted by heavy, bludgeoning pain in your back.\n";
                                        this_thread::sleep_for(chrono::seconds(1));
                                        cout << "caught off guard, you let out a wheeze and double over.\n";
                                        this_thread::sleep_for(chrono::seconds(1));
                                        cout << "It's the goblin. It seems that in your rush to get over here before the smoke cleared up, you got sloppy.\n";
                                        this_thread::sleep_for(chrono::seconds(2)); 
                                        cout << "The goblin may not have been able to see, but he could certainly hear, and you practically made enough noise to tell everyone in a 3-mile radius you were coming.\n";
                                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                        cin.get();
                                        cout << "The goblin is able to get a few good hits in on you before you're able to get your bearings again.\n";
                                        this_thread::sleep_for(chrono::seconds(1));
                                        cout << "You take 15 damage.\n";
                                        this_thread::sleep_for(chrono::seconds(2));
                                        cout << "Once you get your bearings back, you hit the goblin for 10 dmg and knock him back. The smoke cloud has completley dissipated now, leaving no trace it ever existed other than a broken, blasted open orb of metal scraps.\n";
                                        player_dmg_dealt += 45;
                                        goblin_health -= 45;
                                        gob_dmg_dealt += 15;
                                        player_health -= 15;

                                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                        cin.get();
                                    }
                                    else if (confirm == "N") {
                                        cout << "It's a bit of a gamble, and you dont feel like pushing your luck. Better safe than sorry, right?\n";
                                        player_dmg_dealt += 35;
                                        goblin_health -= 35;

                                        cin.ignore();
                                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                        cin.get();
                                    }

                                    //goblin_blind = true;
                                    //uses_3 += 1;
                                    quantity_3 -= 1;
                        }
                        else if(confirm == "N" || quantity_3 == 0) {
                            act = "3";
                        }
                }
                else if(opt == "4") {
                    cin.ignore();
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "A Glock 19. you have one bullet for it. kills whatever it hits instantly.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "quantity = " << quantity_4 << endl;
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "Do you want to use le \033[33mglock\033[0m?" << endl;
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "(\033[33mY\033[0m)Yes\n" "(\033[33mN\033[0m)No\n" << endl;
                    std::this_thread::sleep_for(std::chrono::seconds(0));
                    cin >> confirm;
                        if(confirm == "Y" && quantity_4 >= 1) {
                                    //gun
                                    cout << "Mag's empty. you need to reload it.\n";
                                    this_thread::sleep_for(chrono::seconds(2));
                                    cout << "Type \033[33mR\033[0m to reload : \033[33m";
                                    string reload_press = "R";
                                    cin >> reload_press;
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "\n\033[0mType \033[33mA\033[0m to aim : \033[33m";
                                    string aim_press;
                                    cin >> aim_press;
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "\n\033[0mType \033[33mS\033[0m to shoot : \033[33m";
                                    string shoot_press = "S";
                                    cin >> shoot_press;
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "\n\033[0mWhoops. Safety's still on.\n";
                                    cout << "Type \033[33mO\033[0m to turn off the safety : \033[33m";
                                    string safety_off_press = "O";
                                    cin >> safety_off_press;
                                    cout << "\n\033[0mGotta aim again.";
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "\nType \033[33mA\033[0m to aim : \033[33m";
                                    cin >> aim_press;
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "\n\033[0mType \033[33mS\033[0m to shoot : \033[33m";
                                    cin >> shoot_press;
                                    this_thread::sleep_for(chrono::seconds(1));
                                    cout << "\n\033[0mYou used a Glock and shot the goblin! he died instantly! You're the reason why gun control laws should probably exist!\n" << endl;
                                    //std::this_thread::sleep_for(std::chrono::seconds(0));
                                    cin.ignore();
                                    cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                                    cin.get();
                                    goblin_health -= 70;
                                    player_dmg_dealt += 70;
                                    //uses_4 += 1;
                                    quantity_4 -= 1;
                        }
                        else if(confirm == "N" || quantity_4 == 0) {
                            act = "3";
                        }
                }
                //AI data center
                else if(opt == "5") {
                    cin.ignore();
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "\nYou built an AI data center in the goblin's home village.\n";
                    cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                    std::cin.get();
                    cout << "It was super effective!\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                    std::cin.get();
                    player_dmg_dealt += (goblin_health - 1);
                    goblin_health = 1;
                }
                //Crypto scam
                else if(opt == "6" && num_of_turns >= 1 && Has_Crypto == false) {
                    cin.ignore();
                    Has_Crypto = true;
                    cout << "You told the goblin about your new crypto currency - 'HeroCoin.'";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    cout << "\nYou tell them how it's gonna blow up any day now, and how much money he could make by getting in on the ground floor.";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    cout << "\nYou cite figures of how well it's doing right now, how it's only going up, and how he NEEDS to get in right NOW.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(4));
                    cout << "The goblin calls over a couple of his friends - who, until now, had been cowering in a corner out of view.";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    cout << "\nThe goblins seem to huddle together and talk in hushed whispers about whether this is a good investment or not.\n\n";
                    cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                    cin.get();
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    cout << "The goblins - their kind not exactly known for their critical thinking skills, wisdom, or for making smart financial decisions - take the bait.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    cout << "they collectively invest their life savings - 700 gold coins - into your crypto.\nThat is no small amount of money, you wonder just how many corpses they had to loot for that kind of cash.\n";
                    cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                    std::cin.get();
                    goblin_bank_acc -= 700;
                    crypto += 500;
                    cout << "\nThe goblins say that since their boss pays them per round, they will be investing more into your coin with each round.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    cout << "\nThey also say that since you're a hero, they will get paid extra based on how hard they fight and how much damage they deal to you.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(3));
                    cout << "This means that, in order to get the most out of them, you'll need to play things up a bit and make it seem like the goblins are constantly on the verge of defeating you.\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                    cin.get();
                    cout << "\nWait, you think, did those goblins just say that they're earning a wage for doing this?\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    cout << "and they get bonuses for doing well?\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    cout << "that implies that goblin society has some form of an economy...\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    cout << "you can't beleive you're even thinking this,\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    cout << "but";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << ".";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << ".";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << ".\n";
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    cout << "Maybe they aren't nearly as uncivilized as you had thought?...\n\n";
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                    //choices
                    cout << "(1)Take a moment to ponder the intricacies of goblin scoiety and their economic system.\n";
                    cout << "(2)Focus on the battle - you dont have time for this.\n";
                    cin >> opt;
                    if (opt == "1") {
                        cout << "\nYou take a moment to ponder the various details and intricacies of these truly important topics\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        cout << ".";
                        this_thread::sleep_for(chrono::seconds(1));
                        cout << ".";
                        this_thread::sleep_for(chrono::seconds(1));
                        cout << ".\n";
                        std::this_thread::sleep_for(std::chrono::seconds(1));
                        cout << "You get lost in thought, just standing there, staring into space for who knows how long...\n";
                        std::this_thread::sleep_for(std::chrono::seconds(2));
                        cout << "Then, suddenly, you notice something moving back and forth across your field of vision rapidly, and hear some sorts of sounds - shouting, maybe? - coming from somewhere around you.";
                        this_thread::sleep_for(chrono::seconds(2));
                        cout << "\nYour vision is too blury to make out any details, and the sounds are too muffled to decipher.\n\n";
                        std::this_thread::sleep_for(std::chrono::seconds(3));
                        //chocies
                        cout << "(\033[33m1\033[0m)Investigate the blury thing in your vision\n";
                        cout << "(\033[33m2\033[0m)Investigate the muffled sounds\n";
                        cin >> opt;
                        if (opt == "1") {
                            cout << "\nYou stop trying to listen, and instead divert all your efforts towards unblurring your vision. After all, the eys are the window to the soul, as they say, and you can't have foggy windows when there's clearly something so interesting just outside.\n";
                            cin.ignore();
                            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                            std::cin.get();
                            cout << "Your vision slowly unblurs";
                            std::this_thread::sleep_for(std::chrono::seconds(2));
                            cout << ".";
                            std::this_thread::sleep_for(std::chrono::seconds(1));
                            cout << ".";
                            std::this_thread::sleep_for(std::chrono::seconds(1));
                            cout << ".\n\n";
                            std::this_thread::sleep_for(std::chrono::seconds(2));
                            cout << "You have succesfully de-blured your vision, congrats.\n";
                            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                            std::cin.get();
                            cout << "Type \033[33mS\033[0m to see : \033[33m";
                            string see_press = "S";
                            cin >> see_press;
                            cout << "\033[0mYou see it now, you see everything, It's all... so clear.\n";
                            std::this_thread::sleep_for(std::chrono::seconds(2));
                            cout << "Oh.\n";
                            std::this_thread::sleep_for(std::chrono::seconds(1));
                            cout << "wait-\n";
                            std::this_thread::sleep_for(std::chrono::seconds(1));
                            cout << "It's just the goblin.\n";
                            std::this_thread::sleep_for(std::chrono::seconds(2));
                            cout << "Looks like you were spacing out so long he thought something was wrong with you.\n";
                            //std::this_thread::sleep_for(std::chrono::seconds(1));
                            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                            std::cin.get();
                            //cout << "You can't blame him, really. if you saw you staring off into the void like that, you'd think something was wrong wiht you too.";
                            //this_thread::sleep_for(chrono::seconds(1));
                            cout << "You asure him you're fine, and are ready to resume the battle.\nYour newfound... erm insight into goblin society and economics will surely be ivaluable to you in this fight... right?\n";
                            //std::this_thread::sleep_for(std::chrono::seconds(0));
                            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                            std::cin.get();
                        }
                        else if (opt == "2") {
                            cout << "\nYou shut your eyes, do some quick breathing excersises, and foucs - focus on the muffled sounds, tune your brain to their frequencies...\n";
                            std::this_thread::sleep_for(std::chrono::seconds(4));
                            cout << "You take your time, adjusting your frequency, dialing your metaphorical dials on your metaphorical radio just the right amount...\n";
                            std::this_thread::sleep_for(std::chrono::seconds(3));
                            cout << "This is a job that neither can be or should be rushed. you must have absolute focus.\n\n";
                            std::this_thread::sleep_for(std::chrono::seconds(2));
                            cout << ".";
                            std::this_thread::sleep_for(std::chrono::seconds(1));
                            cout << ".";
                            std::this_thread::sleep_for(std::chrono::seconds(1));
                            cout << ".\n\n";
                            std::this_thread::sleep_for(std::chrono::seconds(2));
                            std::this_thread::sleep_for(std::chrono::seconds(2));
                            cout << "You are finished. You are ready to listen.\n\n";
                            std::this_thread::sleep_for(std::chrono::seconds(2));
                            cout << "Type \033[33mL\033[0m to listen : \033[33m";
                            string listen_press = "L";
                            cin >> listen_press;
                            this_thread::sleep_for(chrono::seconds(1));
                            cout << "\033[0mYou hear it now, you hear everything, It's all... so clear. Oh - It's just the goblin. Looks like you were spacing out so long he thought something was wrong with you.\n";
                            cin.ignore();
                            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                            cin.get();
                            cout << "You asure him you're fine, and are ready to resume the battle.\nYou're confident that your newfound revelations regarding the incredibly complex topics of goblin society and economics shall surely be a boon to you in this fight.\n";
                            //std::this_thread::sleep_for(std::chrono::seconds(0));
                            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                            std::cin.get();
                        }
                    }
                    else {
                        cout << "\nYou do not have the time nor energy to ponder such trivial things.\n";
                        this_thread::sleep_for(chrono::seconds(2));
                        cout << "The battle - and your crypto coin - is the only thing that matters now\n";
                        this_thread::sleep_for(chrono::seconds(1));
                        cin.ignore();
                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                        cin.get();
                    }
                }
                else if(opt == "6" && num_of_turns >= 3 && Has_Crypto == true) {
                    cout << "\nDo you want to cash out?\n";
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "Your HeroCoin is currently valued at : $" << crypto << endl;
                    this_thread::sleep_for(chrono::seconds(2));
                    cout << "(\033[33m1\033[0m)Sell\n(\033[33m2\033[0m)Don't sell\n";
                    cin >> opt;
                    if (opt == "1") {
                        cout << "Sold.\nYour Crypto Pump & Dump Scheme is complete.\n\n";
                        this_thread::sleep_for(chrono::seconds(1));
                        cin.ignore();
                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                        std::cin.get();
                        player_bank_acc += crypto;
                        cout << "You have \033[32m$" << player_bank_acc << "\033[0m in your bank account now.\n";
                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                        std::cin.get();
                        crypto = 0;
                        Has_Crypto = false;
                        cout << "As for the goblin... well, you kind of just stole his entire life savings plus his biggest payday ever.";
                        this_thread::sleep_for(chrono::seconds(2));
                        cout << "\nAnd the betrayal came as such a shock to him that he lost all his HP save for a single point and fainted.\n\n";
                        //this_thread::sleep_for(chrono::seconds(0));
                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                        cin.get();
                        player_dmg_dealt = (goblin_health +=1);
                        goblin_health = 1;
                        cout << "Do as you wish from here.\n";
                        //this_thread::sleep_for(chrono::seconds(0));
                        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                        cin.get();
                    }
                    else {

                    }
                }
            }
        
        //lawsuit
        else if(act == "4" && Nintendos_Lawyers == true) {
            cout << "You took the goblin to court, suing it for infringing upon the company's intellectual property." << endl;
            this_thread::sleep_for(chrono::seconds(3));
            cout << "The goblin's punishment..." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            cout << "IS DEATH!!!" << endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "FINISH HIM!!!" << endl << endl;
            this_thread::sleep_for(chrono::seconds(2));
            cout << "Type \033[33mK\033[0m to kill : \033[33m";
            string kill_press = "K";
            cin >> kill_press;
            cout << "\033[0m";
            if(opt == "1") {
                player_dmg_dealt += goblin_health;
                goblin_health = 0;
                cout << "F A T A L I T Y" << endl;
                cin.ignore();
                cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
                std::cin.get();
            };
            /*else if(opt == "2" || opt == "3" || opt == "4") {
              cout << "you cannot perform that action at this time"
            }*/
        }

        //fyi the crypto exchange rate is 0.7142857143. this means that 7 gold = 5 crypto.
        else if(act == "5" && Has_Crypto == true) {
            cout << "You put on a bit of a show with the goblins, you dramatically trade blows a few times and then let yourself get knocked down and pretend to crawl forwards slowly and try and fail to stand up a few times before finally getting back up. You deserve an OSCAR for this.\n";
            //std::this_thread::sleep_for(std::chrono::seconds(1));
            cin.ignore();
            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
            std::cin.get();
            cout << "You had to do it like this since apparently the goblin's boss is watching with a scrying eye, and the more dramatic it seems and the better it seems the goblin is doing, the more he gets paid.\n";
            //this_thread::sleep_for(chrono::seconds(0));
            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
            std::cin.get();
            cout << "unfortunately, you get a bit too in character and you start to actually beleive you're taking damage. ...How did this even happen?\n";
            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
            std::cin.get();
            //std::this_thread::sleep_for(std::chrono::seconds(0));
            cout << "you didn't take any physical damage, however you did take a good bit of mental damage.\n";
            //std::this_thread::sleep_for(std::chrono::seconds(0));
            cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
            std::cin.get();
            goblin_health -= 1;
            player_health -= 30;
            gob_dmg_dealt += 45;
            //^ no, that's not a typo above.
        }

        else {

        }
    
    
    //end of round stuff
    this_thread::sleep_for(chrono::seconds(1));
    cout << "\nThe goblin has \033[32m" << goblin_health << "\033[0m health remaining!" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "You have \033[32m" << player_health << "\033[0m health remaining" << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\nIt's your turn now, what will you do?!\n\n" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    num_of_turns += 1;
    goblin_bank_acc += ((5 * num_of_turns) + gob_dmg_dealt + 1);
    
    
    if (Has_Crypto == true && goblin_bank_acc > 0) {
        if (player_dmg_dealt != 0 && num_of_turns != 0) {
        //running this line of code previosly would cause a crash whenever it was run due to a divide by zero error. the above if statement prevents that now.
        crypto_amnt = (gob_dmg_dealt / player_dmg_dealt) + (goblin_bank_acc / num_of_turns) + 1;
        } 
        else {
        crypto_amnt = 1;
        }
    
        crypto += (crypto_amnt += 6);
        goblin_bank_acc -= 7;
    }
    else if (Has_Crypto == true && goblin_bank_acc <= 0) {
        cout << "The goblins are completely broke right now. They have no money to invest in your Crypto coin.\nYou should probably either just cash out or let 'em whack you a few times.\n";
    
    }
    else {

    }
}


    //fail state.
    if (player_health <= 0) {
        cin.ignore();
        cout << "You died, loser." << endl;
        cout << "Lwk genuinely I'm honestly impressed you managed to die at all. The goblin barely fights back, like were you trying to die? smh.";
        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
        cin.get();
    }

    //beat the game.
    if (goblin_health <= 0) {
        cin.ignore();
        cout << "\nGoblin has been slain" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
        cin.get();
        cout << "Congrats, you beat the game!" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
        cin.get();
        cout << "Thanks for playing my video game. It's not much, but I spent more hours than I'd like to admit working on this(which was originally meant to just be a quick, simple, and pretty basic proof-of-concept)." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << "More updates may or may not to come at some point in the future. Depends on how I feel and whether I'm working on something else or not." << endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        cout << "But if you enjoyed this then I'd reccomend you stay tuned since I'll probably be doing similar projects in the near future.";
        this_thread::sleep_for(chrono::seconds(3));
        cout << "Disclaimer: many goblins were harmed in the making of this." << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\033[34m<Press ENTER to continue...>\033[0m\n";
        cin.get();
    }


};
