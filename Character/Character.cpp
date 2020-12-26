#include "Character.h"

#include <string>

using namespace std;


Character::Character(): m_health(100), m_mana(100){
}

Character::Character(string weaponName, int weaponDamage): m_health(100), m_mana(100), m_weapon(weaponName, weaponDamage) {

}

Character::~Character() {

}

void Character::takeDamage(int damageNb){
    m_health -= damageNb;

    if (m_health < 0){
        m_health = 0;
    }
}

void Character::attack(Character &target){
    target.takeDamage(m_weapon.getDamage());
}

void Character::drinkHealthPotion(int potionQte){
    m_health += potionQte;

    if(m_health > 100){
        m_health = 100;
    }
}

void Character::changeWeapon(string newWeaponName, int newWeaponDamage){
    m_weapon.change(newWeaponName, newWeaponDamage);
}

bool Character::isAlive() const{
    return m_health > 0;
}

void Character::showState() const {
    cout << "Health : " << m_health << endl;
    cout << "Mana : " << m_mana << endl;
    m_weapon.show();
}
