// usestack.cpp - for CS 24 lab practice using stacks
// Susanna Kim & Fujie Liang, 5/16/17

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
  Stack s;

  s.push(7);
  s.push(5);
  s.push(3);

  int right = s.top();
  s.pop();
  int left = s.top();
  s.pop();
  s.push(left * right);

  right = s.top();
  s.pop();
  left = s.top();
  s.pop();
  s.push(left + right);
  
  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }

  return 0;
}


