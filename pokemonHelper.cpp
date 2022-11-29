#include<iostream>
#include<array>
#include<string>
using namespace std;
#include "Stadistics.h"
#include "Party.h"


Pokemon pokemons[6];
Party party = Party();


void aksForPokemonInfomation(int i){
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
    
    cout << "Enter the pokemon's name: ";
    cin >> name;
    cout << "Enter the pokemon's type: ";
    cout << "[Fire] [Water] [Grass] [Electric] [Ice] [Fighting] [Poison] [Ground] [Flying] [Psychic] [Bug] [Rock] [Ghost] [Dragon] [Dark] [Steel] [Fairy]" << endl;
    cin >> type;
    cout << "Enter the pokemon's second type: ";
    cout << "[Fire] [Water] [Grass] [Electric] [Ice] [Fighting] [Poison] [Ground] [Flying] [Psychic] [Bug] [Rock] [Ghost] Dragon] [Dark] [Steel] [Fairy]" << endl;
    cin >> second_type;
    cout << "Enter the pokemon's ability: ";
    cin >> ability;
    cout << "Is the pokemon shiny? (1 = yes, 0 = no): ";
    cin >> shiny;
    cout << "Enter the pokemon's level: ";
    cin >> level;
    cout << "Do you want to auto generate the stats? (y = yes, n = no): ";
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

        cout << "Enter the pokemon's hp: ";
        cin >> hp;
        cout << "Enter the pokemon's attack: ";
        cin >> attack;
        cout << "Enter the pokemon's defense: ";
        cin >> defense;
        cout << "Enter the pokemon's special attack: ";
        cin >> special_attack;
        cout << "Enter the pokemon's special defense: ";
        cin >> special_defense;
        cout << "Enter the pokemon's speed: ";
        cin >> speed;
    }
    Stadistics stats = Stadistics(hp, attack, defense, special_attack, special_defense, speed);
   
    cout << "Is this pokemon captured? (y = yes, n = no): ";
    char captured;
    cin >> captured;
    if(captured == 'y'){
        cout << "Enter the pokemon's nickname: ";
        string nickname;
        cin >> nickname;
        cout << "Enter the pokemons's happines: ";
        int happines;
        cin >> happines;
        Captured pokeToSend = Captured(name, type, second_type, ability, shiny, level, stats, nickname, happines);
        Pokemon pokeTwoSend = Pokemon(name, type, second_type, ability, shiny, level, stats);
        pokemons[i] = pokeTwoSend;
    }
    else{
        Pokemon poke2Send = Pokemon(name, type, second_type, ability, shiny, level, stats);
        pokemons[i] = poke2Send;
    }


}

void showPokemonInformation(){
    for (int i = 0; i < 6; i++)
    {
        pokemons[i].printPokemon();
    }
    
}

void makeATeam(){
    cout<<"POKEMON TEST BUILDER"<<endl;
    cout<<"---------------------"<<endl;
    for (int i = 0; i < 6; i++){
        aksForPokemonInfomation(i);
        party.setPokemonInParty(pokemons[i],i);
        
    }
}

void showTeam(){
    for ( int i = 0; i < 6; i++)
    {
        cout<< "Pokemons in party"<<endl;
        cout<<party.getPokemonInParty(i).getName()<<endl;
        
    }
    
}

void Menu(){
    cout<<"---------------------"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"---------------------"<<endl;
    //cout<<"What do you want to do?"<<endl;
    //cout<<"[1] Redo team"<<endl;
    //cout<<"[2] Show all the pokemons in the party"<<endl;
    //cout<<"[3] Show all the pokemons information"<<endl;
    cout<<"[4] Show team's weaknesses"<<endl;

    int option;
    cin>>option;
    
    switch(option){
        case 1:
            makeATeam();
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

        
    makeATeam();
    Menu();

    return 0;

}
