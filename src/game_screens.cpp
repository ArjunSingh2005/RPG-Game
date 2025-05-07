#include <iostream>
#include "../header/game_screens.h"

using namespace std;

void startScreen() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴
🌳-------------------------------------------------------------🌳
🌴|                                                           |🌴
🌳|                  🌿 Welcome to the Jungle 🌿               |🌳
🌴|                                                           |🌴
🌳|   You wake up in the heart of a dense, mysterious jungle. |🌳
🌴|   The air is thick with humidity, and the sounds of       |🌴
🌳|   creatures echo around you.                              |🌳
🌴|                                                           |🌴
🌳|   ⚔️ Battle fierce creatures lurking in the shadows.       |🌳
🌴|   💰 Uncover vast treasures hidden in ancient ruins.      |🌴
🌳|   🛤️ Make daring escapes from deadly traps.               |🌳
🌴|   📖 Shape your journey through every decision you make.  |🌴
🌳|                                                           |🌳
🌴|___________________________________________________________|🌴
🌳|                                                           |🌳
🌴|             [ Start Game ] (type any other button)        |🌴
🌳|                                                           |🌳
🌴|             [ Exit Game ]  (type q)                       |🌴
🌳|___________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴

    )" << endl;
}

void gameExplanation() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴
🌳-------------------------------------------------------------🌳
🌴|                                                           |🌴
🌳|            ⚔️ COMBAT EXPLANATION - SURVIVAL GUIDE ⚔️        |🌳
🌴|                                                           |🌴
🌳|   In "Welcome to the Jungle," combat is **turn-based**.   |🌳
🌴|   You will face **deadly creatures** and must choose your |🌴
🌳|   actions carefully to survive!                           |🌳
🌴|                                                           |🌴
🌳|   🏹 **Your Combat Options:**                             |🌳
🌴|     [1] Attack  🗡️ - Strike the enemy with your weapon    |🌴
🌳|     [2] Dodge   🏃 - Avoid incoming attacks               |🌳
🌴|     [3] Special Move  💥 - A powerful skill (uses energy) |🌴
🌳|     [4] Use Item  🎒 - Heal, increase damage etc.         |🌳
🌴|                                                           |🌴
🌳|   🎯 **Winning Battles & Escaping the Jungle:**           |🌳
🌴|     ✅ Learn enemy **weaknesses** and use strategy        |🌴
🌳|     ✅ Earn XP & **upgrade weapons/abilities**            |🌳
🌴|     ✅ Complete **quests** to uncover the escape route    |🌴
🌳|     ✅ Manage your **health, energy, and inventory**      |🌳
🌴|                                                           |🌴
🌳|___________________________________________________________|🌳
🌴|                                                           |🌴
🌴|   [ click any button ] Character Creation 🎭              |🌴
🌴|   [ Q ] Quit Game ❌                                      |🌴
🌳|___________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴

    )" << endl;
}

void questLog() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴
🌳-------------------------------------------------------------🌳
🌴|                                                           |🌴
🌳|                    📜 QUEST LOG 📜                         |🌳
🌴|                                                           |🌴
🌳|   You can accept up to **3 active quests** at a time.     |🌳
🌴|   Completing quests will **earn rewards, unlock skills**, |🌴
🌳|   and **help you escape the jungle**.                     |🌳
🌴|                                                           |🌴
🌳|   🌟 **Available Quests:**                                |🌳
🌴|                                                           |🌴
🌳|   [1] **Silent Predator** - Win a fight without taking    |🌳
🌴|       any damage. 🏹                                      |🌴
🌳|   [2] **Last Stand** - Win a fight with only 1 HP left.   |🌳
🌴|       ⚔️💀                                                 |🌴
🌳|   [3] **Berserker Rage** - Defeat an enemy using only     |🌳
🌴|       heavy attacks (no dodging). 💥                      |🌴
🌳|   [4] **Flawless Victory** - Defeat 2 enemies in a row    |🌳
🌴|       without healing. 🛡️🔥                                |🌴
🌳|   [5] **The Hunter** - Land 3 critical hits in one        |🌳
🌴|       battle. 🎯                                          |🌴
🌳|   [6] **Endurance Fighter** - Survive 10 turns in a       |🌳
🌴|       single battle. ⏳                                   |🌴
🌳|   [7] **Quick Execution** - Defeat an enemy in 3 turns    |🌳
🌴|       or less. ⚡                                          |🌴
🌳|                                                           |🌳
🌴|___________________________________________________________|🌴
🌳|                                                           |🌳
🌴|   Select up to 3 quests: (e.g., "1 3 5")                  |🌴
🌳|                                                           |🌳
🌴|   [ C ] Character Selection 🎭                            |🌴
🌴|   [ Q ] Quit Game ❌                                      |🌴
🌳|___________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴
    )" << endl;
}

void characterSelection() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌴🌳🌳
🌳-------------------------------------------------------------🌳
🌴|                                                           |🌴
🌳|                  🎭 CHARACTER SELECTION 🎭                 |🌳
🌴|                                                           |🌴
🌳|   Choose your class wisely! This decision is **FINAL**.   |🌳
🌴|   Your class will define your strengths, weaknesses,      |🌴
🌳|   and combat abilities throughout your journey.           |🌳
🌴|                                                           |🌴
🌳|   🛡️ [1] **TANK** - The Juggernaut of Survival            |🌳
🌴|       - **Health:** 150 ❤️                                 |🌴
🌳|       - **Attack Damage:** 10-15 ⚔️                        |🌳
🌴|       - **Strength:** High Defense, can endure attacks    |🌴
🌳|       - **Weakness:** Slow movement, low crit chance      |🌳
🌴|       - **Special:** **Fortify** - Reduce incoming damage |🌴
🌳|                                                           |🌳
🌴|   🎯 [2] **MARKSMAN** - The Deadly Sniper                 |🌴
🌳|       - **Health:** 80 ❤️                                  |🌳
🌴|       - **Attack Damage:** 20-30 🎯                       |🌴
🌳|       - **Strength:** High Attack & Critical Strikes      |🌳
🌴|       - **Weakness:** Low Defense, relies on dodging      |🌴
🌳|       - **Special:** **Piercing Shot** - Guaranteed Crit  |🌳
🌴|                                                           |🌴
🌳|   ⚔️ [3] **WARRIOR** - The Balanced Fighter                |🌳
🌴|       - **Health:** 110 ❤️                                 |🌴
🌳|       - **Attack Damage:** 15-20 ⚔️                        |🌳
🌴|       - **Strength:** Balanced Attack & Defense           |🌴
🌳|       - **Weakness:** No extreme advantages/disadvantages |🌳
🌴|       - **Special:** **Fury Strike** - Extra damage       |🌴
🌳|         after a successful dodge.                         |🌳
🌴|                                                           |🌴
🌳|___________________________________________________________|🌳
🌴|                                                           |🌴
🌳|   **Choose wisely! Your class selection is FINAL.**       |🌳
🌴|                                                           |🌴
🌳|   Select your class: (1, 2, or 3)                         |🌳
🌴|                                                           |🌴
🌴|   [ Q ] Quit Game ❌                                      |🌴
🌳|___________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳


    )" << endl;
}

