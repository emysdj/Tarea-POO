#include "Cliente.cpp"
#include<iostream>
using namespace std;
main (){
   string nit,nombres,apellidos,direccion;
   int telefono;
   cout<<"---------CLIENTE---------"<<endl;
   cout<<"Ingrese Nit:";
   cin>>nit;
   cout<<"Ingrese Nombres:";
   cin>>nombres;
   cout<<"Ingrese Apellidos:";
   cin>> apellidos;
   cout<<"Ingrese Direccion:";
   cin>>direccion;
   cout<<"Ingrese Telefono:";
   cin>>telefono;

   //instansear objeto
   Cliente obj= Cliente(nombres,apellidos,direccion,telefono,nit);
   obj.mostrar();

}
