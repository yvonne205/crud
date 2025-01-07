#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Item {
    int id;
    string name;
    double price;

    void display () const;
    cout <<"ID:"<<id<<", Name:"<,name<<", Price:$"<<price<<" endl;

}