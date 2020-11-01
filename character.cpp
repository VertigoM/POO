#include "character.h"

//default constructor
Character::Character() = default;


Character::Character(const std::string& name, const Race& race, Specialization* specialization){
    this -> _name = name;
    this -> _race = race;
    this -> _specialization = specialization;
}

std::ostream& operator<< (std::ostream& os, const Character& character){
    os << "Character details:\n";
    os << "[Name]: " << character._name << std::endl;
    os << "[Race]: " << character._race.get_race_name() << std::endl;
    os << "[Specialization]: " << character ._specialization -> get_name() << std::endl;
    os << "[PASSIVE STATS]:\n";
    os << "[Mana points]: " << character._race.get_health_points() << std::endl;
    os << "[Health points]: " << character._race.get_mana_points() << std::endl;
    return os;
}


//copy constructor
Character::Character(const Character& character):
        _name(character._name),
        _race(character._race){
    std::cout << "Copy constructor called!\n";
    _specialization = new Specialization;
    *_specialization = *(character._specialization);
}


//move constructor
Character::Character(Character&& character):
        _name(character._name),
        _race(character._race),
        _specialization(character._specialization){ }


std::string Character::get_name() {
    return this -> _name;
}

Character::~Character() {
    std::cout << this -> get_name() << " committed ritual sudoku.\n";
    delete _specialization;
}