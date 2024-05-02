//https://github.com/cdekshenieks/zybooks-28.14
//Corinne Dekshenieks and Savannah Nelson
#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
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

void ExecuteMenu(char choice, ShoppingCart& cart) {
   
    switch(choice) {
       case 'a': {
      cin.ignore();
      string name;
      string description;
      int price;
      int quant;
      cout << "ADD ITEM TO CART" << endl;
      cout << "Enter the item name:" << endl;
      getline(cin, name);
      cout << "Enter the item description:" << endl;
      getline(cin, description);
     cout << "Enter the item price:" << endl;
     cin >> price;
     cin.ignore();
     cout << "Enter the item quantity:" << endl;
     cin >> quant;
     cin.ignore();
     ItemToPurchase newItem;
     newItem.SetName(name);
     newItem.SetDescription(description);
     newItem.SetPrice(price);
     newItem.SetQuantity(quant);
     cart.AddItem(newItem);
     cout << endl;
          break;
       }
       
       case 'd': {
          cin.ignore();
          string name;
          cout << "REMOVE ITEM FROM CART" << endl;
          cout << "Enter name of item to remove:" << endl;
          getline(cin, name);
         cart.RemoveItem(name);
         cout << endl;
          break;
       }
       
       case 'c': {
          cin.ignore();
          string name;
          int newQuant;
          cout << "CHANGE ITEM QUANTITY" << endl;
          cout << "Enter the item name:" << endl;
          getline(cin, name);
          cout << "Enter the new quantity:" << endl;
          cin >> newQuant;
          cin.ignore();
          ItemToPurchase newItem(name, "none", newQuant);
          cart.ModifyItem(newItem);
          cout << endl;
          break;
       }
       
       case 'i': {
          cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
          cart.PrintDescriptions();
          cout << endl;
          break;
       }
       case 'o': {
          cout << "OUTPUT SHOPPING CART" << endl;
          cart.PrintTotal();
          cout << endl;
          break;
       }
    }
}

   


int main() {
   string customerName;
   string currentDate;
   char opt;
   
   cout << "Enter customer's name:" << endl;
   getline(cin, customerName);
   cout << "Enter today's date:" << endl;
   getline(cin, currentDate);
   cout << endl;
   
   ShoppingCart cart(customerName, currentDate);
   
   cout << "Customer name: " << cart.GetCustomerName() << endl;
   cout << "Today's date: " << cart.GetDate() << endl;
   cout << endl;
   
   PrintMenu();
   cout << endl;
   cout << "Choose an option:" << endl;
   cin >> opt;
   
   do {
      if (opt != 'a' && opt != 'd' && opt != 'c' && opt != 'i' && opt != 'o' && opt != 'q') {
         cout << "Choose an option:" << endl;
         cin >> opt;
      }
      else if (opt =='q') {
         break;
      }
      else {
         ExecuteMenu(opt, cart);
         PrintMenu();
         cout << endl;
         cout << "Choose an option:" << endl;
         cin >> opt;
      }
   }
   while (opt != 'q');
   
   return 0;
}
