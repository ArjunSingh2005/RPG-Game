#include "gtest/gtest.h"
#include "../header/Characters.h"
#include "../header/Player.h"

TEST(constructorTests, testLevel) {
    Player player("Player", 10, 50);
    EXPECT_EQ(player.getLevel(), 1);
}

TEST(setTests, testUpgrade) {
    Player player("Player", 10, 50);
    player.upgrade();
    EXPECT_EQ(player.getLevel(), 2);
}

TEST(setTests, testHealExceedMax) {
    Player player("Player", 10, 50);
    player.heal(100);
    EXPECT_EQ(player.getHP(), 50);
}

TEST(setTests, testHealNotExceedMax) {
    Player player("Player", 10, 50);
    player.heal(10);
    EXPECT_EQ(player.getHP(), 20);
}
