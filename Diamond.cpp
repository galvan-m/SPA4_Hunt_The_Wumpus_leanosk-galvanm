//
// Created by galvanm on 3/31/2026.
//

#include "Diamond.h"

#include <iostream>
#include <ostream>

#include "Miner.h"

void Diamond::interact(Miner& miner) {
    std::cout << "You found the diamond! Congratulations!!" << std::endl;
    miner.collectDiamond();
}

std::string Diamond::getWarning() const {
    return "You see a glint of light shining off a diamond!";
}
std::string Diamond::getDisplayChar() const {
    return "D";
}
