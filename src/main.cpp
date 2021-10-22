#include <iostream>
#include <vector> // vector<>
#include <fstream> // ofstream, ifstream
#include <string> // stoi()
#include <cstdlib> // rand()
#include <map> // map<>
#include <ctime> // time_t, tm*
#include <iomanip> // get_time(), put_time(), get_time()

using namespace std;

#include "Window.h"

int main() {
    Window window;

    {
        vector<int> pos(2);
        vector<int> size(2);

        cout << "Enter position x, y: ";
        cin >> pos[0] >> pos[1];

        cout << "Enter size x, y: ";
        cin >> size[0] >> size[1];

        window.init(size, pos);
    }

    string move;

    do {
        cout << "<";
        cin >> move;

        if (move == "move")
        {
            window.move();
        }
        else if (move == "resize")
        {
            window.resize();
        }
        else if (move == "display")
        {
            window.display();
        }
    } while (move != "close");
}