#ifndef PLAYER_H
#define PLAYER_H

#include "Characters.h"
#include "NPC.h"

#include <string>
#include <vector>

using namespace std;

class Player : public Characters {
    private:
        int level;
        vector<string> inventory;

    public:
        Player() : Characters(), level(1), inventory(10) {};
        Player(std::string name, int HP, int MaxHP) : Characters(name, HP, MaxHP), level(1), inventory(10) {};
        void displayStatus();
        int getLevel();
        void upgrade();
        void heal(int amount);
        void attack(NPC& enemy, int damage);
        void damage(int damage);
};


#endif 