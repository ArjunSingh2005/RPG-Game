#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <string>

class Characters {
    private:
        std::string name;
        int HP;
        int MaxHP;

    public:
        Characters() : name(""), HP(0), MaxHP(0) {};
        Characters(std::string name, int HP, int MaxHP) : name(name), HP(HP), MaxHP(MaxHP) {};

        std::string getName() const;
        int getHP() const;
        void setHP(int amount);
        int getMaxHP() const;
        void setMaxHP(int n);

};

#endif
