#include <iostream>
#include "all_functions.h"

using namespace std;

void enter_coord(coordinates& n, const string& text)
{
    cout << text;
    cin >> n.x >> n.y;
}


