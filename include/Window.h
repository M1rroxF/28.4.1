#pragma once
#include <vector>
#include <string>
#include <map>

using namespace std;

class Window
{
    int window[80][50];
    vector<int> position;
    vector<int> size;

  public:
    void init(vector<int> s, vector<int> pos)
    {
        size = s; position = pos;
        size[0] += 1; size[1] += 1;
        position[0] -= 1; position[1] -= 1;

        for (int i = 0 ; i < 80 ; i++){
            for (int j = 0 ; j < 50 ; j++)
            {
                if (i < position[0] + size[0] && i > position[0]
                    && j < position[1] + size[1] && j > position[1])
                {
                    window[i][j] = 1;
                }
                else
                {
                    window[i][j] = 0;
                }
            }
        }
    }

    void move()
    {
        cout << "Enter position x, y: ";
        cin >> position[0] >> position[1];
        init(size, position);
    }

    void resize()
    {
        cout << "Enter size x, y: ";
        cin >> size[0] >> size[1];
        init(size, position);
    }

    void display()
    {
        for (int i = 0 ; i < 80 ; i++) {
            for (int j = 0 ; j < 50 ; j++)
            {
                if (window[i][j] == 1)
                    cout << "1";
                else
                    cout << " ";
            }   cout << endl;
        }
    }
};
