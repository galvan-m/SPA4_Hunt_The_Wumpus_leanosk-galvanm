//
// Created by leanosk on 4/9/2026.
//

#include "Miner.h"


Miner::Miner() {
    alive = true;
    hasSword = false;
    hasDiamond = false;
    hasAxe = true;
}

void Miner::kill() {
    alive = false;
}

bool Miner::isAlive() const {
    return alive;
}

void Miner::giveSword() {
    hasSword = true;
}

bool Miner::hasWeapon() const {
    return hasSword;
}

void Miner::collectDiamond() {
    hasDiamond = true;
}

bool Miner::hasWon() const {
    return hasDiamond;
}

void Miner::useSword() {
    hasSword = false;
}
