#ifndef CPLUS_COURSE_CHARACTER_H
#define CPLUS_COURSE_CHARACTER_H

#include <string>
#include <iostream>
#include "Weapon.h"

class Character {

public:

    Character();
    Character(std::string weaponName, int weaponDamage);
    ~Character();
    void takeDamage(int damageNb);
    void attack(Character &target);
    void drinkHealthPotion(int potionQte);
    void changeWeapon(std::string newWeaponName, int newWeaponDamage);
    bool isAlive() const;
    void showState() const;

private:

    int m_health;
    int m_mana;
    Weapon m_weapon;
};

#endif
