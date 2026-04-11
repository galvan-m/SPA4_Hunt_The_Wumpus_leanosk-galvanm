//
// Created by leanosk on 4/9/2026.
//

#ifndef SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_MINER_H
#define SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_MINER_H

class Miner {
    bool alive;
    bool hasSword;
    bool hasDiamond;
    bool hasAxe;

public:
    Miner();

    void kill();
    bool isAlive() const;

    void giveSword();
    bool hasWeapon() const;
    void useSword();

    void collectDiamond();
    bool hasWon() const;

};

#endif //SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_MINER_H