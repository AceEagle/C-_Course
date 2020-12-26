#include "Weapon.h"

#include <string>

using namespace std;

Weapon::Weapon(): m_name("Épée de base"), m_damage(10){

}

Weapon::Weapon(string name, int damage): m_name(name), m_damage(damage){

}

void Weapon::change(std::string nom, int damage) {
    m_name = nom;
    m_damage = damage;
}
void Weapon::show() const {
    cout << "Le nom est: " << m_name << "et il fait " << m_damage << "de degats!" << endl;
}

int Weapon::getDamage() const {
    return m_damage;
}

