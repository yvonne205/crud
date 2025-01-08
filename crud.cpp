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
//Read and display all items//
void readItems(const vector<Item>&items) {
  if (items.empty ()) {
    cout<<"Item not found!";
  } else {
    cout<<"/n--- Item list---/n";
      for(const auto&item:items) {
      item.display ();
    }

}

}
//update an item//
void updateItems(vector<Item>&item) {
  int id;
  cout<<"/nEnter Item ID to update/n";
  cin>>id;

  for(auto&items:items){
    if(item.id == id) {
      cin.ignore ();
      cout<<"Enter Item name: ";
      getline(cin,item.name);
      cout<<"Enter ID Price: ";
      cin>>newItem.price;
      cout<<"Item updated successfully!";
      return;
      }
    } cout<<"Item with ID":<<id<<" not found/n";
}

//delete an item//
void deleteItems(vector<Item>&items) {
  int id;
  cout<<"Enter Item Id to be deleted: ";
  cin>>id;

  for(auto it = items.begin (); it != items.end (); ++ it) {
    if (it-> id == id) {
      items.erase (it);
      cout<<"Item deleted successsfully!";
      return;
      }
    } cout<<"Item with ID: "<<id<<" not found;


}