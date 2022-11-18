
#include<iostream>
using namespace std;
#include<string>
#include "Especies.h"

int main(){
//int _edad, bool _pareja, string _nombre_pareja, char _sexo, int _crias, float _peso, int _plumas, string _nombre
    Mamifero leon(20, false,"M",1,120.5,234354353, "Alex");
    Reptil cocodrilo(70, false, ,"M",4,136.5,23453, "Coco");
    Ave buho(12, true,"H",0,30.7,784353, "Yuvi");

    
    cout<<"Peso del leon: "<<leon.mostrarPeso()<<endl;
    leon.alimentarAnimal(39.4);
    cout<<"Peso del leon: "<<leon.mostrarPeso()<<endl;

  

    return 0;
}