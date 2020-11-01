#include "specialization.h"

Specialization::Specialization() = default;

Specialization::Specialization (const std::string& name):
        _name(name){ }

std::string Specialization::get_name () const{
    return this -> _name;
}

void Specialization::attack() {
    std::cout << "Smacc." << std::endl;
}

void Specialization::defend() {
    std::cout << "Protecc" << std::endl;
}

void Specialization::do_attack() { attack(); }

void Specialization::do_defend() { defend(); }

void Wizzard::attack() {
    std::cout << "Smacc with the cane." << std::endl;
}

void Wizzard::defend() {
    std::cout << "Protecc with the mantle" << std::endl;
}

Wizzard::Wizzard():
        Specialization("Wizzard") { }

void Wizzard::cast_poof() {
    std::cout << "Makes something go POOF";
}

void Fire_wizzard::Fire_ball() {
    std::cout << "Fireball! A small ball of flames hurls through the air.\n";
}

void Fire_wizzard::Fire_nova() {
    std::cout << "Fire nova! A sea of flames starts engulfing everything around the pyromaniac!";
}

void Fire_wizzard::Pyro_blast() {
    std::cout << "Pyroblast! A humongous fire sphere starts forming above the fire archmage. This is the end!";
}