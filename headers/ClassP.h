#include <string>
#ifndef DZ5_CLASSP_H
#define DZ5_CLASSP_H
using namespace std;

class Element{
private:

    float a,z;
    int n;
    string name;
public:
    Element(string name, float a, float z, int n);
    Element (Element *el);
    void Print ();

    float getA() const;

    float getZ() const;

    int getN() const;

    string getName() const;

};

#endif //DZ5_CLASSP_H
