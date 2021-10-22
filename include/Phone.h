#pragma once
#include <vector>
#include <string>
#include <map>

using namespace std;

class Phone
{
    map<string, string> book;

  public:
    void add(bool g)
    {
        string num, name;
        cout << "Enter number\n"
                "+X XXX XXX XX XX\n";
        (g ? cin.ignore() : cin); getline(cin, num);
        cout << "Enter name: "; cin >> name;

        book.insert(pair<string, string> (num, name));
    }

    void call()
    {
        string move;
        cout << "Num or name: "; cin >> move;

        if (move == "num")
        {
            cout << "Enter number\n"
                    "+X XXX XXX XX XX\n";
            cin.ignore();
            getline(cin, move);

            auto i = book.find(move);
            if (i != book.cend())
            {
                cout << "call success" << endl;
            }
            else
            {
                cout << "Error!" << endl;
            }
        }
        else
        {
            cout << "name: ";
            cin >> move;
            for (auto i : book)
            {
                if (i.second == move) {
                    cout << "call success!" << endl;
                    return;
                }
            }
            cout << "Error!" << endl;
        }
    }

    void sms()
    {
        string move;
        cout << "Enter sms\n";
        cin.ignore();
        getline(cin, move);

        cout << "sms: " << move << " already sent" << endl;
    }

    void showInfo()
    {
        for (auto i : book)
        {
            cout << "name: " << i.second << " ; " << i.first;
        }
    }
};