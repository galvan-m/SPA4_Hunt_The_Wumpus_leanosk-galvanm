# Build steps
To run the Makefile:
 - Open your Ubuntu terminal
 - Navigate to folder where game exists
 - Input: make
 - Run the game by inputting: ./SPA4
# tool/version
- C++ (C++14)
- CLion IDE
- g++ compiler
- CMake
# debug mode
Debug mode is turned off by default but pressing "m" will turn it on. In debug mode you are able to see the map and all the letters that represent the hazards. M is the
Miner (so the player), E is Enderman, C is Creeper, S is sword, R is ravine, D is diamond.
# team info
Mathias Galvan: worked on the map logic, debug mode, reverse engineered UML and created the makefile <br>
Kathlyn Leanos: created all the entities and hazards and handled their interactions with the Miner <br>
Dominic Celetano: created the actual game logic
# Changes from design
Our spin on Hunt the Wumpus is Mining a Diamond! You're a miner with a pickaxe that has to go into a cave to find the diamond. However the cave has many rooms with hazards! 
There's a ravine where you can fall to your death or a Creeper that will explode and kill you if you come across it. If you're lucky and happen to find a sword along the way, if you approach
a Creepre you are able to kill it before it explodes. There's the shy Enderman that if you interrupt will teleport you to a different room. If you're lucky enough to go through
all those hazards you will find the diamond and win the game!
