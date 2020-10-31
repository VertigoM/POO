/*#ifndef DND_DUMMY_H
#define DND_DUMMY_H

#include <iostream>

class Specialization{
public:
    class Wizzard{
        public:
            Wizzard();
            void cast_fire_ball();
            void cast_fire_nova();
    };
    friend class Wizzard;
    class Warrior{
        public:
            Warrior();
            void cast_whirlwind();
            void cast_berserker_rage();
    };
    Specialization();
    explicit Specialization(const std::string&);
    std::string get_name() const;
private:
    std::string _name;
};

Specialization::Specialization() = default;

Specialization::Specialization(const std::string& name):
    _name(name) { }

std::string Specialization::get_name() const {
    return this -> _name;
}

void Specialization::Wizzard::cast_fire_ball() {
    std::cout << "Fireball!";
}

void Specialization::Wizzard::cast_fire_nova() {
    std::cout << "Fire nova!";
}

Specialization::Wizzard::Wizzard() = default;

Specialization::Warrior::Warrior() = default;

void Specialization::Warrior::cast_whirlwind() {
    std::cout << "Whirlwind!";
}

void Specialization::Warrior::cast_berserker_rage() {
    std::cout << "The berserker goes into a rage!";
}

#endif //DND_DUMMY_H
*/