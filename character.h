#ifndef DND_CHARACTER_H
#define DND_CHARACTER_H
#include "specialization.h"
#include "races.h"

class Character{
private:
    std::string _name;
public:
    Character();
    Race _race;
    Specialization _specialization;
    std::string get_name();
    Character(const std::string&, const Race&, const Specialization&);
    friend std::ostream& operator<< (std::ostream&, const Character&);
    Character(const Character &character);
    ~Character();
};

Character::Character() = default;

Character::Character(const std::string& name, const Race& race, const Specialization& specialization):
    _name(name),
    _race(race),
    _specialization(specialization){ }

std::string Character::get_name() {
    return this -> _name;
}

std::ostream& operator<< (std::ostream& os, const Character& character){
    os << "Character details:\n";
    os << "[Name]: " << character._name << std::endl;
    os << "[Race]: " << character._race.get_race_name() << std::endl;
    os << "[Specialization]: " << character._specialization.get_name() << std::endl;
    os << "[PASSIVE STATS]:\n";
    os << "[Mana points]: " << character._race.get_health_points() << std::endl;
    os << "[Health points]: " << character._race.get_mana_points() << std::endl;
    return os;
}

Character::Character(const Character &character):
    _name(character._name),
    _race(character._race){ }

Character::~Character() {
    std::cout << this -> get_name() << " committed ritual sudoku.";
}

#endif //DND_CHARACTER_H
