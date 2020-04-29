using namespace std;

class Land{
 public:
  virtual string  printLand()=0;
  virtual void visit(Player& obj)=0;
};

class Desert:public Land{
  string printLand(){
    // cout << "You walk through the hot and dry desert" << endl;
    return"You walk through the hot and dry desert";
    // return ""; // NOTE Return string
  };
  void visit(Player& obj){
    obj.setEnergy(-2);
  }
 
};

  class Forest:public Land{
    string printLand(){
      return "You trek through the dense forest";
    };
    void visit(Player& obj){
      obj.setEnergy(-1);
 
    }
    };

    class Orchard:public Land{
      string printLand(){
        return "You eat an apple in the orchard";
      };
      void visit(Player& obj){
        obj.setEnergy(2);
 
      }
      };

      class Lake:public Land{
        string printLand(){
          return "You are hydrated";
        };
        void visit(Player& obj){
          obj.setEnergy(1);
        }
        };
    class Ruins: public Land{
      string printLand(){
        return"You hear electronic noise nearby";
      };
      void visit(Player& obj){
        obj.setTreasureFound(true);
        cout << "You found the treasure. You open the treasure box and you find a portal to exit the game!" << endl;
      }
    };
