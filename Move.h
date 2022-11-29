#include<iostream>
#include<string>
using namespace std;

class Move{
    private:
        string move_name;
        string move_type;
        int base_power;

    public:
        
        Move(){
            move_name = "Tackle";
            move_type = "Normal";
            base_power = 40;
        }

        Move(string new_name, string new_type, int new_power){
            move_name = new_name;
            move_type = new_type;
            base_power = new_power;
        }

        string getMoveName(){
            return move_name;
        }

        string getMoveType(){
            return move_type;
        }

        int getBasePower(){
            return base_power;
        }
        
        void setMoveName(string new_name){
            move_name = new_name;
        }

        void setMoveType(string new_type){
            move_type = new_type;
        }

        void setBasePower(int new_power){
            base_power = new_power;
        }
};
