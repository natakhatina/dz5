#include <iostream>
#include <vector>
#include "headers/classP.h"
using namespace std;

int main() {
    Element a("abc",1,2,3);
    Element*a_uk=&a;
    Element b(a_uk);
    a.Print();
    cout << a.getN()  <<endl;
    cout << b.getN()  <<endl;

    vector <Element> V;
    Element c("abc",4,5,6);
    Element d("abc",7,8,9);
    Element e("abc",0,11,22);
    V.push_back(a);
    V.push_back(b);
    V.push_back(c);
    V.push_back(d);
    V.push_back(e);
//    for (auto &item:V)
//        cout<<item<<'\n';
   // vector <Element>:: iterator unit=V.begin();
    for (vector<Element>::const_iterator unit = V.begin(); unit != V.end(); ++unit)
        std::cout operator<< *unit << ' ';

    return 0;
}