#include <iostream>
#include "character.h"

int main(){
    /*Character character1("Gandalf", Elf(), new Fire_wizzard);
    Character character2 = character1;
    character1._specialization->Fire_ball();


    std::printf("[DEBUG]%p\n", character1._specialization);
    std::printf("[DEBUG]%p\n", character2._specialization);*/

    Character* character1 = new Character("Gandalf", Elf(), new Fire_wizzard);
    Character* character2 = new Character;

    character2 = character1;

    std::printf("[DEBUG]%p\n", character1 -> _specialization);
    std::printf("[DEBUG]%p\n", character2 -> _specialization);

    character1->_specialization->do_attack();
    return 0;
}