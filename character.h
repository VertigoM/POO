#ifndef DND_CHARACTER_H
#define DND_CHARACTER_H
#include <iostream>
#include "race.h"
#include "specialization.h"

class Character{
private:
    std::string _name;
public:
    //default constructor
    Character();

    Race _race;

    Specialization* _specialization;

    std::string get_name();

    //Constructor
    // 1st argument - the name of the character
    // 2nd argument - the race of the character
    // 3rd argument - the specialization of the character
    Character(const std::string&, const Race&, Specialization*);

    //ostream::operator<<
    friend std::ostream& operator<< (std::ostream&, const Character&);

    //copy constructor
    Character(const Character &character);

    //move constructor
    Character(Character&&);

    //Destructor
    ~Character();
};

#endif //DND_CHARACTER_H