void welcomeToJungle() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌴🌳🌴
🌳-------------------------------------------------------------🌳
🌴|                                                           |🌴
🌳|              🌿 WELCOME TO THE JUNGLE 🌿                  |🌳
🌴|                                                           |🌴
🌳|   The air is thick with humidity, clinging to your skin   |🌳
🌴|   like a second layer. The dense canopy above blocks out  |🌴
🌳|   most of the sunlight, leaving eerie shadows dancing on  |🌳
🌴|   the jungle floor.                                       |🌴
🌳|                                                           |🌳
🌴|   In the distance, you hear rustling leaves... a growl?   |🌴
🌳|   Or just the wind? Every choice you make will decide     |🌳
🌴|   whether you conquer the jungle... or become its prey.   |🌴
🌳|                                                           |🌳
🌴|   🌟 **You have two choices:**                            |🌳
🌳|                                                           |🌳
🌴|   [1] **Enter the Dark Cave** 🦇                          |🌴
🌳|       - The entrance is barely visible, swallowed by      |🌳
🌴|         complete darkness. Strange noises come from       |🌴
🌳|         deep within. Do you dare venture inside?          |🌳
🌴|                                                           |🌴
🌳|   [2] **Cross the Raging River** 🌊                       |🌳
🌴|       - A fragile wooden bridge sways over rushing        |🌴
🌳|         waters. The current is fierce, and the bridge     |🌳
🌴|         doesn’t look stable. Can you make it across?      |🌴
🌳|                                                           |🌳
🌴|___________________________________________________________|🌴
🌳|                                                           |🌳
🌴|   Choose your path: (1 or 2)                              |🌴
🌳|                                                           |🌳
🌴|   [ Q ] Quit Game ❌                                      |🌴
🌳|___________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴


    )" << endl;
}

void scenarioOne() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳-------------------------------------------------------------🌳
🌴|                                                           |🌴
🌳|                 🦇 THE DARK CAVE 🦇                       |🌳
🌴|                                                           |🌴
🌳|   The moment you step inside, the outside world fades     |🌳
🌴|   behind you. The cave is damp, the air heavy with the    |🌴
🌳|   scent of earth and decay. Each step echoes off the      |🌳
🌴|   jagged walls as you venture deeper into the darkness.   |🌴
🌳|                                                           |🌳
🌴|   Suddenly, you hear a faint clicking sound... then       |🌴
🌳|   another. From above, something moves. Long, spindly     |🌳
🌴|   legs emerge from the shadows, and two **gleaming red    |🌴
🌳|   eyes** fixate on you.                                   |🌳
🌴|                                                           |🌴
🌳|   🕷️ **A GIANT SPIDER DROPS FROM THE CEILING!**           |🌳
🌴|                                                           |🌴
🌳|   The creature rears up, its fangs glistening with venom. |🌳
🌴|   It blocks the path forward, and theres no telling how   |🌴
🌳|   fast it is. You must act quickly!                       |🌳
🌴|                                                           |🌴
🌳|   🌟 **What will you do?**                                |🌳
🌴|                                                           |🌴
🌳|   [1] **Fight the Spider** ⚔️                              |🌳
🌴|       - Stand your ground and battle the beast.           |🌴
🌳|       - Victory could bring rewards… or death.            |🌳
🌴|                                                           |🌴
🌳|   [2] **Run Away** 🏃‍♂️                                     |🌳
🌴|       - Try to escape before it attacks!                  |🌴
🌳|                                                           |🌳
🌴|                                                           |🌴
🌳|___________________________________________________________|🌳
🌴|                                                           |🌴
🌳|   Choose your action: (1 or 2)                            |🌳
🌴|                                                           |🌳
🌴|   [ Q ] Quit Game ❌                                      |🌴
🌳|___________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳

    )" << endl;
}

void EscapeCave() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳------------------------------------------------------------------------------------🌳
🌴|                           🏃 ESCAPE FROM THE CAVE 🏃                             |🌴
🌳|                                                                                  |🌳
🌴|   You turn on your heel and **sprint into the darkness**. Your heart pounds as   |🌴
🌳|   you hear the **clicking of the spider’s legs** skittering behind you. The      |🌳
🌴|   cave walls seem to **close in**, the damp air thick with the scent of decay    |🌴
🌳|   and something worse—**venom**.                                                 |🌳
🌴|                                                                                  |🌴
🌳|   The path is uneven. You **stumble** but catch yourself, lungs burning. The     |🌳
🌴|   light ahead grows, and with one last desperate leap, you **burst out of the    |🌴
🌳|   cave** into the open jungle.                                                   |🌳
🌴|                                                                                  |🌴
🌳|   Silence.                                                                       |🌳
🌴|                                                                                  |🌴
🌳|   The jungle opens into a **lush meadow**, bathed in a golden glow. Wildflowers  |🌳
🌴|   sway in the breeze. In the distance, perched alone among the trees, sits a     |🌴
🌳|   **small wooden hut**. Something about it feels... **off**.                     |🌳
🌴|                                                                                  |🌴
🌳|   You approach the hut carefully, stepping onto the worn wooden porch. The       |🌳
🌴|   door is **already open**.                                                      |🌴
🌳|                                                                                  |🌳
🌴|   Inside, the air is **heavy**, as if time itself moves slower here. Sitting at  |🌴
🌳|   the center of the dimly lit room is an **old man**.                            |🌳
🌴|                                                                                  |🌴
🌳|   His clothes are tattered, but his eyes—**piercing, deep with knowledge         |🌳
🌴|   beyond years**—lock onto yours the moment you step in. He does not speak. He   |🌴
🌳|   does not move. Yet, his presence is overwhelming. **Powerful.**                |🌳
🌴|                                                                                  |🌴
🌳|   A strange **energy hums in the air**, pressing against your skin. Is this man  |🌳
🌴|   dangerous? Is he even real?                                                    |🌴
🌳|                                                                                  |🌳
🌴|   🌟 **What will you do?**                                                       |🌴
🌳|                                                                                  |🌳
🌴|   [1] **Kill the Old Man** ⚔️  - Strike first. Whatever he is, you can’t risk it. |🌴
🌳|   [2] **Walk Up to the Old Man** 🕊️  - Approach cautiously. He has done          |🌳
🌴|       nothing... yet.                                                            |🌴
🌳|                                                                                  |🌳
🌴|__________________________________________________________________________________|🌴
🌳|                                                                                  |🌳
🌴|   Choose your action: (1 or 2)                                                   |🌴
🌳|                                                                                  |🌳
🌴|   [ Q ] Quit Game ❌                                                             |🌴
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}

void SpiderFight() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳-----------------------------------------------------------------------------------🌳
🌴|                                 ⚔️ COMBAT BEGINS ⚔️                                |🌴
🌳-----------------------------------------------------------------------------------|🌳
🌴|                                                                                  |🌴
🌳|   The **Giant Spider** lunges forward, its fangs dripping with venom! Its        |🌳
🌴|   long, spindly legs shift rapidly, ready to strike.                             |🌴
🌳|                                                                                  |🌳
🌴|   **Your Health:** [ ❤️ 100 ]            **Giant Spider’s Health:** [ 💀 80 ]     |🌴
🌳|                                                                                  |🌳
🌴|   🌟 **Choose your action:**                                                     |🌴
🌳|                                                                                  |🌳
🌴|   [1] **Attack** 🗡️  - Strike with your weapon. (Deals 10-15 damage)             |🌴
🌳|   [2] **Dodge** 🏃  - Try to evade the next attack. (50% success)                |🌳
🌴|   [3] **Special Move** 💥  - Use a powerful attack. (Higher damage, costs energy)|🌴
🌳|   [4] **Use Item** 🎒  - Heal or use a tool from your inventory.                 |🌳
🌴|                                                                                  |🌴
🌳|----------------------------------------------------------------------------------|🌳
🌴|   **The spider hisses, preparing to strike...**                                  |🌴
🌳|                                                                                  |🌳
🌴|   Choose your action: (1, 2, 3, or 4)                                            |🌴
🌳|                                                                                  |🌳
🌴|   [ Q ] Quit Game ❌                                                             |🌴
🌳|__________________________________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳


    )" << endl;
}

