#include "Player.h"

int Player::mapDim = 10; // NOTE why did we initialize

int Player::getDimension(){
    return mapDim;
  }
//void Player:: setDim(int g){
  //  mapDim = g;
//}
int Player:: getEnergy(){
  return energylevel;
  }
  void Player::setEnergy(int n){
    energylevel += n;
  }
  void Player:: setTreasureFound(bool t){
    treasure = t;
  }
  bool Player:: isTreasureFound(){
    return treasure;
  }
  int Player:: getX(void){
    return x;
  }
  int Player:: getY(void){
    return y;
  }
  void Player:: setX(int x){
    x = x;
  }
  void Player:: setY(int y){
    y = y;
  }

  void Player:: moveN(){
    if(y+1 <= getDimension()-1){
        y += 1;
  }
  }

 void Player:: moveE(){
   if(x+1 <= getDimension()-1){
        x += 1;
    }
  }

  void Player:: moveS(){
    if(y-1 >= 0){
        y -= 1;
  }
  }



  void Player:: moveW(){
   if(x-1 >= 0){
        x -= 1;
    }


  }
