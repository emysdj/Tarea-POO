#include "Empleado.cpp"
#include<iostream>
using namespace std;
main (){
    string nombres,apellidos,direccion, codempleado, puesto;
    int telefono,sueldo;
    
    cout<<"---------EMPLEADO---------"<<endl;
    cout<<"Ingrese Codigo de Empleado:";
    cin>>codempleado;
    cout<<"Ingrese Nombres:";
    cin>>nombres;
    cout<<"Ingrese Apellidos:";
    cin>> apellidos;
    cout<<"Ingrese Puesto:";
    cin>> puesto;
    cout<<"Ingrese Sueldo:";
    cin>> sueldo;
    cout<<"Ingrese Direccion:";
    cin>>direccion;
    cout<<"Ingrese Telefono:";
    cin>>telefono;

    //instanciar objeto empleado
    Empleado obj= Empleado(nombres,apellidos,direccion,telefono,codempleado,puesto,sueldo);
    obj.muestra();
}

