#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <iomanip>

using namespace std;

class Player{
private:
  int x,y,energylevel;
  bool treasure; //treasure found
  static int mapDim;
public:
  Player(){
    x = mapDim/2;
    y = mapDim/2;
    energylevel=mapDim/2;
    treasure = false;
    // mapDim=10; //NOTE overridden, do not initialize static in Class w
  }
  static int getDimension();
  //void setDim(int g);
  void setTreasureFound(bool t);
  bool isTreasureFound();
  int getEnergy();
  void setEnergy(int n);
  int getX(void);
  int getY(void);
  void setX(int x);
  void setY(int y);
  void moveS();
  void moveN();
  void moveE();
  void moveW();
};

#endif