void SpiderDeath() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳|----------------------------------------------------------------------------------|🌳
🌴|                                   ☠️ YOU DIED ☠️                                   |🌴
🌳|----------------------------------------------------------------------------------|🌳
🌴|                                                                                  |🌴
🌳|   The pain is unbearable. You feel your strength fading as darkness begins       |🌳
🌴|   to consume your vision. The **Giant Spiders fangs sink deeper** into your      |🌴
🌳|   body, venom surging through your veins. Your movements slow... and then        |🌳
🌴|   everything fades to black.                                                     |🌴
🌳|                                                                                  |🌳
🌴|   The jungle has claimed another soul.                                           |🌴
🌳|                                                                                  |🌳
🌴|   🌟 **Your adventure ends here... but the jungle is eternal.**                  |🌴
🌳|                                                                                  |🌳
🌴|----------------------------------------------------------------------------------|🌴
🌳|                                                                                  |🌳
🌳|   [ Q ] Quit Game ❌                                                             |🌳
🌴|__________________________________________________________________________________|🌴
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}

void SpiderVictory() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳------------------------------------------------------------------------------------🌳
🌴|                                    🎉 VICTORY! 🎉                                |🌴
🌳-----------------------------------------------------------------------------------|🌳
🌴|                                                                                  |🌴
🌳|   You **dodge to the side** as the Giant Spider lunges. With one swift motion,   |🌳
🌴|   you **drive your weapon deep into its abdomen**. The creature lets out a       |🌴
🌳|   piercing screech, legs twitching violently as it collapses onto the cave floor.|🌳
🌴|                                                                                  |🌴
🌳|   Silence follows. The battle is over.                                           |🌳
🌴|                                                                                  |🌴
🌳|   You step back, breathing heavily. The beast lies motionless, its lifeless      |🌳
🌴|   red eyes staring into nothing. The **jungle has not claimed you today.**       |🌴
🌳|                                                                                  |🌳
🌴|   🌟 **You have survived… but the jungle still waits.**                          |🌴
🌳|                                                                                  |🌳
🌴|----------------------------------------------------------------------------------|🌴
🌳|                                                                                  |🌳
🌴|   [ click any button ] Continue Your Journey ➡️                                   |🌴
🌳|   [ Q ] Quit Game ❌                                                             |🌳
🌴|__________________________________________________________________________________|🌴
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}

void OldManFight() {
    cout << R"(

🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳|----------------------------------------------------------------------------------|🌳
🌴|                                ⚔️ COMBAT BEGINS ⚔️                                 |🌴
🌳|----------------------------------------------------------------------------------|🌳
🌴|                                                                                  |🌴
🌳|   You grip your weapon tightly and **lunge at the old man**, expecting a quick   |🌳
🌴|   and easy kill. But before your blade can even reach him, a sudden force stops  |🌴
🌳|   you in your tracks.                                                            |🌳
🌴|                                                                                  |🌴
🌳|   He is still sitting, completely unmoving. His **piercing eyes** glow faintly.  |🌳
🌴|   The very air around him feels **unreal**, as if reality itself bends to his    |🌴
🌳|   will. **You have made a terrible mistake.**                                    |🌳
🌴|                                                                                  |🌴
🌳|   **The Old Man stands.**                                                        |🌳
🌴|   **The room begins to shake.**                                                  |🌴
🌳|                                                                                  |🌳
🌴|   **Your Health:** [ ❤️ 100 ]       **Old Man’s Health:** [ 💀 100,000 ]          |🌴
🌳|                                                                                  |🌳
🌴|   🌟 **Choose your action:**                                                     |🌴
🌳|                                                                                  |🌳
🌴|   [1] **Attack** 🗡️  - Strike with all your strength. (Deals 10-15 damage?)      |🌴
🌳|   [2] **Dodge** 🏃  - Try to evade the inevitable. (Does it even matter?)        |🌳
🌴|                                                                                  |🌴
🌳|----------------------------------------------------------------------------------|🌳
🌴|                                                                                  |🌴
🌳|   **The Old Man watches.**                                                       |🌳
🌴|   **The world around you distorts.**                                             |🌴
🌳|                                                                                  |🌳
🌴|   Choose your action: (1 or 2)                                                   |🌴
🌳|                                                                                  |🌳
🌴|   [ Q ] Quit Game ❌                                                             |🌴
🌳____________________________________________________________________________________🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}


void OldManDeath() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳
🌳-----------------------------------------------------------------------------------🌳
🌴|                                   ☠️ YOU DIED ☠️                                  |🌴
🌳|---------------------------------------------------------------------------------|🌳
🌴|                                                                                 |🌴
🌳|   You charge forward, blade in hand. The old man **does not move**. Then,       |🌳
🌴|   without warning, a **force beyond your comprehension** crushes your body.     |🌴
🌳|                                                                                 |🌳
🌴|   Your lungs **collapse**. The air is gone. Your vision distorts. **Everything  |🌴
🌳|   slows.** You are weightless—drifting through reality itself.                  |🌳
🌴|                                                                                 |🌴
🌳|   The last thing you see is the Old Man’s **piercing eyes** staring through you.|🌳
🌴|   A whisper fills your mind:                                                    |🌴
🌳|                                                                                 |🌳
🌴|   **“You were not ready.”**                                                     |🌴
🌳|                                                                                 |🌳
🌴|   **Your soul fades.**                                                          |🌴
🌳|                                                                                 |🌳
🌴|---------------------------------------------------------------------------------|🌴
🌳|                                                                                 |🌳
🌳|   [ Q ] Quit Game ❌                                                            |🌳
🌴|_________________________________________________________________________________|🌴
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳

    )" << endl;
}


