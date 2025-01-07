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

//function prorotypes//
void createItems(vector<Item>&items);
void readItems(const vector<Item>&items);
void updateItems(vector<Item>&items);
void deleteItems(vector<Item>&items);

int main () {
  vector<Item>&items;
  int choice;

  do{
  cout<<"/n--- CRUD Menu Operations---/n";
  cout<<" 1. Create Item/n";
 
  }
}