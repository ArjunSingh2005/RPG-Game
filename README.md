# Welcome to the Jungle

## Project Description
* Welcome to the Jungle is a text-based (RPG) where players will step into the shoes of adventurers to complete objectives and ultimately make it out of the jungle alive. Every decision players make will shape their journey as they battle fierce creatures, make daring escapes and uncover vast treasures. The goal of the game is to not only escape the jungle, but also collect as many points as possible. This game combines rich storytelling and strategic combat to create an immersive experience for the user. This project is important to us because it will allow us to combine our technical skills with our creative thinking. This project will also allow us to showcase our ability to turn our vision into a functional, interactive game.
* About the programming, we plan to use C++ for all the backend programming for this game. We are sufficient in object-oriented programming and data structures. We can build character classes and inventory systems. For our IDE, we will primarily use Visual Studio Code for all of our programming and debugging. It has a good and intuitive user interface which makes it easy to debug and switch between files. 
* In the case of the input, it would be the player’s answers to the narrative-based questions or prompts. Each choice the player makes affects the direction of the storyline. The output will be the next scenario (including dialogue, events, or challenges) which would be generated based on those choices, curated from multiple branching storylines. 
* Our RPG game provides a multitude of features that revolve around abilities, combat systems, dialogue choices, story-driven quests, and character creation. Abilities grant special powers or spells that can be acquired and upgraded, while diverse combat systems encourage strategic thinking. Branching dialogues and moral decisions shape the narrative, relationships, and quest outcomes. Finally, players create their own hero, forging a personal journey across a richly detailed storyline.


## User Interface Specification
* https://docs.google.com/document/d/1kgQBTwwEEYCpd4VqvfwuEOTSNPUp1t7wAisDgYkUGfc/edit?tab=t.0#heading=h.b00ekfaaodij

### Navigation Diagram

 ![NavigationDiagram](https://github.com/user-attachments/assets/12262c24-051f-435d-aa33-2cb438a296e9)

### Screen Layouts
* https://docs.google.com/presentation/d/1OjMEE8s1l3jjkL72ao_T7QybXBuT0xIVk_aiDXAKoQY/edit?usp=sharing

## Class Diagram
 ![image](https://github.com/user-attachments/assets/e7734ead-acf9-4e76-a8a8-11219c5c2c11)
* This UML class diagram describes a simple text-based RPG. Game, Player, NPC, Character, Inventory, and Item are the six main classes of the game. Player and NPC are inherited from Character. Dog, Spider, OldMan, FinalBoss, Mage, and GrimReaper are the enemies Player is going to face which are inherited in NPC. In Game class, Player can interact with NPCs. There is a relationship between Player and Inventory, which is aggregation. It means Player has an Inventory. And Inventory holds Items so the relationship between these two is composition. The diagram shows the structure of the game and makes the implementation easier.
* We changed the UML diagram from what it was before.
* We looked at the UML diagram and made sure that it fits with the S.O.L.I.D principles.
* We applied the Single Responsibility Principle (SRP) by ensuring that each class has one well-defined responsibility. In our UML, we separated the combat system from the overall game system, so each module has only one reason to change. Also, the design was refactored by extracting the combat-related functionality into its own dedicated CombatSystem class. This change isolates combat operations from the main game logic. This improves our code by making a cleaner codebase with the responsibilities being clearly separated. Improved the maintainability with the changes to the classes without affecting the broader game logic. Lastly, enhanced the classes to make sure that they all have a focused purpose, which simplifies testing and future development. 
 
 ## Screenshots
 ![image](https://github.com/user-attachments/assets/f21e5eab-2bb7-441f-bc03-d5c300c838b2)
 ![image](https://github.com/user-attachments/assets/36edb83c-cbe6-451e-8b0c-16757854197c)
 ![image](https://github.com/user-attachments/assets/a3286af7-3e24-440f-94ff-4d84be5e47cf)
 ![image](https://github.com/user-attachments/assets/0398e134-7e3c-4d1d-b640-7dfe2d2293cf)
 ![image](https://github.com/user-attachments/assets/0ddfa777-3cd0-44f3-9965-30faece539c7)
 ![image](https://github.com/user-attachments/assets/03d22706-73c1-49f2-b13b-67175c1be434)
 ![image](https://github.com/user-attachments/assets/30e0563d-72c9-4526-8eda-e393fa61192a)
 ![image](https://github.com/user-attachments/assets/5ba45b67-efe6-4011-84d0-c2d9d00fddd2)
 ![image](https://github.com/user-attachments/assets/05c1803c-6bc2-44a0-812d-85c025a8ca0c)
 ![image](https://github.com/user-attachments/assets/ffef79f8-6d95-43db-a463-cb6cc7fbc590)
 ![image](https://github.com/user-attachments/assets/f347a92d-078e-47fa-b26b-37d4932770af)
 ![image](https://github.com/user-attachments/assets/af02368f-9b35-4088-b108-e4e72e40154f)
 ![image](https://github.com/user-attachments/assets/d9d7b429-9308-457b-8040-a57b2cfc960c)
 ![image](https://github.com/user-attachments/assets/223ed4b5-628e-46be-9947-c079378b3435)
 ![image](https://github.com/user-attachments/assets/0d6f5111-82d8-4f49-883e-65cb774d14f2)
 ![image](https://github.com/user-attachments/assets/4001fe3f-a475-4936-bc38-f59ae4d7de43)



 ## Installation/Usage
 1. Clone the repository: git clone https://github.com/cs100/final-project-cs100_sec023_projectgroup8.git
 2. Navigate to the project directory: cd final-project-cs100_sec023_projectgroup8
 3. Create a build directory and Navigate to build directory: mkdir RPG && cd RPG
 4. Run CMake: cmake ..
 5. Compile the project: make
 6. Run the application: ./bin/RPGGame

 ## Testing
 * The project has been tested using Google Test (gtest) framework.
 