void OldManHelp() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴
🌳-----------------------------------------------------------------------------------🌳
🌴|                             🧙 THE OLD MANS GIFT 🧙                              |🌴
🌳|----------------------------------------------------------------------------------|🌳
🌴|                                                                                  |🌴
🌳|   You take a slow step forward. The Old Man **does not move**. His piercing      |🌳
🌴|   eyes remain locked onto yours. He sees everything—your past, your thoughts,    |🌴
🌳|   your fear. And yet, he does not judge.                                         |🌳
🌴|                                                                                  |🌴
🌳|   Finally, he speaks. His voice is **ancient** yet strangely warm.               |🌳
🌴|                                                                                  |🌴
🌳|   **“Few walk the right path. Fewer still survive it.”**                         |🌳
🌴|                                                                                  |🌴
🌳|   He reaches into his robes and pulls out **a small satchel**. Without another   |🌳
🌴|   word, he places it in your hands.                                              |🌴
🌳|                                                                                  |🌳
🌴|   🎁 **You received:**                                                           |🌴
🌳|   - 3x **Healing Potions** 🍷 (Restores 30 HP each)                              |🌳
🌴|   - 1x **Mysterious Elixir** 🌟 (Its effect is unknown...)                       |🌴
🌳|   - 50 Gold Coins 💰                                                             |🌳
🌴|                                                                                  |🌴
🌳|   **The Old Man watches as you inspect the elixir.**                             |🌳
🌴|   **Its liquid shimmers strangely, shifting colors between blue and red.**       |🌴
🌳|                                                                                  |🌳
🌴|   **“Do you trust me?” he asks.**                                                |🌴
🌳|                                                                                  |🌳
🌴|   🌟 **What will you do?**                                                       |🌴
🌳|                                                                                  |🌳
🌴|   [1] **Drink the Mysterious Elixir** 🍷                                         |🌴
🌳|       - It could be powerful… or deadly.                                         |🌳
🌴|                                                                                  |🌴
🌳|   [2] **Refuse to Drink It** 🚫                                                  |🌳
🌴|       - Better not risk it.                                                      |🌴
🌳|                                                                                  |🌳
🌴|----------------------------------------------------------------------------------|🌴
🌳|                                                                                  |🌳
🌴|   Choose your action: (1 or 2)                                                   |🌴
🌳|                                                                                  |🌳
🌴|   [ Q ] Quit Game ❌                                                             |🌴
🌳|__________________________________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}

void PotionDeath() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴
🌳-----------------------------------------------------------------------------------🌳
🌴|                                   ☠️ YOU DIED ☠️                                  |🌴
🌳|---------------------------------------------------------------------------------|🌳
🌴|                                                                                 |🌴   
🌴|   You take the potion. Your lungs **collapse**. The air is gone. Your vision distorts. **Everything  |🌴
🌳|   slows.** You are weightless—drifting through reality itself.                  |🌳
🌴|                                                                                 |🌴
🌳|   The last thing you see is the Old Man’s **piercing eyes** staring through you.|🌳
🌴|   A whisper fills your mind:                                                    |🌴
🌳|                                                                                 |🌳
🌴|   **“You were not ready.”**                                                     |🌴
🌳|                                                                                 |🌳
🌴|   **Your soul fades.**                                                          |🌴
🌳|                                                                                 |🌳
🌴|---------------------------------------------------------------------------------|🌴
🌳|                                                                                 |🌳
🌳|   [ Q ] Quit Game ❌                                                            |🌳
🌴|_________________________________________________________________________________|🌴
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴

    )" << endl;
}

void PotionHelp() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳
🌳-----------------------------------------------------------------------------------🌳
🌴|                              🌟 STRENGTH AWAKENED 🌟                              |🌴
🌳|----------------------------------------------------------------------------------|🌳
🌴|                                                                                  |🌴
🌳|   The elixir slides down your throat, and **a surge of energy explodes** inside  |🌳
🌴|   you. Your muscles tense, your senses sharpen—**every nerve in your body is     |🌴
🌳|   alive.** The pain is overwhelming… and then, suddenly, it’s gone.              |🌳
🌴|                                                                                  |🌴
🌳|   The Old Man watches, then nods. **"You are worthy."**                          |🌳
🌴|                                                                                  |🌴
🌳|   🎁 **You gained:**                                                             |🌳
🌴|   - **Your Attack Damage has Doubled!** ⚔️ x2                                     |🌴
🌳|   - **Your body feels weightless and unstoppable.**                              |🌳
🌴|                                                                                  |🌴
🌳|   **The Old Man turns away and sits back down. He says nothing more.**           |🌳
🌴|   **You feel stronger… but what is the cost?**                                   |🌴
🌳|                                                                                  |🌳
🌴|----------------------------------------------------------------------------------|🌴
🌳|                                                                                  |🌳
🌴|   [ click any button ] Continue ➡️                                                |🌴
🌳|   [ Q ] Quit Game ❌                                                             |🌳
🌴|__________________________________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}


void FinalMeadow() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳--------------------------------------------------------------------------------------------🌳
🌴|                                    🌲 THE FINAL MEADOW 🌲                                |🌴
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌳|   The Old Mans hut fades into the distance behind you. The jungle stretches endlessly,   |🌳
🌴|   its thick canopy shrouding the sky. The air is humid, filled with the distant calls of |🌴
🌳|   unseen creatures. You press on, searching for more adventure.                          |🌳
🌴|                                                                                          |🌴
🌳|   **A full day passes.** You find no ruins, no hidden caves—only endless trees.          |🌳
🌴|   But something **feels wrong.**                                                         |🌴
🌳|                                                                                          |🌳
🌴|   Why does it feel like youre being watched?                                             |🌴
🌳|                                                                                          |🌳
🌴|   As night falls, you stumble upon something strange—a path you dont recall seeing.      |🌴
🌳|   The trees arch unnaturally, forming a twisted tunnel of bark and vines. A force        |🌳
🌴|   **pulls you forward.**                                                                 |🌴
🌳|                                                                                          |🌳
🌴|   With a deep breath, you step through.                                                  |🌴
🌳|                                                                                          |🌳
🌴|   **Morning light blinds you.**                                                          |🌴
🌳|                                                                                          |🌳
🌴|   You have entered a vast, **open meadow.** The jungle is **gone.**                      |🌴
🌳|   The wind howls through the tall grass, whispering **secrets of the fallen.**           |🌳
🌴|                                                                                          |🌴
🌳|   Then… the **earth trembles.**                                                          |🌳
🌴|                                                                                          |🌴
🌳|   A **massive figure rises** from the far end of the meadow.                             |🌳
🌴|                                                                                          |🌴
🌳|   It is **not human.**                                                                   |🌳
🌴|                                                                                          |🌴
🌳|   Bark-like armor covers its towering body. **Golden eyes burn** beneath the             |🌳
🌴|   shadow of an enormous helm. A colossal **war axe** rests in its wooden grasp,          |🌴
🌳|   its blade dripping with **sap like fresh blood.**                                      |🌳
🌴|                                                                                          |🌴
🌳|   The **Tree Sentinel** has been waiting.                                                |🌳
🌴|   It has **always** been waiting.                                                        |🌴
🌳|                                                                                          |🌳
🌴|   🌟 **What will you do?**                                                               |🌴
🌳|                                                                                          |🌳
🌴|   [1] **Fight the Tree Sentinel** ⚔️  - Face the final challenge.                         |🌴
🌳|   [2] **Refuse to Fight** 🚶  - Turn back… if you can.                                   |🌳
🌴|                                                                                          |🌴
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌳|   Choose your action: (1 or 2)                                                           |🌳
🌴|                                                                                          |🌴
🌳|   [ Q ] Quit Game ❌                                                                     |🌳
🌴|__________________________________________________________________________________________|🌴
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}


