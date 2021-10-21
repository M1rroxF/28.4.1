#pragma once
#include <vector>

using namespace std;

class Number
{
    string plus;
    string three_1;
    string three_2;
    string two_1;
    string two_2;

  public:
    static Number set(string num)
    {
        Number g;

        int i;
        for (i = 0 ; num[i] != " " ; i++)
            g.plus += num[i];
        i++;

        for (; num[i] != " " ; i++)
            g.three_1 += num[i];
        i++;
        for (; num[i] != " " ; i++)
            g.three_2 += num[i];
        i++;

        for (; num[i] != " " ; i++)
            g.two_1 += num[i];
        i++;
        for (; num[i] != " " ; i++)
            g.two_2 += num[i];
    }

    static string strNum(Number *num)
    {
        string number = num->plus + "-" +
                num->three_1 + "-" + num->three_2 +
                num->two_1 + "-" + num->two_2;

        return number;
    }

    static void printNum(Number *num)
    {
        cout << num->plus << "-"
             << num->three_1 << "-" << num->three_2 << "-"
             << num->two_1 << "-" << num->two_2;
    }

    
};