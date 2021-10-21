#include <iostream>
#include <vector> // vector<>
#include <fstream> // ofstream, ifstream
#include <string> // stoi()
#include <cstdlib> // rand()
#include <map> // map<>
#include <ctime> // time_t, tm*
#include <iomanip> // get_time(), put_time(), get_time()

#include "music.h"

using namespace std;

int main()
{
    Audio_player audioPlayer;
    string move;

    cout << "Enter first track\n";
    audioPlayer.add();

    do {
        cin >> move;

        if (move == "add")
        {
            audioPlayer.add();
        }
        else if (move == "play")
        {
            cin >> move;
            audioPlayer.play(move);
        }
        else if (move == "pause")
        {
            audioPlayer.pause();
        }
        else if (move == "next")
        {
            audioPlayer.next();
        }
        else if (move == "stop")
        {
            audioPlayer.stop();
        }
        else if (move == "info")
        {
            audioPlayer.getInfo();
        }
        else
        {
            cout << "Error!!!\n";
        }
    } while ( move != "exit");
}