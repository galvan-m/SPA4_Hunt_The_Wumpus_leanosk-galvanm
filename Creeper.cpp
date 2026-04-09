//
// Created by galvanm on 3/31/2026.
//

#include "Creeper.h"

#include <iostream>
#include <ostream>

void Creeper::interact() {
    std::cout<<"Oh no! You encountered a Creeper! You got blown up and died. Game over."<<std::endl;
}

std::string Creeper::getWarning() const {
    return "You smell gunpowder..";
}

bool Creeper::isFatal() const {
    return true;
}
std::string Creeper::getDisplayChar() const {
    return "C";
}
