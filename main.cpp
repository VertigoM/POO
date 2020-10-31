#include <iostream>
#include "races.h"
#include "character.h"
#include "dummy.h"

int main(){

    /*auto *character1 = new Character("Gandalf", Elf(), new Fire_wizzard);
    std::cout << *character1;
    Character *character2 = new Character;
    *character2 = *character1;
    std::cout << *character2;*/
    Character character1("Gandalf", Elf(), new Fire_wizzard);
    Character character2 = character1;
    character1._specialization->Fire_ball();



    /*character1 -> _specialization -> Fire_ball();
    std::cout << character1 -> get_name() << " sits at the " << character1 << " memory address.\n";
    std::cout << character2 -> get_name() << " sits at the " << character2 << " memory address.\n";
    std::printf("[DEBUG]%p\n", character1 -> _specialization);
    std::printf("[DEBUG]%p\n", character2 -> _specialization);*/
    return 0;
}