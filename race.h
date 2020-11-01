#ifndef DND_RACE_H
#define DND_RACE_H
#include <iostream>

class Race{
private:
    //The name of the race
    std::string _name;

    //Proficiency of the race
    //every race is especially good
    //with one weapon type
    std::string _proficiency;

    //passive points
    //every race has differently
    //allocated stat points
    //thus elves make good mages since
    //they've got more mana
    //orcs good fighters since they've
    //got plenty of bonus health, etc.
    int _health_points;
    int _mana_points;
public:
    //default constructor
    Race();

    //Constructor
    // 1st argument
    // the name of the race
    // 2nd argument
    // proficiency
    // 3rd and 4th arguments - stat points
    Race(const std::string& , const std:: string& , int, int);

    // get-ers
    std::string get_race_name() const;
    int get_health_points() const;
    int get_mana_points() const;
    std::string get_race_proficiency();
};


// races shall be predefined
class Human : public Race{
public:
    Human();
};

class Orc : public Race{
public:
    Orc();
};

class Elf : public Race{
public:
    Elf();
};

#endif //DND_RACE_H
