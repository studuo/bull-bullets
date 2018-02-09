#ifndef DEF_HERO
#define DEF_HERO

#include <Weapon.h>
#include <Armor.h>
#include <Inventory.h>
#include <Stats.h>
#include <Loot.h>
#include <Object.h>
#include <Coordinates.h>

class Character {
    // Attributes
    private:
    string name;
    int healthPoints;
    int manaPoints;
    int stamina;
    int defense;
    int maxHealthPoints;
    int maxManaPoints;
    int maxStamina;
    Stats stats;
    Weapon weapons;
    Armor armors;
    
    public:
    void attack(Character &target) {
        // Attack
    }
    
    void heal() {
        // Self-Heal
    }
    
    void getDefense() {
        // Pure defense + armor defense
    }
}; 

class Hero : public Character {
    // Attributes
    private:
    int dollars;
    Inventory inventory;
    Coordinates coordinates;
    
    public:
    void openInventory() {
        // Open Inventory
    }
    
    void flee() {
        // Quit fight
    }
};

class Enemy : public Character {
    // Attributes
    private:
    Loot loot;
};

#endif
