#include <iostream>
#include <vector>
#include <ctime>

#include "music.h"

using namespace std;

#define off (-1)

class Audio_player
{
    class Track
    {
        string name;
        tm create = *localtime(reinterpret_cast<const time_t *const>(time(nullptr)));
        int duration = 0;

        friend Audio_player;
    };

    vector<Track> tracks;
    vector<int> vec;
    int play_track_num = -1;
    int play_sing = -1;

  public:

    void add_track()
    {
        string name;
        int duration;
        time_t t = time(nullptr);
        struct tm local = *localtime(&t);

        cout << "Enter name: ";
        cin >> name;
        cout << "Enter duration: ";
        cin >> duration;

        Track g;
        g.name = name;
        g.create = local;
        g.duration = duration;

        tracks.push_back(g);
    }

    void pause()
    {
        play_sing = play_track_num;
        play_track_num = off;
    }
};