void FinalBattleBegins() {
    cout << R"(

🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲
🌲                                                                                  🌲
🌲                      ✦ FINAL BATTLE BEGINS ✦                                     🌲
🌲__________________________________________________________________________________🌲
🌲                                                                                  🌲
🌲  The **Tree Sentinel’s** 🌲 golden eyes flare with unearthly light.               🌲
🌲  Its massive body shifts as it grips its **war axe**, the blade dripping with    🌲  
🌲  thick sap, **red like fresh blood.** 🌿                                          🌲
🌲                                                                                   🌲
🌲  The sky darkens. 🌲 The wind dies. The very air **tightens** around you.         🌲  
🌲  The vines hanging from the ancient trees **twist and writhe** as if alive.       🌲  
🌲  The world holds its breath.                                                      🌲
🌲                                                                                   🌲
🌲  Then—                                                                            🌲
🌲  The Tree Sentinel **moves.** 🌲                                                  🌲
🌲                                                                                   🌲
🌲  **It’s impossibly fast.** 🌿                                                     🌲
🌲  A blur of ancient bark and golden fury. The earth trembles beneath its charge.   🌲
🌲  The vines coil around your feet, as if **the jungle itself fights for its king.**🌲
🌲  You have no choice.                                                              🌲
🌲                                                                                   🌲
🌲  **FIGHT OR BE DESTROYED.**                                                       🌲
🌲                                                                                   🌲          
🌲  **Your Health:** [ ❤️ 100 ]           **Tree Sentinel’s Health:** [ 💀 1,000 ]    🌲
🌲                                                                                   🌲
🌲  🌟 **Choose your action:**                                                       🌲
🌲                                                                                   🌲
🌲  [1] **Attack** 🗡️  - Strike with everything you have.                            🌲
🌲  [2] **Dodge** 🏃  - Try to evade its monstrous swings.                           🌲
🌲  [3] **Special Move** 💥  - Use your strongest attack.                            🌲
🌲  [4] **Use Item** 🎒  - Heal or gain an advantage.                                🌲
🌲__________________________________________________________________________________ 🌲
🌲                                                                                   🌲
🌲  🌿 **The Tree Sentinel towers over you.**                                        🌲
🌲  🌿 **The battle for survival has begun.**                                        🌲
🌲                                                                                   🌲
🌲  Choose your action: **(1, 2, 3, or 4)**                                          🌲
🌲                                                                                   🌲
🌲  [ Q ] Quit Game ❌                                                               🌲
🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲🌲

    )" << endl;
}

void WelcomeToUnderworld() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌴🌳🌴🌳🌴🌳
🌳------------------------------------------------------------------------------------------🌳
🌴|                                                                                         |🌴
🌳|                              🚨 YOU CHOSE TO RUN 🚨                                     |🌳
🌴|-----------------------------------------------------------------------------------------|🌴
🌳|                                                                                         |🌳
🌴|   No.                                                                                   |🌴
🌳|   **This thing is not meant to be fought.**                                             |🌳
🌴|   Your instincts scream at you. You turn and **run.**                                   |🌴
🌳|                                                                                         |🌳
🌴|   The ground **shakes** with every step of the **Tree Sentinel.** 🌲                    |🌴
🌳|   The wind howls. The sky turns **black**. The jungle screams.                          |🌳
🌴|   **Something is wrong.**                                                               |🌴
🌳|                                                                                         |🌳
🌴|   Then—                                                                                 |🌴
🌳|   **The ground beneath you collapses.**                                                 |🌳
🌴|   You don’t even have time to scream.                                                   |🌴
🌳|                                                                                         |🌳
🌴|   **You are falling.**                                                                  |🌴
🌳|   **Falling.**                                                                          |🌳
🌴|   **Falling.**                                                                          |🌴
🌳|                                                                                         |🌳
🌴|   The air turns ice cold. Darkness swallows you.                                        |🌴
🌳|   **There is no bottom.**                                                               |🌳
🌴|   The wind is gone. The sky is gone. Everything is **gone.**                            |🌴
🌳|                                                                                         |🌳
🌴|   You hit the ground.                                                                   |🌴
🌳|   **But it does not feel like earth.**                                                  |🌳
🌴|   It is **something else.**                                                             |🌴
🌳|                                                                                         |🌳
🌴|   Slowly, you look up.                                                                  |🌴
🌳|                                                                                         |🌳
🌴|   Above you, the hole **begins to close.** 🌲                                           |🌴
🌳|   The last slivers of light **vanish.** 🌿                                              |🌳
🌴|   **You are trapped.**                                                                  |🌴
🌳|                                                                                         |🌳
🌴|   Welcome to the **Underworld.**                                                        |🌴
🌳|                                                                                         |🌳
🌴|-----------------------------------------------------------------------------------------|🌴
🌳|                                                                                         |🌳
🌴|   [ click any buttons ] Continue ➡️                                                      |🌴
🌳|   [ Q ] Quit Game ❌                                                                    |🌳
🌴|_________________________________________________________________________________________|🌴
🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}

void MeetGrimReaper() {
    cout << R"(

💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀
🪦-------------------------------------------------------------------------------------🪦
💀|                                                                                   |💀
🪦|                       ☠️ YOU HAVE ENTERED THE UNDERWORLD ☠️                         |🪦
💀|-----------------------------------------------------------------------------------|💀
🪦|                                                                                   |🪦
💀|   You awaken in **a world of darkness**. The air is thick with an eerie silence.  |💀
🪦|   The sky above is **black and lifeless**, yet whispers echo in the distance.     |🪦
💀|                                                                                   |💀
🪦|   The ground beneath you is **cold, unnatural**—not stone, not dirt, but **void.**|🪦
💀|   Ahead, a hooded figure **waits**. A towering **Grim Reaper** grips a scythe,    |💀
🪦|   its blade reflecting the **souls of the lost.**                                 |🪦
💀|                                                                                   |💀
🪦|   The figure speaks in a voice **older than time itself**:                        |🪦
💀|                                                                                   |💀
🪦|   **"Your journey has led you here... but fate is not yet sealed."**              |🪦
💀|                                                                                   |💀
🪦|   **"Two paths lie before you."**                                                 |🪦
💀|                                                                                   |💀
🪦|   🌊 **[1] Sail Across the Dead Sea** – A passage into the unknown.               |🪦
💀|      - A ghostly boat awaits, shrouded in mist.                                   |💀
🪦|      - No one knows what lies beyond the water.                                   |🪦
💀|                                                                                   |💀
🪦|   🎲 **[2] Take a Chance for Power** – A gamble with fate itself.                 |🪦
💀|      - The Reaper extends a skeletal hand, offering a cursed elixir.              |💀
🪦|      - **You may gain incredible strength… or suffer a price worse than death.**  |🪦
💀|                                                                                   |💀
🪦|-----------------------------------------------------------------------------------|🪦
💀|                                                                                   |💀
🪦|   **What will you choose?**                                                       |🪦
💀|                                                                                   |💀
🪦|   [1] Sail Across the Dead Sea 🌊                                                 |🪦
💀|   [2] Take the Reaper’s Offer 🎲                                                  |💀
🪦|                                                                                   |🪦
💀|   [ Q ] Quit Game ❌                                                              |💀
🪦|___________________________________________________________________________________|🪦
💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀

    )" << endl;
}

