#pragma once
#include <iostream>

using namespace std;

class House
{
  public:
    string name;

    House()
    {
        cout << "Enter name: ";
        cin >> name;
        if (name == "none") name = "";
    }
};