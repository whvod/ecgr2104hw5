#include "treasure.h"

void gameEng(Player & obj){
// static int mapDim;
random_device dev;
string input;
mt19937 twist(dev());
uniform_int_distribution<size_t> u(0, Player::getDimension()-1);

 Land* map[Player::getDimension()][Player::getDimension()];

for(int k=0; k<Player::getDimension(); k++){

  for(int j=0; j<Player::getDimension(); j++){

    switch(u(twist)%(numofLand-1)){

    case 0:
      map[k][j] = new Forest;
      break;

    case 1:

      map[k][j] = new Orchard;
      break;
    case 2:
      map[k][j] = new Desert;
      break;
    case 3:
      map[k][j] = new Lake;
      break;
    }
  }
 }

int xPlay = obj.getX();
int yPlay = obj.getY();

// Check to see if we started on ruins
while ( (xPlay == obj.getX()) && (yPlay == obj.getY()) ){
  xPlay = u(twist);
  yPlay = u(twist);
 }

delete map[xPlay][yPlay];
map[xPlay][yPlay] = new Ruins;

while(obj.getEnergy() > 0 && input != "QUIT" && obj.isTreasureFound() == false ){
  cout << "You see," << endl;
    if(yPlay == Player::getDimension()-1){
            cout << "the north border" << endl;
        }else{
      cout << map[xPlay][yPlay+1]->printLand() << "North" << endl;
        }

        if(yPlay == 0){
            cout << "the south border" << endl;
        }else{
          cout << map[xPlay][yPlay-1]->printLand() << "South" << endl;
        }

        if(xPlay == Player::getDimension()-1){ 
            cout << "the east border" << endl;
        }else{
          cout << map[xPlay+1][yPlay]->printLand() << "East" << endl;
        }

        if(xPlay == 0){
            cout << "the west border" << endl;
        }else{
          cout << map[xPlay-1][yPlay]->printLand() << "West" << endl;
        }


        // }

        cout << "Would you like to go North, South, East or West?" << endl;
        cin >> input;


        if(input == "North"){
          obj.moveN();
        }
        else if (input == "West")
        {
          obj.moveW();
        }
        else if (input == "South")
        {
          obj.moveS();
        }
        else if(input == "East"){
          obj.moveE();
        }
        else{
          cout << "You input " << input << endl;
        }

        if(input == "QUIT"){
          cout <<"You are now quitting the game" << endl;
        }

        else{
          map[obj.getX()][obj.getY()]->visit(obj);
        }

        if(obj.getEnergy() == 0){
          cout << "You ran out of energy, end of game." << endl;
        }
        else{
          cout << "Current energy level is " << obj.getEnergy() << endl;
        }
 }
}
    // }
