#pragma once

using namespace std;

class Track
{
  public:
    string name;
    tm create{};
    int duration{};

    static Track nT(const string& n, tm c, int d)
    {
        Track g;
        g.name = n; g.create = c; g.duration = d;
        return g;
    }
};
