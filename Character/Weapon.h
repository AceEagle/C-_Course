#ifndef CPLUS_COURSE_WEAPON_H
#define CPLUS_COURSE_WEAPON_H

#include <iostream>
#include <string>

class Weapon {
public:

    Weapon();
    Weapon(std::string name, int damage);
    void change(std::string nom, int damage);
    void show() const;
    int getDamage() const;
private:

    std::string m_name;
    int m_damage;
};

#endif