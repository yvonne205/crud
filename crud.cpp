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

int main () {Derive the torque equation of a moving iron instrument?
  vector<Item>&items;
  int choice;

  do{
  cout<<"/n--- CRUD Menu Operations---/n";
  cout<<" 1. Create Item/n";
  cout<<" 2. Read Item/n";
  cout<<" 3. Update Item/n";
  cout<<" 4. Delete Item/n";
  cout<<" 5. Exit/n";
  cin>>choice;

  switch (choice) {
  case 1:
    createItems;
    break;
  case 2:
    readItems;
    break;
  case 3:
    updateItems;
    break;
  case 4:
    deleteItems;
    break;
  case 5:
    cout<<"Exit the program"<<;
    break;
  default:
    cout<<"Invalid choice, please try again./n";
  }
 
  } while (choice!= 5);
    return 0;
}

//create new item//
void createItems(vector<Item>&item) {
Item newItem;
cout<<"Enter Item ID:";
cin>>newItem.id;
cin.ignore ();
cout<<"Enter Item name:";
getline(cin,newItem.name);
cout<<"Enter Item Price:";
cin>>newItem.newItem.price;

items.push_back (newItem);
coutt<<"Item created successfully!";

}