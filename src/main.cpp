#include <iostream>
#include <vector> // vector<>
#include <fstream> // ofstream, ifstream
#include <string> // stoi()
#include <cstdlib> // rand()
#include <map> // map<>
#include <ctime> // time_t, tm*
#include <iomanip> // get_time(), put_time(), get_time()

#include "all_functions.h"

using namespace std;

int main()
{
    string text;

    do{
        cout << "Enter move: ";
        cin >> text;
        if (text == "scalpel")
        {
            coordinates n1{};
            coordinates n2{};
            enter_coord(n1, "Enter first x, y: ");
            enter_coord(n2, "Enter second x, y: ");

            scalpel(n1, n2);
        }
        else if (text == "hemostat")
        {
            coordinates n{};
            enter_coord(n);

            hemostat(n);
        }
        else if (text == "tweezers")
        {
            coordinates n{};
            enter_coord(n);

            tweezers(n);
        }
        else if (text == "suture")
        {
            coordinates n1{};
            coordinates n2{};
            enter_coord(n1, "Enter first x, y: ");
            enter_coord(n2, "Enter second x, y: ");

            suture(n1, n2);
        }
        else
        {
            cout << "Error" << endl;
        }
    } while (text != "suture");
}