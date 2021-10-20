#include <iostream>
#include <vector>
#include <ctime>

#include "music.h"
#include "Track.h"

using namespace std;

class Audio_player
{
    vector<Track> tracks;
    int play_track_num;

  public:
    void add_track()
    {
        string name;
        int duration;
        time_t t = time(nullptr);

        cout << "Enter name: ";
        cin >> name;
        cout << "Enter duration: ";
        cin >> duration;

        tracks.push_back(add_track(name, localtime(t), duration));
    }
};