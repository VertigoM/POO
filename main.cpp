#include <iostream>
#include "races.h"
#include "character.h"

int main(){

    auto *character1 = new Character("Gandalf", Elf(), Wizzard());
    std::cout << character1 -> get_name() << " sits at the " << character1 << " memory address.\n";
    std::cout << *character1;
    auto *character2 = new Character;
    *character2 = *character1;
    std::cout << character2 -> get_name() << " sits at the " << character2 << " memory address.\n";
    std::cout << *character2;

    character1->_specialization.do_atack();

    delete character1;
    return 0;
}