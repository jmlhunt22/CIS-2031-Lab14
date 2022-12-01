#include <iostream>
#include <string>
#include <sstream> 
using std::string;
using std::cout;
using std::endl;


class Player {
    private:
        string name;
        int hitPoints;

    public:
       Player(string n, int h){
            name = n;
            hitPoints = h;
       }

        

        string getName(){
            return name;
        }

        int getHitPoints(){
            return hitPoints;
        }

        void damage(int points){
            if ( points > hitPoints )
                hitPoints = 0;
            else
                hitPoints = hitPoints - points;
        }
};

int main(){
   Player a = Player("Jordan", 90); 
   Player b = Player("Sarah", 72); 
   a.damage(5);
   cout << a.getName << a.getHitPoints << endl;


}
