#include <iostream>
#include "all_functions.h"

using namespace std;

void scalpel(coordinates n1, coordinates n2)
{
    cout << "cut made!" << endl;
    cout << "x: " << n1.x << " y: " << n1.y << endl;
    cout << "x: " << n2.x << " y: " << n2.y << endl;
}

void hemostat(coordinates n)
{
    cout << "clamp made!" << endl;
    cout << "x: " << n.x << " y: " << n.y << endl;
}

void tweezers(coordinates n)
{
    cout << "tweezers!" << endl;
    cout << "x: " << n.x << " y: " << n.y << endl;
}

void suture(coordinates n1, coordinates n2)
{
    cout << "suture!" << endl;
    cout << "x: " << n1.x << " y: " << n1.y << endl;
    cout << "x: " << n2.x << " y: " << n2.y << endl;
}
