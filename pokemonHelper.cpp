#include<iostream>
#include<array>
#include<string>
using namespace std;
#include "Stadistics.h"
#include "Party.h"


Pokemon pokemons[6];
Captured capturedPokemons[6];
Party party = Party();

//Funcion que le pide al usuario que ingrese la informacion de un pokemon
void aksForPokemonInfomation(int i){
    //Variables
    string name;
    string type;
    string second_type;
    string ability;
    bool shiny;
    int level;
    int hp;
    int attack;
    int defense;
    int special_attack;
    int special_defense;
    int speed;
    bool default_pokemon = false;
    bool that_is_a_type = false;

    cout << "Pokemon " << i + 1 << endl;
    cout << "Do you want to use a default pokemon? (y/n)" << endl;
    char answer;
    cin >> answer;
    if(answer == 'y'){
        default_pokemon = true;
    }else{
        default_pokemon = false;
    }

    if(default_pokemon){
            //Plantillas de pokemones para que el usuario pueda elegir
            while(that_is_a_type == false){
            cout << "Of what type do you want your pokemon to be?" << endl;
            cout << "[Fire] [Water] [Grass] [Electric] [Ice] [Fighting]" << endl;
            cout << "[Poison] [Ground][Flying] [Psychic] [Bug] [Rock] [Ghost]" << endl;
            cout << "[Dragon] [Dark] [Steel] [Fairy] [Normal]" << endl;
            cin >> type;
            if(type == "Fire"){
                pokemons[i] = Pokemon("Charmander", "Fire", "none", "blaze", 
                false, 5, Stadistics(39, 52, 43, 60, 50, 65), false);
                that_is_a_type = true;
            }else if(type == "Water"){
                pokemons[i] = Pokemon("Squirtle", "Water", "none", "torrent", 
                false, 5, Stadistics(44, 48, 65, 50, 64, 43), false);
                that_is_a_type = true;
            }else if(type == "Grass"){
                pokemons[i] = Pokemon("Bulbasaur", "Grass", "poison", "overgrow", 
                false, 5, Stadistics(45, 49, 49, 65, 65, 45), false);
                that_is_a_type = true;
            }else if(type == "Electric"){
                pokemons[i] = Pokemon("Pikachu", "Electric", "none", "static", 
                false, 5, Stadistics(35, 55, 40, 50, 50, 90), false);
                that_is_a_type = true;
            }else if(type == "Ice"){
                pokemons[i] = Pokemon("Seel", "Ice", "none", "immunity", 
                false, 5, Stadistics(160, 110, 65, 65, 110, 30), false);
                that_is_a_type = true;
            }else if(type == "Fighting"){
                pokemons[i] = Pokemon("Machop", "Fighting", "none", "guts", 
                false, 5, Stadistics(70, 80, 50, 35, 35, 35), false);
                that_is_a_type = true;
            }else if(type == "Poison"){
                pokemons[i] = Pokemon("Ekans", "Poison", "none", "intimidate", 
                false, 5, Stadistics(35, 60, 44, 40, 54, 55), false);
                that_is_a_type = true;
            }else if(type == "Ground"){
                pokemons[i] = Pokemon("Diglett", "Ground", "none", "sand-veil", 
                false, 5, Stadistics(10, 55, 25, 35, 45, 95), false);
                that_is_a_type = true;
            }else if(type == "Flying"){
                pokemons[i] = Pokemon("Pidgey", "Flying", "normal", "keen-eye", 
                false, 5, Stadistics(40, 45, 40, 35, 35, 56), false);
                that_is_a_type = true;
            }else if(type == "Psychic"){
                pokemons[i] = Pokemon("Abra", "Psychic", "none", "synchronize", 
                false, 5, Stadistics(25, 20, 15, 105, 55, 90), false);
                that_is_a_type = true;
            }else if(type == "Ghost"){
                pokemons[i] = Pokemon("Gastly", "Ghost", "poison", "levitate", 
                false, 5, Stadistics(30, 35, 30, 100, 35, 80), false);
                that_is_a_type = true;
            }else if(type == "Dragon"){
                pokemons[i] = Pokemon("Dratini", "Dragon", "none", "shed-skin", 
                false, 5, Stadistics(41, 64, 45, 50, 50, 50), false);
                that_is_a_type = true;
            }else if(type == "Dark"){
                pokemons[i] = Pokemon("Murkrow", "Dark", "flying", "inner-focus", 
                false, 5, Stadistics(40, 45, 35, 30, 40, 55), false);
                that_is_a_type = true;
            }else if(type == "Steel"){
                pokemons[i] = Pokemon("Magnemite", "Steel", "electric", "sturdy", 
                false, 5, Stadistics(25, 35, 70, 95, 55, 45), false);
                that_is_a_type = true;
            }else if(type == "Fairy"){
                pokemons[i] = Pokemon("Clefairy", "Fairy", "none", "cute-charm", 
                false, 5, Stadistics(70, 45, 48, 60, 65, 35), false);
                that_is_a_type = true;
            }else if(type == "Bug"){
                pokemons[i] = Pokemon("Caterpie", "Bug", "none", "shield-dust", 
                false, 5, Stadistics(45, 30, 35, 20, 20, 45), false);
                that_is_a_type = true;
            }else if(type == "Rock"){
                pokemons[i] = Pokemon("Geodude", "Rock", "ground", "rock-head", 
                false, 5, Stadistics(40, 80, 100, 30, 30, 20), false);
                that_is_a_type = true;
            }else if(type == "Normal"){
                pokemons[i] = Pokemon("Snorlax", "Normal", "none", "keen-eye", 
                false, 5, Stadistics(40, 45, 40, 35, 35, 56), false);
                that_is_a_type = true;
            }
            else{
                cout << "That is not a type" << endl;
                that_is_a_type = false;
            }

        }
    }else{
        //Le pide al usuario que ingrese los datos del pokemon
        cout << "Enter the pokemon's name: (no spaces)" << endl;
        cin >> name;
        cout << "Enter the pokemon's type: ";
        cout << "[Fire] [Water] [Grass] [Electric] [Ice] [Fighting]" << endl;
        cout << "[Poison] [Ground][Flying] [Psychic] [Bug] [Rock] [Ghost]" << endl;
        cout << "[Dragon] [Dark] [Steel] [Fairy] [Normal]" << endl;
        cin >> type;
        cout << "Enter the pokemon's second type: ";
        cout << "[Fire] [Water] [Grass] [Electric] [Ice] [Fighting]" << endl;
        cout << "[Poison] [Ground][Flying] [Psychic] [Bug] [Rock] [Ghost]" << endl;
        cout << "[Dragon] [Dark] [Steel] [Fairy] [Normal]" << endl;
        cin >> second_type;
        cout << "Enter the pokemon's ability: (no spaces)" << endl;
        cin >> ability;
        cout << "Is the pokemon shiny? (1 = yes,0 = no): " << endl;
        cin >> shiny;
        cout << "Enter the pokemon's level: (integers only) " << endl;
        cin >> level;
        cout << "Do you want to auto generate the stats? (y = yes, n = no): " << endl;
        char autoGenerate;
        cin >> autoGenerate;
        if(autoGenerate == 'y'){
            hp = 50;
            attack = 50;
            defense = 50;
            special_attack = 50;
            special_defense = 50;
            speed = 50;
        }else{
            cout << "Enter the pokemon's hp: (integers only)" << endl;
            cin >> hp;
            cout << "Enter the pokemon's attack: (integers only)" << endl;
            cin >> attack;
            cout << "Enter the pokemon's defense: (integers only)" << endl;
            cin >> defense;
            cout << "Enter the pokemon's special attack: (integers only)" << endl;
            cin >> special_attack;
            cout << "Enter the pokemon's special defense: (integers only)" << endl;
            cin >> special_defense;
            cout << "Enter the pokemon's speed: (integers only)" << endl;
            cin >> speed;
        }
        //AQUI ESTA LA COMPOSICION, si yo borro este objeto
        //Tambien se borra el objeto de la clase Sradistics
        Stadistics stats = Stadistics(hp, attack, defense, special_attack, special_defense, speed);
    
        cout << "Is this pokemon captured? (y = yes, n = no): ";
        char captured;
        cin >> captured;
        if(captured == 'y'){
            cout << "Enter the pokemon's nickname: (no spaces)" << endl;
            string nickname;
            cin >> nickname;
            cout << "Enter the pokemons's happines: (intergers only)" << endl;
            int happines;
            cin >> happines;
            Captured pokeToSend = Captured(name, type, second_type, ability, shiny, level, stats, true, nickname, happines);
            capturedPokemons[i] = pokeToSend;
            Pokemon pokeTwoSend = Pokemon(name, type, second_type, ability, shiny, level, stats, true);
            pokemons[i] = pokeTwoSend;
        }
        else{
            Captured poke2Send = Captured(name, type, second_type, ability, shiny, level, stats,false, "nome", 0);
            capturedPokemons[i] = poke2Send;
            Pokemon pokeTooSend = Pokemon(name, type, second_type, ability, shiny, level, stats, false);
            pokemons[i] = pokeTooSend;
        }
    }
    party.setPokemonInParty(pokemons[i],i);
}

