
#include<iostream>
using namespace std;
#include<string>
#include "Especies.h"

int main(){
//int _edad, bool _pareja, string _nombre_pareja, char _sexo, int _crias, float _peso, int _plumas, string _nombre
    Mamifero leon(20, false,"Alexa",'M',1,120.5,234354353, "Alex");
    Reptil cocodrilo(70, false, "Cuca",'M',4,136.5,23453, "Coco");
    Ave buho(12, false,"______",'H',0,30.7,784353, "Yuvi");

    
    cout<<"Peso del leon: "<<leon.mostrarPeso()<<endl;
    cout<<"Cuantos kilos de comida le quieres dar al leon?"<<endl;
    float kilos;
    cin>>kilos;
    leon.alimentarAnimal(kilos);
    cout<<"Peso del leon: "<<leon.mostrarPeso()<<endl;

    cocodrilo.llevarloAlMedico();

    cout<<"Nombre de la nueva pareja para "<<buho.nombre<<endl;
    string nombrecito;
    cin>>nombrecito;
    buho.emparejarAnimal(nombrecito);

    return 0;
}