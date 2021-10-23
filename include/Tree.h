#pragma once
#include <vector>
#include <string>
#include <map>
#include <cstdlib>
#include <cassert>

using namespace std;

#include "Home.h"

int random(int min, int max)
{
    return rand() % (max - (min - 1)) + min;
}

class Tree
{
    vector<vector<vector<House>>> tree;

  public:
    Tree()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Tree #" << i << endl;
            vector<vector<House>> h1;
            int count_big = random(3, 5);
            for (int j = 0; j < count_big; j++)
            {
                cout << "   Big #" << j << endl;
                vector<House> h2;
                int count_middle = random(2, 3);
                for (int k = 0; k < count_middle; k++)
                {
                    cout << "       mid #" << k << endl;
                    cout << "       ";
                    h2.push_back(House());
                }
                h1.push_back(h2);
            }
            tree.push_back(h1);
        }
    }

    void search()
    {
        cout << "Enter search name: ";
        string name; cin >> name;

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < tree[i].size(); j++)
            {
                for (int k = 0; k < tree[i][j].size(); k++)
                {
                    if (tree[i][j][k].name == name)
                    {
                        cout << "Tree #" << i << endl;
                        cout << "Big #" << j << endl;
                        cout << "Middle #" << k << endl;
                        cout << "name: " << tree[i][j][k].name << endl;
                    }
                }
            }
        }
    }

    void ShowInfo()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "tree #" << i << endl;
            for (int j = 0; j < tree[i].size(); j++)
            {
                cout << "   big #" << j << endl;
                for (int k = 0; k < tree[i][j].size(); k++)
                {
                    cout << "       " << (tree[i][j][k].name != "" ? tree[i][j][k].name : "");
                }
            }
        }
    }
};
