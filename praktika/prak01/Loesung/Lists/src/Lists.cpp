//============================================================================
// Name        : Lists.cpp
// Author      : Reto Bonderer
// Version     :
// Copyright   : (c) HSR R. Bonderer
// Description : List implementations
//============================================================================

#include <iostream>
#include "SList.h"
#include "DList.h"
using namespace std;

int main()
{
  SList s;
  cout << "Singly linked list" << endl;
  s.print();

  s.insertAt(0, 1.23);
  s.insertAt(0, -34.6);
  s.insertAt(0, 0.4);
  s.print();

  s.insertAt(3, 7.97);
  s.insertAt(1, 88.9);
  s.print();

  s.deleteAt(2);
  s.print();

  DList d;
  cout << "Double linked list" << endl;
  d.print();

  d.insertAt(0, 1.23);
  d.insertAt(0, -34.6);
  d.insertAt(0, 0.4);
  d.print();

  d.insertAt(3, 7.97);
  d.insertAt(1, 88.9);
  d.print();

  d.deleteAt(5);
  d.insertAt(4, 44.5);
  d.print();



  return 0;
}
