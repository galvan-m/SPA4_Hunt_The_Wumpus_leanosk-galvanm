//
// Created by galvanm on 3/31/2026.
//
#include <iostream>
#include "Ravine.h"

#include "Miner.h"
using std::cout;

void Ravine::interact(Miner& miner) {
    std::cout << "You fell into a pit and died! Game over.\n";
    miner.kill();
}

std::string Ravine::getWarning() const {
    return "You feel a gust of wind...";
}

bool Ravine::isFatal() const {
    return true;
}
std::string Ravine::getDisplayChar() const {
    return "R";
}