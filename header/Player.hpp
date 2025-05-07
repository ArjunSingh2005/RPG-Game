#include <iostream>
#include <vector>
#include <string>
#include "Characters.h"
using namespace std;

class Player : pubilc Characters {
    private:
        int level;
        int health;
        vector<string> inventory;

    public:
        Player(int lvl = 1) : level(lvl), health(100) {}

        void displayStats() ;

        void upgrade();

        void exitGame();

        void heal(int amount);

        void addItem(const string& item);
};

int main() {
    Player player;
    player.displayStats();
    player.upgrade();
    player.addItem();
    player.heal(20);
    player.displayStats();
    return 0;
}