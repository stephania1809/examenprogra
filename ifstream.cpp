#include<iostream>
#include<fstream>
using namespace std;
int main () {
ifstream fin("rb.txt");
string nombre;
int edad ;
fin>>nombre>>edad;
cout<<"ingrese su edad";

return 0;
}
