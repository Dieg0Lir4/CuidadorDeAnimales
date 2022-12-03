#include<iostream>
#include<string>
using namespace std;


class Pokemon{

    private:
        string name;
        string type;
        string second_type;
        string ability;
        bool shiny;
        Stadistics stats;
        int level;
        bool caught;
       
    public:
        // Constructores
        Pokemon(){
            name = "None";
            type = "None";
            second_type = "None";
            ability = "None";
            shiny = false;
            level = 50;
            stats = Stadistics(50, 50, 50, 50, 50, 50);
        }

        Pokemon(string new_name, string new_type, string new_second_type, string new_ability, bool new_shiny, int new_level, Stadistics new_stats, bool new_caught){
            name = new_name;
            type = new_type;
            second_type = new_second_type;
            ability = new_ability;
            shiny = new_shiny;
            level = new_level;
            stats = new_stats;
            caught = new_caught;
        }

        // Getters
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

        bool getCaught(){
            return caught;
        }

        // Setters
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

        

        void setStats(int new_hp, int new_attack, int new_defense,
        int new_special_attack, int new_special_defense, int new_speed){
            stats.setHp(new_hp);
            stats.setAttack(new_attack);
            stats.setDefense(new_defense);
            stats.setSpecialAttack(new_special_attack);
            stats.setSpecialDefense(new_special_defense);
            stats.setSpeed(new_speed);
        }

        //Funciones
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
            
        }

        
            
};

//Clase hija de la clase Pokemon
class Captured : public Pokemon{

    private:
        string mote;
        int happiness;
    
    public:
        Captured(){
            mote = "Bulbasaur";
            happiness = 0;
        }

        Captured(string new_name, string new_type, string new_second_type, string new_ability, bool new_shiny, int new_level, Stadistics new_stats, bool new_caught, string new_mote, int new_happiness){
            mote = new_mote; 
            happiness = new_happiness;
        }

        //Getters
        string getMote(){
            return mote;
        }

        int getHappiness(){
            return happiness;
        }
        
        //Setters
        void setMote(string new_mote){
            mote = new_mote;
        }

        void setHappiness(int new_happiness){
            happiness = new_happiness;
        }

        //Funciones
        void printCaputared(){
            printPokemon();
            cout << "Mote: " << mote << endl;
            cout << "Happiness: " << happiness << endl;
        }

        
            
        
        

};