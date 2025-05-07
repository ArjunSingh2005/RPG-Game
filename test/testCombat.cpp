#include "gtest/gtest.h"
#include "../header/Characters.h"
#include "../header/Player.h"
#include "../header/NPC.h"
#include "../header/Combat.h"

TEST(combatTests, testPlayerWin) {
    Player player("Player", 20, 50);
    NPC enemy("Enemy", 10, 50);
    Combat combat(player, enemy);
    combat.startCombat(player, enemy);
    EXPECT_TRUE(player.getHP() > 0);
}

TEST(combatTests, testPlayerLose) {
    Player player("Player", 10, 20);
    NPC enemy("Enemy", 10, 100);
    Combat combat(player, enemy);
    combat.startCombat(player, enemy);
    EXPECT_TRUE(enemy.getHP() > 0);
}