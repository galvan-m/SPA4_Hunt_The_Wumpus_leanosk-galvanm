//
// Created by galvanm on 3/31/2026.
//

#ifndef SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_CREEPER_H
#define SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_CREEPER_H
#include "Inhibitor.h"


class Creeper : public Inhibitor {
    public:
    void interact() override;
    std::string getWarning() const override;
    bool isFatal() const override;
    std::string getDisplayChar() const override;

};


#endif //SPA4_HUNT_THE_WUMPUS_LEANOSK_GALVANM_CREEPER_H