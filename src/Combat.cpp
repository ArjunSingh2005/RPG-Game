#include "../header/Combat.h"
#include "../header/Player.h"
#include <iostream>
using namespace std;

Combat::Combat(Player& player, NPC& enemy) {
    player.setHP(player.getMaxHP());
    enemy.setHP(enemy.getMaxHP());
    startCombat(player, enemy);
}

void Combat::playerTurn(Player& player, NPC& enemy) {
    player.attack(enemy, player.getLevel() * 10);
}

void Combat::enemyTurn(Player& player, NPC& enemy) {
    enemy.attack(player, enemy.getMaxHP() / 10);
}

void Combat::startCombat(Player& player, NPC& enemy) {
    player.displayStatus();
    enemy.displayStatus();

    while(player.getHP() > 0){
        playerTurn(player, enemy);
        player.displayStatus();
        enemy.displayStatus();
        if(enemy.getHP() <= 0) break;
        enemyTurn(player, enemy);
        player.displayStatus();
        enemy.displayStatus();
    }

    if(player.getHP() > 0) {
        cout << "You win!\n";
    }
    else {
        cout << "You lose!\n";
    }

}