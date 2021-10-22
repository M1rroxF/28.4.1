#include <iostream>
#include <vector> // vector<>
#include <fstream> // ofstream, ifstream
#include <string> // stoi()
#include <cstdlib> // rand()
#include <map> // map<>
#include <ctime> // time_t, tm*
#include <iomanip> // get_time(), put_time(), get_time()

using namespace std;

#include "Phone.h"

int main() {
    Phone phone;
    cout << "Enter first number\n";
    phone.add(false);

    string move;

    do {
        cout << "<";
        cin >> move;

        if (move == "add")
        {
            phone.add(true);
        }
        else if (move == "call")
        {
            phone.call();
        }
        else if (move == "sms")
        {
            phone.sms();
        }
        else {
            phone.showInfo();
        }
    } while (move != "exit");
}