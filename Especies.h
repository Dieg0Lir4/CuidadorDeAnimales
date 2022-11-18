#include<iostream>
using namespace std;
#include<string>


class Mamifero{
    private:
        int edad;
        bool pareja;
        string nombre_pareja;
        char sexo;
        int crias;
        float peso;
        int pelos;
        string nombre;

    public:
        Mamifero(int, bool, string, char, int, float, int);
        void liberarAnimal();
        void alimentarAnimal(float);
        void llevarloAlMedico();
        void comprarAmigo(string);
        void emparejarAnimal(string):
        void forzarApariamiento();
        float mostrarPeso();

       
};

Mamifero::Mamifero(int _edad, bool _pareja, string _nombre_pareja, char _sexo, int _crias, float _peso, int _pelos, string _nombre){
    edad = _edad;
    pareja = _pareja;
    nombre_pareja = _nombre_pareja;
    sexo = _sexo;
    crias = _crias;
    peso = _peso;
    pelos = _pelos;
    nombre = _nombre;
}

void Mamifero::alimentarAnimal(float comida_kg){
    peso += comida_kg*0.2;    

}

float Mamifero::mostrarPeso(){
    return peso;
}
class Reptil{
    private:
        int edad;
        bool pareja;
        string nombre_pareja;
        char sexo;
        int crias;
        float peso;
        int escamas;
        string nombre;

    public:
        Reptil(int, bool, string, char, int, float, int);
        void liberarAnimal();
        void alimentarAnimal(float);
        void llevarloAlMedico();
        void comprarAmigo(string);
        void emparejarAnimal(string):
        void forzarApariamiento();
};

Reptil::Reptil(int _edad, bool _pareja, string _nombre_pareja, char _sexo, int _crias, float _peso, int _escamas, string _nombre){
    edad = _edad;
    pareja = _pareja;
    nombre_pareja = _nombre_pareja;
    sexo = _sexo;
    crias = _crias;
    peso = _peso;
    escamas = _escamas;
    nombre = _nombre;
}

void Reptil::llevarloAlMedico(){
    cout<<nombre<<" tiene "<<escamas<<" Sexo: "<<sexo<<" Edad: "<<edad<<" anios"<<endl;
}

class Ave{
    private:
        int edad;
        bool pareja;
        string nombre_pareja;
        char sexo;
        int crias;
        float peso;
        int plumas;
        string nombre;

    public:
        Ave(int, bool, string, char, int, float, int);
        void liberarAnimal();
        void alimentarAnimal(float);
        void llevarloAlMedico();
        void comprarAmigo(string);
        void emparejarAnimal(string):
        void apariar();

};

Ave::Ave(int _edad, bool _pareja, string _nombre_pareja, char _sexo, int _crias, float _peso, int _plumas, string _nombre){
    edad = _edad;
    pareja = _pareja;
    nombre_pareja = _nombre_pareja;
    sexo = _sexo;
    crias = _crias;
    peso = _peso;
    plumas = _plumas;
    nombre = _nombre;
}

void Ave::emparejarAnimal(string nombre){
    pareja = nombre;
    cout<<"Pareja nueva: "<<pareja<<endl;
}