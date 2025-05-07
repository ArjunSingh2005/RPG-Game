#ifndef COMBAT_H
#define COMBAT_H

#include "Player.h"
#include "NPC.h"

#include <vector>
using namespace std;

class Combat {
    private:
        Player player;
        NPC enemy;

        void playerTurn(Player& player, NPC& enemy);
        void enemyTurn(Player& player, NPC& enemy);

    public:
        Combat(Player& player, NPC& enemy);
        void startCombat(Player& player, NPC& enemy);

};


#endif