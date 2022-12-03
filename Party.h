#include<iostream>
#include<string>
using namespace std;
#include "Pokemon.h"

class Party{

    //Encapsulamiento privado
    private:
        int number_of_pokemon_weak_to_fire;
        int number_of_pokemon_weak_to_water;
        int number_of_pokemon_weak_to_grass;
        int number_of_pokemon_weak_to_electric;
        int number_of_pokemon_weak_to_ice;
        int number_of_pokemon_weak_to_fighting;
        int number_of_pokemon_weak_to_poison;
        int number_of_pokemon_weak_to_ground;
        int number_of_pokemon_weak_to_flying;
        int number_of_pokemon_weak_to_psychic;
        int number_of_pokemon_weak_to_bug;
        int number_of_pokemon_weak_to_rock;
        int number_of_pokemon_weak_to_ghost;
        int number_of_pokemon_weak_to_dragon;
        int number_of_pokemon_weak_to_dark;
        int number_of_pokemon_weak_to_steel;
        int number_of_pokemon_weak_to_fairy;
        int number_of_pokemon_weak_to_normal;
        Pokemon pokemons[6];

    //Encapsulamiento publico
    public:
        //Funciones
        void checkWeakness(){
            number_of_pokemon_weak_to_fire = 0;
            number_of_pokemon_weak_to_water = 0;
            number_of_pokemon_weak_to_grass = 0;
            number_of_pokemon_weak_to_electric = 0;
            number_of_pokemon_weak_to_ice = 0;
            number_of_pokemon_weak_to_fighting = 0;
            number_of_pokemon_weak_to_poison = 0;
            number_of_pokemon_weak_to_ground = 0;
            number_of_pokemon_weak_to_flying = 0;
            number_of_pokemon_weak_to_psychic = 0;
            number_of_pokemon_weak_to_bug = 0;
            number_of_pokemon_weak_to_rock = 0;
            number_of_pokemon_weak_to_ghost = 0;
            number_of_pokemon_weak_to_dragon = 0;
            number_of_pokemon_weak_to_dark = 0;
            number_of_pokemon_weak_to_steel = 0;
            number_of_pokemon_weak_to_fairy = 0;
            number_of_pokemon_weak_to_normal = 0;
            for(int i = 0; i < 6; i++){
                cout << pokemons[i].getName() << " is weak to: " << endl;
                if(pokemons[i].getType() == "Grass"){
                    cout << "Fire" << endl;
                    cout << "Ice" << endl;
                    cout << "Poison" << endl;
                    cout << "Flying" << endl;
                    cout << "Bug" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_fire++;
                    number_of_pokemon_weak_to_ice++;
                    number_of_pokemon_weak_to_poison++;
                    number_of_pokemon_weak_to_flying++;
                    number_of_pokemon_weak_to_bug++;
                }
                else if(pokemons[i].getType() == "Fire"){
                    cout << "Water" << endl;
                    cout << "Ground" << endl;
                    cout << "Rock" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_water++;
                    number_of_pokemon_weak_to_ground++;
                    number_of_pokemon_weak_to_rock++;

                }
                else if(pokemons[i].getType() == "Water"){
                    cout << "Electric" << endl;
                    cout << "Grass" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_electric++;
                    number_of_pokemon_weak_to_grass++;
                }
                else if(pokemons[i].getType() == "Electric"){
                    cout << "Ground" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_ground++;
                }
                else if(pokemons[i].getType() == "Ice"){
                    cout << "Fire" << endl;
                    cout << "Fighting" << endl;
                    cout << "Rock" << endl;
                    cout << "Steel" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_fire++;
                    number_of_pokemon_weak_to_fighting++;
                    number_of_pokemon_weak_to_rock++;
                    number_of_pokemon_weak_to_steel++;
                }
                else if(pokemons[i].getType() == "Fighting"){
                    cout << "Flying" << endl;
                    cout << "Psychic" << endl;
                    cout << "Fairy" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_flying++;
                    number_of_pokemon_weak_to_psychic++;
                    number_of_pokemon_weak_to_fairy++;
                }
                else if(pokemons[i].getType() == "Poison"){
                    cout << "Ground" << endl;
                    cout << "Psychic" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_ground++;
                    number_of_pokemon_weak_to_psychic++;
                }
                else if(pokemons[i].getType() == "Ground"){
                    cout << "Water" << endl;
                    cout << "Grass" << endl;
                    cout << "Ice" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_water++;
                    number_of_pokemon_weak_to_grass++;
                    number_of_pokemon_weak_to_ice++;
                }
                else if(pokemons[i].getType() == "Flying"){
                    cout << "Electric" << endl;
                    cout << "Ice" << endl;
                    cout << "Rock" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_electric++;
                    number_of_pokemon_weak_to_ice++;
                    number_of_pokemon_weak_to_rock++;
                }
                else if(pokemons[i].getType() == "Psychic"){
                    cout << "Bug" << endl;
                    cout << "Ghost" << endl;
                    cout << "Dark" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_bug++;
                    number_of_pokemon_weak_to_ghost++;
                    number_of_pokemon_weak_to_dark++;
                }
                else if(pokemons[i].getType() == "Bug"){
                    cout << "Fire" << endl;
                    cout << "Flying" << endl;
                    cout << "Rock" << endl;
                    cout << endl;
                }
                else if(pokemons[i].getType() == "Rock"){
                    cout << "Water" << endl;
                    cout << "Grass" << endl;
                    cout << "Fighting" << endl;
                    cout << "Ground" << endl;
                    cout << "Steel" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_water++;
                    number_of_pokemon_weak_to_grass++;
                    number_of_pokemon_weak_to_fighting++;
                    number_of_pokemon_weak_to_ground++;
                    number_of_pokemon_weak_to_steel++;
                }
                else if(pokemons[i].getType() == "Ghost"){
                    cout << "Ghost" << endl;
                    cout << "Dark" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_ghost++;
                    number_of_pokemon_weak_to_dark++;
                }
                else if(pokemons[i].getType() == "Dragon"){
                    cout << "Ice" << endl;
                    cout << "Dragon" << endl;
                    cout << "Fairy" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_ice++;
                    number_of_pokemon_weak_to_dragon++;
                    number_of_pokemon_weak_to_fairy++;
                }
                else if(pokemons[i].getType() == "Dark"){
                    cout << "Fighting" << endl;
                    cout << "Bug" << endl;
                    cout << "Fairy" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_fighting++;
                    number_of_pokemon_weak_to_bug++;
                    number_of_pokemon_weak_to_fairy++;
                }
                else if(pokemons[i].getType() == "Steel"){
                    cout << "Fire" << endl;
                    cout << "Fighting" << endl;
                    cout << "Ground" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_fire++;
                    number_of_pokemon_weak_to_fighting++;
                    number_of_pokemon_weak_to_ground++;
                }
                else if(pokemons[i].getType() == "Fairy"){
                    cout << "Poison" << endl;
                    cout << "Steel" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_poison++;
                    number_of_pokemon_weak_to_steel++;
                }else if(pokemons[i].getType() == "Normal"){
                    cout << "Fighting" << endl;
                    cout << endl;
                    number_of_pokemon_weak_to_fighting++;
                }else{
                    cout << "Type: " << pokemons[i].getType() << " does not exist."<< endl;
                    cout << endl;
                }

            }
            cout << "Number of Pokemon weak to Fire: " <<
            number_of_pokemon_weak_to_fire << endl;
            cout << "Number of Pokemon weak to Water: " <<
            number_of_pokemon_weak_to_water << endl;
            cout << "Number of Pokemon weak to Electric: " << 
            number_of_pokemon_weak_to_electric << endl;
            cout << "Number of Pokemon weak to Grass: " << 
            number_of_pokemon_weak_to_grass << endl;
            cout << "Number of Pokemon weak to Ice: " << 
            number_of_pokemon_weak_to_ice << endl;
            cout << "Number of Pokemon weak to Fighting: " << 
            number_of_pokemon_weak_to_fighting << endl;
            cout << "Number of Pokemon weak to Poison: " << 
            number_of_pokemon_weak_to_poison << endl;
            cout << "Number of Pokemon weak to Ground: " << 
            number_of_pokemon_weak_to_ground << endl;
            cout << "Number of Pokemon weak to Flying: " << 
            number_of_pokemon_weak_to_flying << endl;
            cout << "Number of Pokemon weak to Psychic: " << 
            number_of_pokemon_weak_to_psychic << endl;
            cout << "Number of Pokemon weak to Bug: " << 
            number_of_pokemon_weak_to_bug << endl;
            cout << "Number of Pokemon weak to Rock: " << 
            number_of_pokemon_weak_to_rock << endl;
            cout << "Number of Pokemon weak to Ghost: " << 
            number_of_pokemon_weak_to_ghost << endl;
            cout << "Number of Pokemon weak to Dragon: " << 
            number_of_pokemon_weak_to_dragon << endl;
            cout << "Number of Pokemon weak to Dark: " << 
            number_of_pokemon_weak_to_dark << endl;
            cout << "Number of Pokemon weak to Steel: " << 
            number_of_pokemon_weak_to_steel << endl;
            cout << "Number of Pokemon weak to Fairy: " << 
            number_of_pokemon_weak_to_fairy << endl;
        }

        //Setters
        void setPokemonInParty(Pokemon pokemoncito, int index){
            pokemons[index] = pokemoncito;
        }
        
        //Getters
        Pokemon getPokemonInParty(int index){
            return pokemons[index];
        }
};





