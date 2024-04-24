#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;   
}

void ExecuteMenu(char option, ShoppingCart& cart) {
   
    switch(choice) {
       case 'a': {
      cart.AddItem();
          break;
       }
       case 'd': {
      cart.RemoveItem();
          break;
       }
       case 'c': {
      cart.ModifyItem();
          break;
       }
       case 'i': {
      cart.PrintDescriptions();
          break;
       }
       case 'o': {
      cart.ExecuteMenu()
          break;
       }
       case 'q': {
          break;
       }
       default : {
      cout << "Invalid choice. Please try again." << endl;
          break;
       }
    }
}

int main() {
   string name;
   string date;
   char choice;
   ShoppingCart cart;

   cout << "Enter customer's name:" << endl;
   getline(cin, name);
   cout << "Enter today's date:" << endl;
   getline(cin, date);
   cout<< endl;
   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl << endl;
   
   PrintMenu();
   cout << "Choose an option:";
   cin >> choice;
   ExecuteMenu(choice, cart);
   
   
   return 0;
}
