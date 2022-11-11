#include<iostream>
using namespace std;
#include<string>


class Mamifero{
    private:
        int edad;
        string animal;
        string nombre;
        bool vacunado;
        

    public:
        Mamifero(int, string, string);
        void vacunar();
        bool mostrarVacunacion();
};

Mamifero::Mamifero(int _edad, string _animal, string _nombre){
    edad = _edad;
    animal = _animal;
    nombre = _nombre;
}

bool Mamifero::mostrarVacunacion(){
    
    bool respuesta = false;

    if(vacunado == true){
        respuesta = true;
    }
    return respuesta;
}

void Mamifero::vacunar(){
    vacunado = true;
}


class Reptil{
    private:
        int edad;
        string animal;
        string sexo;
        float peso;
        

    public:
        Reptil(int, string, string);
        void alimentar(float);
        float mostrarPeso();
};

Reptil::Reptil(int _edad, string _animal, string _sexo){
    edad = _edad;
    animal = _animal;
    sexo = _sexo;
}

float Reptil::mostrarPeso(){
    
    return peso;
   
}

void Reptil::alimentar(float comida){
    peso += comida;
}


class Ave{
    private:
        int edad;
        string animal;
        string nombre;
        bool limpio;
        

    public:
        Ave(int, string, string);
        void baniar();
        bool mostrarLimpieza();
};

Ave::Ave(int _edad, string _animal, string _nombre){
    edad = _edad;
    animal = _animal;
    nombre = _nombre;
}

bool Ave::mostrarLimpieza(){
    
    bool respuesta = false;

    if(limpio == true){
        respuesta = true;
    }
    return respuesta;
}

void Ave::baniar(){
    limpio = true;
}