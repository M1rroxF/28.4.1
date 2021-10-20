#pragma once
using namespace std;

struct coordinates
{
    double x;
    double y;
};



//standard
void enter_coord(coordinates& n, const string& text = "Enter x, y: ");

//surgeon
void scalpel(coordinates n1, coordinates n2);
void hemostat(coordinates n);
void tweezers(coordinates n);
void suture(coordinates n1, coordinates n2);