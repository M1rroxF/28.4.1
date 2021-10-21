#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>

#include "Tracks.h"
using namespace std;

#define off (-1)

class Audio_player
{
    vector<Track> music;
    int playing = off;
    int off_play = off;

  public:
    void add()
    {
        string name;
        tm create{};
        int duration{};

        {
            cout << "Enter name: "; cin >> name;
            cout << "Enter duration: "; cin >> duration;

            time_t t = time(nullptr); create = *localtime(&t);
        }

        music.push_back( Track::nT(name, create, duration) );
    }

    void play(const string& name)
    {
        int num = off;
        bool *go = new bool {true};

        for (int i = 0 ; i < music.size() && go; i++)
        {
            if (music[i].name == name)
            {
                go = false;
                num = i;
            }
        }

        if (num != off)
        {
            playing = num;
        }
    }

    void pause()
    {
        if (playing != off)
        {
            off_play = playing;
            playing = off;
        }
    }

    void next()
    {
        playing = rand() % music.size();
        off_play = off;
    }

    void stop()
    {
        playing = off;
        off_play = off;
    }

    void getInfo()
    {
        for (int i = 0 ; i < music.size() ; i++)
        {
            cout << "Track #" << i+1 << endl
                 << "   name: " << music[i].name << endl
                 << "   create: " << asctime(&music[i].create)
                 << "   duration: " << music[i].duration << endl << endl;
        }

        if (playing != off)
        {
            cout << "Now playing!\n";
            cout << "Track #" << playing + 1 << endl
                 << "   name: " << music[playing].name << endl
                 << "   create: " << asctime(&music[playing].create) << endl
                 << "   duration: " << music[playing].duration << endl;
        }
        else if (off_play != off)
        {
            cout << "Now on pause!\n";
            cout << "Track #" << off_play + 1 << endl
                 << "   name: " << music[off_play].name << endl
                 << "   create: " << asctime(&music[off_play].create) << endl
                 << "   duration: " << music[off_play].duration << endl;
        }
    }
};