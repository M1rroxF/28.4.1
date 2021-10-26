#pragma once
#include <utility>
#include <vector>
#include <string>
#include <map>
#include <cstdlib>
#include <cassert>

using namespace std;

int random(int min, int max)
{
    return rand() % (max - (min - 1)) + min;
}



class Branch
{
    vector<Branch> children;
    string elfName;
  public:

    void add()
    {
        children.resize(5);
        for (int i = 0; i < 5; i++)
        {
            int rand = random(3, 5);
            children[i].children.resize(rand);
            for (int j = 0; j < rand; j++)
            {
                int rand1 = random(2, 3);
                children[i].children[j].children.resize(rand1);
            }
        }

        for (int i = 0; i < 5; i++)
        {
            cout << "tree #" << i << endl;
            for (int j = 0; j < children[i].children.size(); j++)
            {
                cout << "   big #" << j << endl;
                cout << "   enter elf: ";
                cin >> children[i].children[j].elfName;

                for (int k = 0; k < children[i].children[j].children.size(); k++)
                {
                    cout << "       mid #" << k << endl;
                    cout << "       enter elf: ";
                    cin >> children[i].children[j].children[k].elfName;
                }
            }
        }
    }

    void print()
    {
        for (int i = 0; i < children.size(); i++)
        {
            cout << "Tree #" << i << endl;
            for (int j = 0; j < children[i].children.size(); j++)
            {
                cout << "   big #" << j << endl;
                if (children[i].children[j].elfName != "None")
                    cout << "   " << children[i].children[j].elfName << endl;

                for (int k = 0; k < children[i].children[j].children.size(); k++)
                {
                    cout << "       mid #" << k << endl;
                    if (children[i].children[j].children[k].elfName != "None")
                        cout << "       " << children[i].children[j].children[k].elfName << endl;
                }
            }
        }
    }
};