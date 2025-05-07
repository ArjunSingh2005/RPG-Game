#include "gtest/gtest.h"
#include "../header/Characters.h"

TEST(constructorTests, testName) {
    Characters player("Player", 10, 50);
    EXPECT_EQ(player.getName(), "Player");
}

TEST(constructorTests, testHP) {
    Characters player("Player", 10, 50);
    EXPECT_EQ(player.getHP(), 10);
}

TEST(constructorTests, testMaxHP) {
    Characters player("Player", 10, 50);
    EXPECT_EQ(player.getMaxHP(), 50);
}

TEST(setTests, testMaxHP) {
    Characters player("Player", 10, 50);
    player.setMaxHP(100);
    EXPECT_EQ(player.getMaxHP(), 100);
}