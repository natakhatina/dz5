#include <iostream>
#include <string>
#include "../headers/classP.h"
using namespace std;

Element::Element(string name, float a, float z, int n) : name(name), a(a), z(z), n(n) {}

Element::Element (Element *el){
    Element::name=el->name;
    Element::a=el->a;
    Element::z=el->z;
    Element::n=el->n;
}

float Element::getA() const {
    return a;
}

float Element::getZ() const {
    return z;
}

int Element::getN() const {
    return n;
}

string Element::getName() const {
    return name;
}

void Element::Print() {
    //std::cout << (int*)name  <<std::endl;
    //printf("%c\n",name);
    cout << name<<": " ;
    cout << a<<", ";
    cout << z<<", ";
    cout <<"кол-во изотопов: "<< n <<endl;
}
