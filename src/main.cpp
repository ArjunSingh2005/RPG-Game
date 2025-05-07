#include <iostream>
#include <cstdlib>  // For random numbers
#include <ctime>
#include "../header/game_screens.h"
#include "../header/Characters.h"
#include "../header/Player.h"
#include "../header/NPC.h"
#include "../header/Combat.h"

using namespace std;

int main() {
    srand(time(0));  // Seed for random events

    char input;

    // **1. Pre-Game Phase**
    startScreen();
    cin.get(input);
    if (input == 'q' || input == 'Q') return 0;

    gameExplanation();
    cin.get(input);
    if (input == 'q' || input == 'Q') return 0;

    characterSelection();
    cin.get(input);
    if (input == 'q' || input == 'Q') return 0;

    while (input != '1' && input != '2' && input != '3') {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please select a valid character (1: Tank, 2: Marksman, 3: Warrior): ";
        cin.get(input);
    }

    cout << "Please give your character a name" << endl;
    cin.clear();
    cin.ignore(10000, '\n');
    string playerName;
    cin >> playerName;

    Player player = Player();

    if(input == 1) {
        player = Player(playerName, 150, 150);
    }
    else if(input == 2) {
        player = Player(playerName, 80, 80);
    }
    else {
        player = Player(playerName, 110, 110);
    }

    // **2. Start Game**
    welcomeToJungle();
    cin.clear();
    cin.ignore(10000, '\n');
    cin.get(input);
    if (input == 'q' || input == 'Q') return 0;

    while (input != '1' && input != '2') {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Please choose a valid option (1 or 2): ";
        cin.get(input);
    }

    // **Scenario 1 - Dark Cave**
    if (input == '1') {
        scenarioOne();
        cin.clear();
        cin.ignore(10000, '\n');
        cin.get(input);

        if (input == '1') {
            NPC spider = NPC("spider", 100, 100);
            SpiderFight();
            Combat combat(player, spider);
            if (player.getHP() > 0) {
                SpiderVictory();
                cin.clear();
                cin.ignore(10000, '\n');
                cin.get(input);
                if (input == 'q' || input == 'Q') return 0;
            } else {
                SpiderDeath();
                return 0;
            }
        } 
        EscapeCave();
        cin.clear();
        cin.ignore(10000, '\n');
        cin.get(input);
        if (input == 'q' || input == 'Q') return 0;

        // **Old Man Encounter**
        cin.clear();
        cin.ignore(10000, '\n');
        cin.get(input);
        if (input == '1') {
            OldManFight();
            NPC oldMan = NPC("oldMan", 1000000, 1000000);
            Combat combat(player, oldMan);
            OldManDeath();
            return 0;
        }

        OldManHelp();
        cin.get(input);
        if (input == 'q' || input == 'Q') return 0;

        if (input == '1') {
            if (rand() % 2 == 0) {
                PotionDeath();
                return 0;
            } else {
                PotionHelp();
            }
        }

        // **Proceed to Final Meadow**
        FinalMeadow();
    }

    // **Scenario 2 - Troll Riddle**
    else {
        ScenarioTwo();
        cin.get(input);

        if (input == '1') {
            cout << "I stand tall with arms so wide, In my shade, creatures hide. My leaves dance when the wind sighs, In the jungle, I touch the skies. What am I?" << endl;
            cout << "[1] Tree" << endl;
            cout << "[2] River" << endl;
            cout << "[3] Mountain" << endl;
            cout << "[4] Monkey" << endl;

            cin.get(input);
            if (input != '1') {
                FailRiddle();
                return 0;
            }

            PassRiddle();
            MageFight();
            NPC mage = NPC("mage", 10, 10);
            Combat combat(player, mage);
            if (player.getHP() > 0) {
                MageVictory();
                cin.clear();
                cin.ignore(10000, '\n');
                cin.get(input);
                if (input == 'q' || input == 'Q') return 0;
            } else {
                MageDeath();
                return 0;
            }
        }
        // **Proceed to Final Meadow**
        FinalMeadow();
    }

    // **Final Meadow Decision**
    cin.get(input);

    if (input == '1') { // you choose to fight the boss
        FinalBattleBegins();
    } else {
        // **Underworld Path**
        WelcomeToUnderworld();
        cin.get(input);

        if (input == '1') {
            GrimReaperPotion();
        } else {
            RejectGrimReaper();
        }

        // **Three-Headed Dog Battle**
        ThreeDogFight();
        NPC threeDog = NPC("threeDog", 10, 10);
        Combat combat(player, threeDog);
        if (player.getHP() > 0) {
            DogVictoryScreen();
            cin.clear();
            cin.ignore(10000, '\n');
            cin.get(input);
            if (input == 'q' || input == 'Q') return 0;
        } else {
            DogDeathScreen();
            return 0;
        }
    }

    // **Final Boss Battle**
    FinalBattleBegins();


    // input the combat stuff here
    NPC finalBOSS = NPC("FinalBOSS", 10, 10);
    Combat combat(player, finalBOSS);

    if (player.getHP() <= 0) {
        cout << "You have fallen in battle. The jungle claims another soul..." << endl;
        return 0;
    }

    cout << "The boss resurrects with more health! Fight again. (1: Fight, 2: Give up): ";
    cin.clear();
    cin.ignore(10000, '\n');
    cin.get(input);

    if (player.getHP() <= 0) {
        cout << "The final boss destroys you. The jungle belongs to him forever." << endl;
        return 0;
    }

    finalBOSS = NPC("FinalBOSS", 10, 10);
    combat = Combat(player, finalBOSS);

    if (player.getHP() <= 0) {
        cout << "Your journey ends here. You fought bravely." << endl;
        return 0;
    }

    // **Victory Screen**
    cout << "You have defeated the Final Boss! You claim the Fire Sword, capable of one-shotting anyone!" << endl;
    cout << "🎉 CONGRATULATIONS! YOU HAVE CONQUERED THE JUNGLE! 🎉" << endl;
    return 0;
}
