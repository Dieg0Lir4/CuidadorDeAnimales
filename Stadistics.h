 #include<iostream>
#include<string>
using namespace std;

class Stadistics{

    //Encapsulamiento para que no se pueda acceder a los atributos desde fuera de la clase
    private:
    // Atributos
        int hp;
        int attack;
        int defense;
        int special_attack;
        int special_defense;
        int speed;

    public:
    // Metodos
        // Constructores
        Stadistics(){
            hp = 0;
            attack = 0;
            defense = 0;
            special_attack = 0;
            special_defense = 0;
            speed = 0;
        }

        Stadistics(int new_hp, int new_attack, int new_defense,
        int new_special_attack, int new_special_defense, int new_speed){
            hp = new_hp;
            attack = new_attack;
            defense = new_defense;
            special_attack = new_special_attack;
            special_defense = new_special_defense;
            speed = new_speed;
        }

        // Getters
        int getHp(){
            return hp;
        }

        int getAttack(){
            return attack;
        }

        int getDefense(){
            return defense;
        }

        int getSpecialAttack(){
            return special_attack;
        }

        int getSpecialDefense(){
            return special_defense;
        }

        int getSpeed(){
            return speed;
        }

        // Setters
        void setHp(int new_hp){
            hp = new_hp;
        }

        void setAttack(int new_attack){
            attack = new_attack;
        }

        void setDefense(int new_defense){
            defense = new_defense;
        }

        void setSpecialAttack(int new_special_attack){
            special_attack = new_special_attack;
        }

        void setSpecialDefense(int new_special_defense){
            special_defense = new_special_defense;
        }

        void setSpeed(int new_speed){
            speed = new_speed;
        }
};