void GrimReaperPotion() {
    cout << R"(

🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊
💀-------------------------------------------------------------------------------------💀
🌊|                                                                                   |🌊
💀|                 ⛵ YOU HAVE CHOSEN TO SAIL THE DEAD SEA ⛵                        |💀
🌊|-----------------------------------------------------------------------------------|🌊
💀|                                                                                   |🌊
🌊|   You step onto a **ghostly vessel**, its wooden frame creaking under unseen      |💀
💀|   weight. The **waters are eerily still**, black as ink, reflecting nothing.      |🌊
🌊|                                                                                   |💀
💀|   The Grim Reaper watches in silence as the ship pulls away from the shore.       |🌊
🌊|   A **cold wind howls**, carrying whispers of the lost souls who sailed before.   |💀
💀|                                                                                   |🌊
🌊|   **The horizon vanishes.** You sail toward **the unknown.**                      |💀
💀|                                                                                   |🌊
🌊|   Hours pass... or perhaps minutes. **Time has no meaning here.**                 |💀
💀|   Then, suddenly, a **glow** emerges from the depths beneath the ship.            |🌊
🌊|   **A force surges through your body.**                                           |💀
💀|                                                                                   |🌊
🌊|   **You have been blessed.**                                                      |💀
💀|                                                                                   |🌊
🌊|   🎁 **Rewards from the Dead Sea:**                                               |💀
💀|      - **+20 Maximum Health** ❤️                                                   |🌊
🌊|      - **Cursed Warriors Strength** 💀 (Increased damage vs. the Final Boss)      |💀
💀|                                                                                   |🌊
🌊|                                                                                   |💀
💀|-----------------------------------------------------------------------------------|🌊
🌊|                                                                                   |💀
💀|   **You feel stronger. The final battle approaches.**                             |🌊
🌊|                                                                                   |💀
💀|   [ click any button ] Continue ➡️                                                 |🌊
🌊|   [ Q ] Quit Game ❌                                                              |💀
💀|___________________________________________________________________________________|🌊
🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀🌊💀💀🌊💀🌊💀🌊💀🌊💀🌊

    )" << endl;
}

void ThreeDogFight() {
    cout << R"(

🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥
💀-------------------------------------------------------------------------------------💀
🔥|                                                                                   |🔥
💀|                  Cerberus, Guardian of the Underworld, Blocks Your Path!          |🔥
🔥|-----------------------------------------------------------------------------------|💀
💀|                                                                                   |🔥
🔥|   As you step forward, the ground **rumbles violently** beneath your feet.        |💀
💀|   A **deep, guttural growl** echoes through the darkness.                         |🔥
🔥|   Emerging from the shadows, a **massive, three-headed beast** stares you down.   |💀
💀|                                                                                   |🔥
🔥|   Its fangs drip with a **black venom**, and **fire burns** in its crimson eyes.  |💀
💀|   **Cerberus, the Guardian of the Underworld, has come to devour you.**           |🔥
🔥|                                                                                   |💀
💀|   There is no escape. **You must fight.**                                         |🔥
🔥|                                                                                   |💀
💀|   🌟 **BATTLE BEGINS**                                                            |🔥
🔥|                                                                                   |💀
💀|   **Your Health:** [ ❤️ 100 ]     **Cerberus’ Health:** [ 💀 250 ]                 |🔥
🔥|                                                                                   |💀
💀|   🔥 **Choose your action:**                                                      |🔥
🔥|                                                                                   |💀
💀|   [1] **Attack** 🗡️  - Strike with everything you have.                           |🔥
🔥|   [2] **Dodge** 🏃  - Try to evade its fiery breath.                              |💀
💀|   [3] **Special Move** 💥  - Unleash a powerful attack.                           |🔥
🔥|   [4] **Use Item** 🎒  - Heal or gain an advantage.                               |💀
💀|                                                                                   |🔥
🔥|-----------------------------------------------------------------------------------|💀
💀|                                                                                   |🔥
🔥|   **The beast roars, shaking the very foundations of the Underworld.**            |💀
💀|   **The battle for your survival begins now.**                                    |🔥
🔥|                                                                                   |💀
💀|   Choose your action: (1, 2, 3, or 4)                                             |🔥
🔥|                                                                                   |💀
💀|   [ Q ] Quit Game ❌                                                              |🔥
🔥|___________________________________________________________________________________|💀
💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥

    )" << endl;
}

void DogDeathScreen() {
    cout << R"(

🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀💀🔥💀💀🔥💀
💀                                                                               💀
💀────────────────────────────────────────────────────────────────────────────── 💀
💀                      ☠ YOU HAVE BEEN DEFEATED ☠                               💀
💀───────────────────────────────────────────────────────────────────────────────💀
💀                                                                               💀
💀 **Cerberus rears back, its three monstrous heads roaring in triumph.**        💀
🔥 Flames erupt from its maw, engulfing your body in an **infernal blaze.**      💀
💀 **Your screams echo through the Underworld… then silence.**                   💀
💀                                                                               💀
💀 **The Reaper watches, unmoving.**                                             💀
💀 **Another soul claimed. Another warrior lost.**                               💀
💀                                                                               💀
💀The Underworld has no mercy.                                                   💀
💀                                                                               💀
💀 **You are now nothing more than a whisper in the void.**                      💀
💀                                                                               💀
💀───────────────────────────────────────────────────────────────────────────────💀                 
💀                                                                               💀
💀 [ Q ] Quit Game ❌                                                            💀  
💀                                                                               💀
🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀💀🔥💀💀🔥💀

    )" << endl;
}

void DogVictoryScreen() {
    cout << R"(

🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥
💀-------------------------------------------------------------------------------------💀
🔥|                                                                                   |🔥
💀|                  Cerberus, Guardian of the Underworld, Blocks Your Path!          |🔥
🔥|-----------------------------------------------------------------------------------|💀
💀|                                                                                   |🔥
🔥|   As you step forward, the ground **rumbles violently** beneath your feet.        |💀
💀|   A **deep, guttural growl** echoes through the darkness.                         |🔥
🔥|   Emerging from the shadows, a **massive, three-headed beast** stares you down.   |💀
💀|                                                                                   |🔥
🔥|   Its fangs drip with a **black venom**, and **fire burns** in its crimson eyes.  |💀
💀|   **Cerberus, the Guardian of the Underworld, has come to devour you.**           |🔥
🔥|                                                                                   |💀
💀|   There is no escape. **You must fight.**                                         |🔥
🔥|                                                                                   |💀
💀|   🌟 **BATTLE BEGINS**                                                            |🔥
🔥|                                                                                   |💀
💀|   **Your Health:** [ ❤️ 100 ]     **Cerberus’ Health:** [ 💀 250 ]                 |🔥
🔥|                                                                                   |💀
💀|   🔥 **Choose your action:**                                                      |🔥
🔥|                                                                                   |💀
💀|   [1] **Attack** 🗡️  - Strike with everything you have.                           |🔥
🔥|   [2] **Dodge** 🏃  - Try to evade its fiery breath.                              |💀
💀|   [3] **Special Move** 💥  - Unleash a powerful attack.                           |🔥
🔥|   [4] **Use Item** 🎒  - Heal or gain an advantage.                               |💀
💀|                                                                                   |🔥
🔥|-----------------------------------------------------------------------------------|💀
💀|                                                                                   |🔥
🔥|   **The beast roars, shaking the very foundations of the Underworld.**            |💀
💀|   **The battle for your survival begins now.**                                    |🔥
🔥|                                                                                   |💀
💀|   Choose your action: (1, 2, 3, or 4)                                             |🔥
🔥|                                                                                   |💀
💀|   [ Q ] Quit Game ❌                                                              |🔥
🔥|___________________________________________________________________________________|💀
💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥💀🔥

    )" << endl;
}


