#ifndef NPC_H
#define NPC_H

#include "Characters.h"


#include <string>

using namespace std;

class Player;

class NPC : public Characters {
    private:
    
    public:
        NPC() : Characters() {};
        NPC(string name, int HP, int MaxHP) : Characters(name, HP, MaxHP) {};
        void attack(Player& player, int damage);
        void damage(int damage);
        void displayStatus();
};



#endif