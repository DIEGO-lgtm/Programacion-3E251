#include <iostream>
using namespace std;
int a=74;
int b=185;
int* direccion = &a;

int main(int argc, char const *argv[])
{

cout<<"int"<< sizeof(int)<<"byte"<<endl;
cout<<"char"<< sizeof(char)<<"byte"<<endl;
cout<<"float"<< sizeof(float)<<"byte"<<endl;
cout<<"double"<< sizeof(double)<<"byte"<<endl;
cout<<"bool"<< sizeof(bool)<<"byte"<<endl;

cout<<"Operador direccion"<<endl;

cout<<"Direccion A:" << &a <<endl;
cout<<"Direccion B:" << &b <<endl;
cout<<direccion<<endl;
cout<<*direccion<<endl;
cout<<&direccion<<endl;
cout<<sizeof(direccion)<<endl;
}