void RejectGrimReaper() {
    cout << R"(

💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦
🪦-------------------------------------------------------------------------------------🪦
💀|                                                                                   |💀
🪦|                      ☠️ YOU REJECT THE GRIM REAPER’S OFFER ☠️                       |🪦
💀|-----------------------------------------------------------------------------------|💀
🪦|                                                                                   |🪦
💀|   The Grim Reaper’s hollow eyes **glow with amusement.**                          |🪦
🪦|   “Foolish,” it whispers. “You defy fate itself.”                                 |💀
💀|                                                                                   |🪦
🪦|   The **air tightens** around you. The Underworld itself begins to tremble.       |💀
💀|   A **cold wind howls**, swirling dust and shadows.                               |🪦
🪦|                                                                                   |💀
💀|   **The Reaper lifts its scythe.** A force beyond comprehension engulfs you.      |🪦
🪦|   **The void swallows your body whole.**                                          |💀
💀|                                                                                   |🪦
🪦|   **Everything turns black.**                                                     |💀
💀|                                                                                   |🪦
🪦|   A heartbeat.                                                                    |💀
💀|   Another.                                                                        |🪦
🪦|                                                                                   |💀
💀|   **Light pierces through your closed eyes.**                                     |🪦
🪦|                                                                                   |💀
💀|   You awaken in a **vast, open meadow.**                                          |🪦
🪦|   **The jungle is gone. The wind is still. The world waits.**                     |💀
💀|                                                                                   |🪦
🪦|   A **golden light looms ahead.** A massive figure stands before you.             |💀
💀|   **The Tree Sentinel.**                                                          |🪦
🪦|                                                                                   |💀
💀|   It has been waiting.                                                            |🪦
🪦|   **The Final Battle begins now.**                                                |💀
💀|                                                                                   |🪦
🪦-------------------------------------------------------------------------------------🪦
💀|                                                                                   |💀
🪦|   [ click any button ] Continue ➡️                                                 💀
💀|   [ Q ] Quit Game ❌                                                              |🪦
🪦|___________________________________________________________________________________|💀
💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦🪦💀🪦💀🪦💀🪦💀🪦💀🪦💀🪦🪦💀🪦💀🪦💀🪦💀💀🪦💀🪦

    )" << endl;
}


void ScenarioTwo() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌳|                          🌉 CROSSING THE RAGING BRIDGE 🌉                                |🌳
🌴|------------------------------------------------------------------------------------------|🌴
🌳|                                                                                          |🌳
🌴|   The jungle path narrows. Before you, a **wooden bridge sways violently** above a       |🌴
🌳|   **raging river**. The water crashes against jagged rocks, swallowing anything that     |🌳
🌴|   dares to fall. **One misstep, and you will not survive.**                              |🌴
🌳|                                                                                          |🌳
🌴|   You take a deep breath and step forward. The bridge **groans** under your weight.      |🌴
🌳|   The wind howls, tearing through the vines like whispers of warning.                    |🌳
🌴|                                                                                          |🌴
🌳|   Suddenly, a **deep, guttural laugh** echoes through the trees.                         |🌳
🌴|   **A massive figure blocks your path.**                                                 |🌴
🌳|                                                                                          |🌳
🌴|   **A troll, twice your size, with skin like cracked stone and eyes like embers,**       |🌴
🌳|   steps forward. It grips a massive club, resting it lazily against its shoulder.        |🌳
🌴|                                                                                          |🌴
🌳|   "No one crosses my bridge without a challenge," it grumbles, its voice like thunder.   |🌳
🌴|   "Answer my **riddle**, and you may pass. Fail... and the river shall take you."        |🌴
🌳|                                                                                          |🌳
🌴|   The troll leans forward, a wicked grin spreading across its face.                      |🌴
🌳|   "Here is your riddle, traveler..."                                                     |🌳
🌴|                                                                                          |🌴
🌳|                                                                                          |🌳
🌴|                                                                                          |🌴
🌳|   🌟 **What is your answer?**                                                            |🌳
🌴|                                                                                          |🌴
🌳|   [1] Answer the Riddle 🧠                                                               |🌳
🌳|   [2] Attempt to Run Across the Bridge 🏃‍♂️                                                |🌳
🌴|                                                                                          |🌴
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌳|   **Choose your action wisely.**                                                         |🌳
🌴|                                                                                          |🌴
🌳|   [ Q ] Quit Game ❌                                                                     |🌳
🌴|__________________________________________________________________________________________|🌴
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}

void PassRiddle() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳------------------------------------------------------------------------------------------🌳
🌴|                                                                                         |🌴
🌳|                      🏆 YOU SOLVED THE RIDDLE! SAFE PASSAGE GRANTED 🏆                  |🌳
🌴|-----------------------------------------------------------------------------------------|🌴
🌳|                                                                                         |🌳
🌴|   The trolls fiery eyes narrow as it listens to your answer. A deep silence follows.    |🌴
🌳|                                                                                         |🌳
🌴|   Then, with a thunderous laugh, it steps aside.                                        |🌴
🌳|   "Hmph. You are smarter than you look, traveler. You may pass."                        |🌳
🌴|                                                                                         |🌴
🌳|   It **lumbers away**, grumbling about "clever little mortals" as the bridge stills.    |🌳
🌴|   The raging river below continues its **eternal fury**, but your path is now clear.    |🌴
🌳|                                                                                         |🌳
🌴|   With cautious steps, you cross the bridge, entering **the deep jungle beyond.**       |🌴
🌳|                                                                                         |🌳
🌴|   The air grows **thicker with magic.** The trees twist unnaturally.                    |🌴
🌳|   A **strange presence looms ahead.**                                                   |🌳
🌴|                                                                                         |🌴
🌳|   Suddenly, a **robed figure** steps into your path.                                    |🌳
🌴|   **A dark mage, clad in flowing crimson, raises a gnarled staff.**                     |🌴
🌳|   Its voice is sharp, cutting through the jungle air.                                   |🌳
🌴|   "You should not have come this far, mortal..."                                        |🌴
🌳|                                                                                         |🌳
🌴|   **The air crackles with energy. The mage attacks!**                                   |🌴
🌳|                                                                                         |🌳
🌴|-----------------------------------------------------------------------------------------|🌴
🌳|                                                                                         |🌳
🌴|   [ ENTER ] Continue ➡️                                                                  |🌴
🌳|   [ Q ] Quit Game ❌                                                                    |🌳
🌴|_________________________________________________________________________________________|🌴
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}

void FailRiddle() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳------------------------------------------------------------------------------------------🌳
🌴|                                                                                          |🌴
🌳|                          ☠️ YOU FAILED THE RIDDLE. DEATH AWAITS. ☠️                        |🌳
🌴|------------------------------------------------------------------------------------------|🌴
🌳|                                                                                          |🌳
🌴|   The troll tilts its massive head, grinning.                                            |🌴
🌳|   "Hah! A foolish answer! I tire of this game."                                          |🌳
🌴|                                                                                          |🌴
🌳|   Before you can react, **its massive hand slams into your chest!**                      |🌳
🌴|   The force is **unimaginable**—you are lifted into the air.                             |🌴
🌳|                                                                                          |🌳
🌴|   The world blurs. The sound of **roaring water fills your ears.**                       |🌴
🌳|   You plummet.                                                                           |🌳
🌴|                                                                                          |🌴
🌳|   The last thing you see is **the jagged rocks below** rushing toward you.               |🌳
🌴|   **Impact.**                                                                            |🌴
🌳|                                                                                          |🌳
🌴|   The river claims another soul.                                                         |🌴
🌳|                                                                                          |🌳
🌴|------------------------------------------------------------------------------------------|🌴
🌳|                                                                                          |🌳
🌳|   [ Q ] Quit Game ❌                                                                     |🌳
🌴|__________________________________________________________________________________________|🌴
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}

