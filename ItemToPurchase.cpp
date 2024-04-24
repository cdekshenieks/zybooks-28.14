#include "ItemToPurchase.h"
#include <iostream>

ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity){
  this->name = name;
  this->description = description;
  this->price = price;
  this->quantity = quantity;
}
ItemToPurchase::ItemToPurchase(){
name = "";
description = "none";
price = 0;
quantity = 0; 
}

//Setter Function
void ItemToPurchase::SetDescription(string& description) {
  this->description = description;
}

//Print functions

void ItemToPurchase::PrintItemCost(){
cout << name << " " << quantity << " @ $" << price << " = $" << quantity * price << endl;
}
void ItemToPurchase::PrintItemDescription(){
cout << name << ": " << description << endl;
}











