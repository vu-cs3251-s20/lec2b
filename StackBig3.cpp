/**
 * Filename: StackBig3.cpp
 * Class: CS3251
 *
 * @author Julie A. Adams, G. Hemingway
 * Description: This file implements an abstract data type stack class using
 *              data hiding. This file does not use exception handling.
 */

#include "StackBig3.h"

Stack::Stack(uint32_t size) : stackTop(0), size(size), stack(new T[size]) {}

Stack::Stack(const Stack &inStack)
    : stackTop(inStack.stackTop), size(inStack.size),
      stack(new T[inStack.size]) {
  for (uint32_t i = 0; i < inStack.size - 1; i++) {
    stack[i] = inStack.stack[i];
  }
}

Stack::~Stack() { delete[] stack; }

Stack &Stack::operator=(const Stack &inStack) {
  if (this != &inStack) {
    T *temp_stack = new T[inStack.size];
    delete[] stack;
    for (uint32_t i = 0; i < inStack.size - 1; i++) {
      temp_stack[i] = inStack.stack[i];
    }
    stack = temp_stack;
    stackTop = inStack.stackTop;
    size = inStack.size;
  }
  return *this;
}

void Stack::push(const T &item) {
  stack[stackTop] = item;
  stackTop++;
}

void Stack::pop(T &item) { item = stack[--stackTop]; }

uint32_t Stack::top(T &item) {
  item = stack[stackTop - 1];
  return stackTop;
}

bool Stack::isEmpty() const { return stackTop == 0; }

bool Stack::isFull() const { return stackTop == size; }
