#include <iostream>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() : customerName("none"), currentDate("January 1, 2016") {}

//Adding and Removing items from the vector
void ShoppingCart::addItem(ItemToPurchase item) {
  cartItems.push_back(item.GetName());
  cartItems[itemQuantity] = item;
  itemQuantity++;
  totalPrice += item.GetPrice();
}

void ShoppingCart::removeItem(ItemToPurchase item) {
  bool found = false;
  while (int i = 0; i < itemCount && !found) {
    if (cartItems[i].GetName() == item.GetName()) {
      found = true;
      cartItems.pop_back(item.GetName())
      totalPrice -= cart[i].GetPrice();
      itemQuantity--;
      for 