void MageFight() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌳|                          ⚔️ BATTLE AGAINST THE DARK MAGE ⚔️                                |🌳
🌴|------------------------------------------------------------------------------------------|🌴
🌳|                                                                                          |🌳
🌴|   The dark mage **raises a skeletal hand**, its fingers crackling with **black energy.** |🌴
🌳|   "You do not belong here, mortal," it hisses.                                           |🌳
🌴|   **A surge of dark energy rushes toward you!**                                          |🌴
🌳|                                                                                          |🌳
🌴|   The trees **bend unnaturally** as the air warps with raw magic.                        |🌴
🌳|   Your **only chance is to fight.**                                                      |🌳
🌴|                                                                                          |🌴
🌳|   🌟 **BATTLE BEGINS**                                                                   |🌳
🌴|                                                                                          |🌴
🌳|   **Your Health:** [ ❤️ 100 ]     **Dark Mages Health:** [ 💀 250 ]                       |🌳
🌴|                                                                                          |🌴
🌳|   🔥 **Choose your action:**                                                             |🌳
🌴|                                                                                          |🌴
🌳|   [1] **Attack** 🗡️  - Strike with everything you have.                                  |🌳
🌴|   [2] **Dodge** 🏃  - Try to evade its deadly spells.                                    |🌴
🌳|   [3] **Special Move** 💥  - Unleash a powerful attack.                                  |🌳
🌴|   [4] **Use Item** 🎒  - Heal or gain an advantage.                                      |🌴
🌳|                                                                                          |🌳
🌴-------------------------------------------------------------------------------------------|🌴
🌳|                                                                                          |🌳
🌴|   **The mage’s eyes glow. The jungle quakes. The fight begins.**                         |🌴
🌳|                                                                                          |🌳
🌴|   Choose your action: (1, 2, 3, or 4)                                                    |🌴
🌳|                                                                                          |🌳
🌴|   [ Q ] Quit Game ❌                                                                     |🌴
🌳|__________________________________________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳

    )" << endl;
}

void MageDeath() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌴🌳🌳
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌳|                          ☠️ YOU HAVE BEEN DEFEATED ☠️                                      |🌳
🌴|------------------------------------------------------------------------------------------|🌴
🌳|                                                                                          |🌳
🌴|   The mage raises its **staff high, chanting words older than time itself.**             |🌴
🌳|   A **shadowy force engulfs your body**, seeping into your bones.                        |🌳
🌴|   **Your limbs go numb. Your vision darkens.**                                           |🌴
🌳|                                                                                          |🌳
🌴|   "Another soul for my collection," the mage whispers.                                   |🌴
🌳|                                                                                          |🌳
🌴|   Your **mind fades into the void**.                                                     |🌴
🌳|   **You have become one of the cursed.**                                                 |🌳
🌴|                                                                                          |🌴
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌴|   [ Q ] Quit Game ❌                                                                     |🌴
🌳|__________________________________________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌴🌳🌳

    )" << endl;
}

void MageVictory() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌴🌳🌳🌳🌳🌳🌳
🌳|                        🏆 VICTORY! THE MAGE HAS FALLEN! 🏆                               |🌳
🌴|------------------------------------------------------------------------------------------|🌴
🌳|                                                                                          |🌳
🌴|   With one final strike, **your weapon pierces through the mage’s chest.**               |🌴
🌳|   Its **staff shatters**, releasing a wave of dark energy into the sky.                  |🌳
🌴|   The jungle **seems to breathe again, relieved from the presence of evil.**             |🌴
🌳|                                                                                          |🌳
🌴|   But something is wrong.                                                                |🌴
🌳|   A searing pain **surges through your veins.**                                          |🌳
🌴|   "Fool..." the mage whispers, smirking. "Even in death, my curse lingers."              |🌴
🌳|                                                                                          |🌳
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌴|     Choose quickly. The Poison is Spreading Fast                                         |🌴
🌳|------------------------------------------------------------------------------------------|🌳      
🌳|   [ click any button ] Drink the Potion                                                  |🌳
🌴|   [ Q ] Quit Game ❌                                                                     |🌴
🌳|__________________________________________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌴🌳🌳🌳🌳🌳🌳🌳🌳
    )" << endl;
}


void MagePoisonDeath() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌳🌳🌳🌳🌳
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌳|                          ☠️ THE POTION WAS POISON ☠️                                       |🌳
🌴|------------------------------------------------------------------------------------------|🌴
🌳|                                                                                          |🌳
🌴|   Desperate, you **uncork the vial and drink deeply.**                                   |🌴
🌳|   A wave of warmth rushes through your body—relief, at last.                             |🌳
🌴|                                                                                          |🌴
🌳|   But something is wrong.                                                                |🌳
🌴|   Your **heart races violently**. Your limbs grow **heavy**.                             |🌴
🌳|   **Your veins burn.** The world tilts, darkness creeping into your vision.              |🌳
🌴|                                                                                          |🌴
🌳|   The mages **last words echo in your mind.**                                            |🌳
🌴|   "Fool. Did you really think I would not have the last laugh?"                          |🌴
🌳|                                                                                          |🌳
🌴|   You collapse to the ground, your fingers twitching as the last breath leaves you.      |🌴
🌳|   **The jungle watches silently as your body turns cold.**                               |🌳
🌴|                                                                                          |🌴
🌳|   **You have been cursed to death.**                                                     |🌳
🌴|                                                                                          |🌴
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌴|   [ Q ] Quit Game ❌                                                                     |🌴
🌳|__________________________________________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌳🌳🌳🌳🌳

    )" << endl;
}


void MagePoisonSurvive() {
    cout << R"(

🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌴🌳🌳🌳🌳🌳🌳
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌳|                        🏆 YOU HAVE SURVIVED THE MAGE’S CURSE 🏆                          |🌳
🌴|------------------------------------------------------------------------------------------|🌴
🌳|                                                                                          |🌳
🌴|   You clutch your chest as the curse **fights back against the healing potion.**         |🌴
🌳|   Your body trembles, your vision flickers, but you grit your teeth and **endure.**      |🌳
🌴|                                                                                          |🌴
🌳|   The magic **burns away**, leaving you **weak, but alive.**                             |🌳
🌴|   The jungle seems **brighter**, as if the world itself has recognized your strength.    |🌴
🌳|                                                                                          |🌳
🌴|   You take a deep breath and press forward.                                              |🌴
🌳|   **Your journey is not over. The final trial awaits.**                                  |🌳
🌴|                                                                                          |🌴
🌳|------------------------------------------------------------------------------------------|🌳
🌴|                                                                                          |🌴
🌳|   [ click any button ] Continue ➡️                                                        |🌳
🌴|   [ Q ] Quit Game ❌                                                                     |🌴
🌳|__________________________________________________________________________________________|🌳
🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌴🌳🌳🌴🌳🌳🌳🌳🌳🌳🌳🌳

    )" << endl;
}




