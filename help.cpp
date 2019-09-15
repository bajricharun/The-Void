#include <iostream>
#include <string>

void help() {
  std::cout <<R"(
  Welcome to the Void. An adventure game made in C++ for terminal. You are starting off from scratch.
  Your beginner stats are:
  1) 100% health;
  2) 1% fighting skills;
  3) 0% map explored;
  4) 10% strength.

  Additional stats will be added as the game progresses. 

  Commands are as follows(commands are case sensitive):
  1) map = shows map;
  2) help = shows this help menu;
  3) gather = takes everything on the ground (only works if you have killed someone or if you have found a treasure);
  4) inventory = shows the current items you have;
  5) switch + [number] = switches to different weapon from inventory.
  6) exit = exits, without saving;
  7) save = saves;
  8) quit = saves and exits;		
  9) stats = lists your stats;
 10) start = starts the game.
)" <<'\n';
}
