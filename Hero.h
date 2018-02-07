#include <Weapon.h>
#include <Armor.h>
#include <Inventory.h>
#include <Stats.h>
#include <Loot.h>
#include <Object.h>

class Character {
    // Attributes
    private:
    string name;
    int healthPoints;
    int manaPoints;
    int stamina;
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
}; 

class Hero : public Character {
    // Attributes
    private:
    int dollars;
    Inventory inventory;
    
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
