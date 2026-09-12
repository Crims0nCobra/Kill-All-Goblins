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
        "(1)healing_potion\n"
        "(2)fireball_scroll\n"
        "(3)smoke_bomb\n"
        "(4)glock\n"
        "\n"
    };

    string BATTLE_OPTIONS_1[3] = {
        "(1)ATTACK\n"
        "(2)DEFEND\n"
        "(3)ITEM\n"
        "\n"
    };

    string BATTLE_OPTIONS_SECRET[4] = {
        "(1)ATTACK\n"
        "(2)DEFEND\n"
        "(3)ITEM\n"
        "(4)Lawsuit from Nintendo\n"
        "\n"
    };
   
    //the code that gets your name.
    string greeting = "Enter your name, Hero:";
    cout << greeting << endl;

    string name;
    cin >> name;

    cout << "Welcome, " << name << "." << endl;

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
       //cout << act << endl;


       //lists the battle options, tbh I stole this code off the internet I have no idea how it actually works lol.
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

        //needlessly overcomplicated system.
        if(opt == "1") {
            resp = "\nATTK\n";
            act = "1";
        }
        else if(opt == "2") {
            resp = "\nDEF\n";
            act = "2";
        }
        else if(opt == "3") {
            resp = "\nITEM\n";
            act = "3";
        }
        else if(opt == "4") {
            resp = "\nLawsuit from Nintendo\n";
            act = "4";
        }
        else if(opt == "5") {
            resp = "\nPlay it up\n";
            act = "5";
        };

        cout << resp << endl;


        string confirm;
        
        
        //handles how much of each item there is, as well as making sure to decrease it with each use. does not control what happens if # of uses reaches 0.
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
                        cout << inventory[i] << "";
                    };
                    cout << "\n";
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
                                    cout << "You recite a needlessly long - but nonetheless very cool sounding - ancient incantation as magical power concentrates into an orb before your eyes until it turns into a blazing, red hot, ball of pure fire." << endl;
                                    cout << "Type L to launch : ";
                                    string launch = "L";
                                    cin >> launch;
                                    cout << "You do some fancy hand motions and send the orb hurling towards the goblin, and hitting him for 35 health points!" << endl;
                                    cout << "You've done it now! the goblin harnesses his rage and retatliates at you, dealing 25 damage!\n";
                                    cout << "It seems the goblin took some extra damage while pushing through the pain, he got hit for 5 damage!\n";
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
                    resp = "a rudimentary, but still very effective, seemingly scrapped-together smoke bomb. Creates a temporary smoke cloud that blinds enemies."; 
                    cout << "quantity = " << quantity_3 << endl;
                    cout << "Do you want to use a Smoke bomb?" << endl;
                    cout << "(Y)Yes" "(N)No" << endl;
                    cin >> confirm;
                        if(confirm == "Y" && quantity_3 >= 1) {
                                    //smoke
                                    cout << "You throw a smoke bomb out!" << endl;
                                    cout << "The goblin is blinded by the smoke and cannot see or attack you!\n" << endl;
                                    goblin_blind = true;
                                    //uses_3 += 1;
                                    quantity_3 -= 1;
                        }
                        else if(confirm == "N" || quantity_3 == 0) {
                            act = "3";
                        }
                }
                else if(opt == "4") {
                    resp = "A glock 19. you have one bullet for it. kills whatever it hits instantly.\n";
                    cout << "quantity = " << quantity_4 << endl;
                    cout << "Do you want to use le glock?" << endl;
                    cout << "(Y)Yes" "(N)No" << endl;
                    cin >> confirm;
                        if(confirm == "Y" && quantity_4 >= 1) {
                                    //gun
                                    cout << "You used a Glock and shot the goblin! he died instantly! You're the reason why gun control laws should probably exist!\n" << endl;
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
                    cout << "\nYou built an AI data center in the goblin's home village. it was super effective!\n";
                    goblin_health -= 69; //nice.
                    player_dmg_dealt += 69;
                }
                //Crypto scam
                else if(opt == "6" && num_of_turns >= 1 && Has_Crypto == false) {
                    Has_Crypto = true;
                    cout << "You told the goblin about your new crypto currency - 'HeroCoin.'\nYou tell them how it's gonna blow up any day now, and how much money he could make by getting in on the ground floor.\nYou cite figures of how well it's doing right now, how it's only going up, and how he NEEDS to get in right NOW.\n";
                    cout << "The goblin calls over a couple of his friends - who, until now, had been cowering in a corner out of view.\nThe goblins seem to huddle to together and talk in hushed whispers about whether this is a good investment or not.\n\n";
                    cout << "The goblins - their kind not exactly known for their critical thinking skills, wisdom, or for making smart financial decisions - take the bait. they collectively invest their life savings - 1000 gold coins - into your crypto.\nThat is no small amount of money, you wonder just how many corpses they had to loot for that kind of cash.\n";
                    goblin_bank_acc -= 1000;
                    crypto += 980;
                    cout << "\nThe goblins say that since their boss pays them per round, they will be investing more into your coin with each round.\nThey also say that since you're a hero, they will get paid extra based on how hard they fight and how much damage they deal to you.\n";
                    cout << "This means that, in order to get the most out of them, you'll need to play things up a bit and make it seem like the goblins are constantly on the verge of defeating you.\n";
                    cout << "\nWait, you think, did those goblins just say that they're earning a wage for doing this?\nand they get bonuses for doing well?\nthat implies that goblin society has some form of an economy...\nyou can't beleive you're even thinking this, but, maybe they aren't nearly as uncivilized as you had thought?...\n\n";
                    //choices
                    cout << "(1)Take a moment to ponder the intricacies of goblin scoiety and their economic system.\n";
                    cout << "(2)Focus on the battle - you dont have time for this.\n";
                    cin >> opt;
                    if (opt == "1") {
                        cout << "\nYou take a moment to ponder the various details and intricacies of these truly important topics\n";
                        cout << "...\n";
                        cout << "You get lost in thought, just standing there, staring into space for who knows how long...\n";
                        cout << "Then, suddenly, you notice something moving back and forth across your field of vision rapidly, and hear some sorts of sounds - shouting, maybe? - coming from somewhere around you. Your vision is too blury to make out any details, and the sounds are too muffled to decipher.\n\n";
                        //chocies
                        cout << "(1)Investigate the blury thing in your vision\n";
                        cout << "(2)Investigate the muffled sounds\n";
                        cin >> opt;
                        if (opt == "1") {
                            cout << "\nYou stop trying to listen, and instead divert all your efforts towards unblurring your vision. After all, the eys are the window to the soul, as they say, and you can't have foggy windows when there's clearly something so interesting just outside.\n";
                            cout << "Your vision slowly unblurs... \n\n";
                            cout << "You have succesfully de-blured your vision, congrats.\n\n";
                            cout << "You see it now, you see everything, It's all... so clear. Oh. wait - It's just the goblin. Looks like you were spacing out so long he thought something was wrong with you.\n";
                            cout << "You asure him you're fine, and are ready to resume the battle.\nYour newfound... erm insight into goblin society and economics will surely be ivaluable to you in this fight... right?\n";
                        }
                        else if (opt == "2") {
                            cout << "\nYou shut your eyes, do some quick breathing excersises, and foucs - focus on the muffled sounds, tune your brain to their frequencies...\n";
                            cout << "You take your time, adjusting your frequency, dialing your metaphorical dials on your metaphorical radio just the right amount...\n";
                            cout << "This is a job that neither can be or should be rushed. you must have absolute focus.\n\n";
                            cout << "You are finished. You are ready to listen.\n\n";
                            cout << "You hear it now, you hear everything, It's all... so clear. Oh - It's just the goblin. Looks like you were spacing out so long he thought something was wrong with you.\n";
                            cout << "You asure him you're fine, and are ready to resume the battle.\nYou're confident that your newfound revelations regarding the incredibly complex topics of goblin society and economics shall surely be a boon to you in this fight.\n";
                        }
                    }
                    else {
                        cout << "\nYou do not have the time nor energy to ponder such trivial things\n";
                        cout << "The battle - and your crypto coin - is the only thing that matters now\n";
                    }
                }
                else if(opt == "6" && num_of_turns >= 3 && Has_Crypto == true) {
                    cout << "\nDo you want to cash out?\n";
                    cout << "Your HeroCoin is currently valued at : $" << crypto << endl;
                    cout << "(1)Sell\n(2)Don't sell\n";
                    cin >> opt;
                    if (opt == "1") {
                        cout << "Sold.\n Your Crypto Pump & Dump Scheme is complete.\n\n";
                        player_bank_acc += crypto;
                        cout << "You have $" << player_bank_acc << " in your bank account now.\n";
                        crypto = 0;
                        Has_Crypto = false;
                        cout << "As for the goblin... well, you kind of just stole his entire life savings plus his biggest payday ever.\nAnd the betrayal came as such a shock to him that he lost all his HP save for a single point and fainted.\n\n";
                        goblin_health = 1;
                        cout << "Do as you wish from here.\n";
                    }
                    else {

                    }
                }
            }
        
        //lawsuit
        else if(act == "4" && Nintendos_Lawyers == true) {
            cout << "You took the goblin to court, suing it for infringing upon the company's intellectual property." << endl;
            cout << "The goblin's punishment..." << endl;
            cout << "IS DEATH!!!" << endl;
            cout << "FINISH HIM!!!" << endl << endl;
            cin >> opt;
            if(opt == "1") {
                goblin_health -= 70;
                player_dmg_dealt += 70;
                cout << "F A T A L I T Y" << endl;
            };
            /*else if(opt == "2" || opt == "3" || opt == "4") {
              cout << "you cannot perform that action at this time"
            }*/
        }

        else if(act == "5" && Has_Crypto == true) {
            cout << "You put on a bit of a show with the goblins, you dramatically trade blows a few times and then let yourself get knocked down and pretend to crawl forwards slowly and try and fail to stand up a few times before finally getting back up. You deserve an OSCAR for this.\n";
            cout << "You had to do it like this since apparently the goblin's boss is watching with a scrying eye, and the more dramatic it seems and the better it seems the goblin is doing, the more he gets paid.\n";
            cout << "unfortunately, you get a bit too in character and you start to actually beleive you're taking damage. how did this even happen?\n";
            cout << "you didn't take any physical damage, however you did take a good bit of mental damage.\n";
            goblin_health -= 1;
            player_health -= 30;
            gob_dmg_dealt += 45;
            //^ no, that's not a typo above.
        }

        else {

        }
    
    //end of round stuff
    cout << "\nThe goblin has " << goblin_health << " health remaining!" << endl;
    cout << "You have " << player_health << " health remaining" << endl;
    cout << "\nIt's your turn now, what will you do?!\n\n" << endl;
    num_of_turns += 1;
    //player_bank_acc += 0;
    goblin_bank_acc += ((5 * num_of_turns) + gob_dmg_dealt + 1);
    if (Has_Crypto == true && goblin_bank_acc > 0) {
        crypto += (crypto_amnt += 6);
        goblin_bank_acc -= 7;
    }
    else if (Has_Crypto == true && goblin_bank_acc <= 0) {
        cout << "The goblins are completely broke right now. They have no money to invest in your Crypto coin.\n You should probably either just cash out or let 'em whack you a few times.\n";
    }
    

    //fail state.
    if (player_health <= 0) {
        cout << "You died, loser." << endl;
    }

    //beat the game.
    if (goblin_health <= 0) {
        cout << "\nGoblin has been slain" << endl;
        cout << "Congrats, you beat the game!" << endl;
        cout << "Thanks for QA testing my dumb little text rpg for free!" << endl;
        cout << "More updates to come in the future! Stay tuned." << endl;
        cout << "Disclaimer: many goblins were harmed in the making of this." << endl;
    }

}
};