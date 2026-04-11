//
// Created by galvanm on 3/31/2026.
//

#ifndef SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_DIAMOND_H
#define SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_DIAMOND_H
#include "Item.h"


class Diamond : public Item {
    public:
        void interact(Miner &miner) override;
        std::string getWarning() const override;
        std::string getDisplayChar() const override;

};


#endif //SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_DIAMOND_H