#include<iostream>
#include<fstream>
using namespace std;
int main () {
 char texto[40];
ofstream fich("rbd.txt");
cout << "Introduce tu nombre: ";
    cin >>  texto;
fich<<texto;
ifstream fin("rbd.txt");

}
