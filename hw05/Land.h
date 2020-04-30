using namespace std;

class Land{ //abstract class
 public:
  virtual string printLand(void)=0;
  virtual void visit(Player& obj)=0;
};

class Desert:public Land{
public:
  string printLand(){
    return"an arid hot desert to the ";
    // return ""; // NOTE Return string
  }
  void visit(Player& obj){
    cout << "You walk through the hot and dry desert" << endl;
    obj.setEnergy(-2);
  }
 
};

  class Forest:public Land{
    string printLand(){
      return "a tropical dense forest to the ";
    }
    void visit(Player& obj){
      cout <<  "You trek through the dense forest" << endl;
      obj.setEnergy(-1);
 
    }
    };

    class Orchard:public Land{
      string printLand(){
        return "an orchard filled with apples to the ";
      }
      void visit(Player& obj){
        cout <<  "You eat an apple in the orchard" << endl;
        obj.setEnergy(2);
 
      }
      };

      class Lake:public Land{
        string printLand(){
          return "a water body to quench your thirst to the ";
        }
        void visit(Player& obj){
          cout << "You are hyrdrated" << endl;
          obj.setEnergy(1);
        }
      };

    class Ruins: public Land{
      string printLand(){
        return"You hear electronic noise nearby";
      }
      void visit(Player& obj){
        obj.setTreasureFound(true);
        cout << "You found the treasure. You open the treasure box and you find a portal to exit the game!" << endl;
      }
    };
