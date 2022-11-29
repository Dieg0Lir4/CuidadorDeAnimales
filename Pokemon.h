#include<iostream>
#include<string>
using namespace std;
#include "Move.h"


class Pokemon{

    private:
        string name;
        string type;
        string second_type;
        Move move[4];
        string ability;
        bool shiny;
        Stadistics stats;
        int level;
       
    public:
        Pokemon(){
            name = "None";
            type = "None";
            second_type = "None";
            ability = "None";
            shiny = false;
            level = 50;
            stats = Stadistics(50, 50, 50, 50, 50, 50);
        }

        Pokemon(string new_name, string new_type, string new_second_type, string new_ability, bool new_shiny, int new_level, Stadistics new_stats){
            name = new_name;
            type = new_type;
            second_type = new_second_type;
            ability = new_ability;
            shiny = new_shiny;
            level = new_level;
            stats = new_stats;
        }

        string getName(){
            return name;
        }

        string getType(){
            return type;
        }

        string getSecondType(){
            return second_type;
        }

        string getAbility(){
            return ability;
        }

        bool getShiny(){
            return shiny;
        }

        int getLevel(){
            return level;
        }

        void setName(string new_name){
            name = new_name;
        }

        void setType(string new_type){
            type = new_type;
        }

        void setSecondType(string new_second_type){
            second_type = new_second_type;
        }

        void setAbility(string new_ability){
            ability = new_ability;
        }

        void setShiny(bool new_shiny){
            shiny = new_shiny;
        }

        void setLevel(int new_level){
            level = new_level;
        }

        void setMove(int index, string new_name, string new_type, int new_power){
            move[index].setMoveName(new_name);
            move[index].setMoveType(new_type);
            move[index].setBasePower(new_power);
        }

        void setStats(int new_hp, int new_attack, int new_defense, int new_special_attack, int new_special_defense, int new_speed){
            stats.setHp(new_hp);
            stats.setAttack(new_attack);
            stats.setDefense(new_defense);
            stats.setSpecialAttack(new_special_attack);
            stats.setSpecialDefense(new_special_defense);
            stats.setSpeed(new_speed);
        }

        void printPokemon(){
            cout << endl;
            cout << "Name: " << name << endl;
            cout << "Type: " << type << endl;
            cout << "Second Type: " << second_type << endl;
            cout << "Ability: " << ability << endl;
            cout << "Shiny: " << shiny << endl;
            cout << "Level: " << level << endl;
            cout << "Stats: " << endl;
            cout << "HP: " << stats.getHp() << endl;
            cout << "Attack: " << stats.getAttack() << endl;
            cout << "Defense: " << stats.getDefense() << endl;
            cout << "Special Attack: " << stats.getSpecialAttack() << endl;
            cout << "Special Defense: " << stats.getSpecialDefense() << endl;
            cout << "Speed: " << stats.getSpeed() << endl;
            cout << "Moves: " << endl;
            for(int i = 0; i < 4; i++){
                cout << "Move " << i + 1 << ": " << move[i].getMoveName() << endl;
                cout << "Type: " << move[i].getMoveType() << endl;
                cout << "Base Power: " << move[i].getBasePower() << endl;
            }
        }

        
            
};

class Captured : public Pokemon{

    private:
        string mote;
        int happiness;
    
    public:
        Captured(){
            mote = "Bulbasaur";
            happiness = 0;
        }

        Captured(string new_name, string new_type, string new_second_type, string new_ability, bool new_shiny, int new_level, Stadistics new_stats, string new_mote, int new_happiness){
            mote = new_mote;
            happiness = new_happiness;
        }

        string getMote(){
            return mote;
        }

        int getHappiness(){
            return happiness;
        }

        void setMote(string new_mote){
            mote = new_mote;
        }

        void setHappiness(int new_happiness){
            happiness = new_happiness;
        }

        void printCaputared(){
            cout << "Mote: " << mote << endl;
            cout << "Happiness: " << happiness << endl;
        }  
        

};
