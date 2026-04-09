//
// Created by galvanm on 3/31/2026.
//

#ifndef SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_PLAYER_H
#define SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_PLAYER_H
#include "Entity.h"


class Player : public Entity {
    void interact() override;
    std::string getWarning() const override;
    std::string getDisplayChar() const override;
};


#endif //SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_PLAYER_H