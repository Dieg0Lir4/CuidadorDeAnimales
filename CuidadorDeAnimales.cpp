
#include<iostream>
using namespace std;
#include<string>
#include "Especies.h"

int main(){

    Mamifero leon(20, "Leon", "Alex");
    Reptil iguana = Reptil(10, "Hembra", "Iguana");
    Ave buho(30, "buho", "Claw");

    if(leon.mostrarVacunacion()){
        cout<<"El leon esta vacunado"<<endl;
    }
    else{
        cout<<"El leon NO esta vacunado"<<endl;
    }

    cout<<"La iguana pesa "<<iguana.mostrarPeso()<<"kg"<<endl;
    
    if(buho.mostrarLimpieza()){
         cout<<"El buho esta limpio"<<endl;
    }
    else{
        cout<<"El buho NO esta limpio"<<endl;
    }
    

    leon.vacunar();
    iguana.alimentar(40.4);
    buho.baniar();

     if(leon.mostrarVacunacion()){
        cout<<"El leon esta vacunado"<<endl;
    }
    else{
        cout<<"El leon NO esta vacunado"<<endl;
    }

    cout<<"La iguana pesa "<<iguana.mostrarPeso()<<"kg"<<endl;
    
    if(buho.mostrarLimpieza()){
         cout<<"El buho esta limpio"<<endl;
    }
    else{
        cout<<"El buho NO esta limpio"<<endl;
    }


    return 0;
}