//Funcion que muestra la informacion de los pokemones
void showPokemonInformation(){
    for (int i = 0; i < 6; i++)
    {
        //Aqui se muestra la importancia de la herecia
        //Aqui checo si llamo al hijo o al padre
        //segun sea el caso
        if(pokemons[i].getCaught()){
            //Esto es un arreglo de clases hijas
            capturedPokemons[i].printCaputared();
        }else{
           pokemons[i].printPokemon();
        }
    }
    
}

//Funcion para crear un equipo de 6 pokemones
void makeATeam(){
    cout<<"POKEMON TEST BUILDER"<<endl;
    cout<<"---------------------"<<endl;
    for (int i = 0; i < 6; i++){
        aksForPokemonInfomation(i);
        party.setPokemonInParty(pokemons[i],i);
        
    }
}

//Funcion para mostrar el equipo
void showTeam(){
    cout<< "Pokemons in party"<<endl;
    for ( int i = 0; i < 6; i++)
    {
        cout<<party.getPokemonInParty(i).getName()<<endl; 
    }
    
}

//Funcion para mostrar el menu
void Menu(){
    cout<<"---------------------"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"What do you want to do?"<<endl;
    cout<<"[1] Change Pokemon"<<endl;
    cout<<"[2] Show all the pokemons in the party"<<endl;
    cout<<"[3] Show all the pokemons information"<<endl;
    cout<<"[4] Show team's weaknesses"<<endl;

    int option;
    cin>>option;
    
    switch(option){
        case 1:
            //Tell the useer the pokemon number it wants to change
            cout << "Which pokemon do you want to change? (1-6)" << endl;
            int pokemonNumber;
            cin >> pokemonNumber;
            aksForPokemonInfomation(pokemonNumber-1);
            break;
        case 2:
            showTeam();
            break;
        case 3:
            showPokemonInformation();
            break;
        case 4:
            party.checkWeakness();
            break;
        default:
            cout<<"Invalid option"<<endl;
            break;
    }

}
int main(){

    //Ciclo que se repite hasta que el usuario decida salir
    bool userWantsToContinue = true;
    makeATeam();
    do {
        Menu();
        cout << "Do you want to continue using the program? (y = yes, n = no): ";
        char userAnswer;
        cin >> userAnswer;
        if(userAnswer == 'y'){
            userWantsToContinue = true;
        }else{
            userWantsToContinue = false;
        }
    } while (userWantsToContinue);
    
    return 0;

}


    

