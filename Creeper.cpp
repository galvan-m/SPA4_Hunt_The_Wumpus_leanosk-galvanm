//
// Created by galvanm on 3/31/2026.
//

#include "Creeper.h"
#include "Miner.h"

#include <iostream>


void Creeper::interact(Miner& miner) {
    if (miner.hasWeapon()) {
        std::cout << "A Creeper attacks, but you defend yourself with your trusty sword!" << std::endl;
        miner.useSword();
    } else {
        std::cout<<"Oh no! You encountered a Creeper! You got blown up and died. Game over."<<std::endl;
        miner.kill();
    }
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
