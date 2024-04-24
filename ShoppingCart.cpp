#include <iostream>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() : customerName("none"), currentDate("January 1, 2016") {}

string GetCustomerName() {
  return customerName;
} 

string GetDate() {
  return currentDate;
}

//Adding and Removing items from the vector
void ShoppingCart::AddItem(ItemToPurchase item, ) {
  cartItems.push_back(item.GetName());
  cartItems[itemQuantity] = item;
  itemQuantity++;
  totalPrice += item.GetPrice();
}

void ShoppingCart::RemoveItem(ItemToPurchase item) {
  bool found = false;
  while (int i = 0; i < cartItems.length && !found) {
    if (cartItems[i].GetName() == item.GetName()) {
      found = true;
      cartItems.pop_back(item.GetName())
      totalPrice -= cart[i].GetPrice();
      itemQuantity--;
      for (int j = i; j < itemCount; j++) {
                cart[j] = cart[j + 1];
            }
        }
        i++;
    }
    if (!found) {
        cout << "Item not found in cart." << endl;
    }
}

//define ModifyItem function
void ModifyItem(ItemToPurchase item) {
  for (int i = 0; i < cartItems.length; i++) {
    if (cartItems[i].GetName() == item.GetName()) {


int GetItemsInCart() {
  return cartItems[];
}

double GetCostOfCart() {
  return









