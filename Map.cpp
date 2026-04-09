//
// Created by galvanm on 3/31/2026.
//

#include <typeinfo>
#include <iostream>
#include "Map.h"
#include "Player.h"
#include "Room.h"
#include "Creeper.h"
#include "Diamond.h"
#include "Enderman.h"
#include "Ravine.h"
#include "Sword.h"

using std::cout;
using std::endl;

Map::Map() {
    rooms = new Room*[MAP_HEIGHT];
    for (int i = 0; i < MAP_HEIGHT; i++) {
        rooms[i] = new Room[MAP_WIDTH];
    }
    generate_rooms();
    srand(time(0));
    addEntity(new Player());
    addEntity(new Creeper());
    addEntity(new Diamond());
    addEntity(new Enderman());
    addEntity(new Ravine());
    addEntity(new Enderman());
    addEntity(new Ravine());
    addEntity(new Sword());

}
Map::~Map() {
    for (int i = 0; i < MAP_HEIGHT; i++) {
        delete[] rooms[i];
    }
    delete[] rooms;
}
void Map::addEntity(Entity* entity) {
    bool placed = false;
    while (!placed) {
        int r = rand() % MAP_HEIGHT;
        int c = rand() % MAP_WIDTH;

        if (rooms[r][c].getEntity() == nullptr) {
            rooms[r][c].setEntity(entity);
            placed = true;
        }
    }
}
void Map::generate_rooms() {
    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            Room* room = &rooms[i][j];
            if (i > 0) {
                room->setNorth(&rooms[i - 1][j]);
            }
            if (i < MAP_HEIGHT - 1) {
                room->setSouth(&rooms[i + 1][j]);
            }
            if (j > 0) {
                room->setWest(&rooms[i][j - 1]);
            }
            if (j < MAP_WIDTH - 1) {
                room->setEast(&rooms[i][j + 1]);
            }
        }
    }
}

void Map::printMap() {
    for (int i = 0; i < MAP_HEIGHT; i++) {
        for (int j = 0; j < MAP_WIDTH; j++) {
            Entity* entity = rooms[i][j].getEntity();

            if (entity == nullptr) {
                cout << ". ";
            } else {
                cout << entity->getDisplayChar() << " ";
            }

        }
        cout << endl;
    }
}