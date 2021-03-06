/*
 * stack.cpp
 *
 *  Created on: 10.05.2012
 *      Author: rbondere
 */


template<typename ElemType, int size>
Stack<ElemType, size>::Stack() :
  StackNoSize<ElemType>(&elems[0])
{
}

template<typename ElemType, int size>
void Stack<ElemType, size>::push(ElemType e)
{
  StackNoSize<ElemType>::error = isFull(); // Compiler kennt error nicht ohne Class-Qualifier
  if (!StackNoSize<ElemType>::error)
  {
    elems[StackNoSize<ElemType>::top] = e; // dito top
    StackNoSize<ElemType>::top++;
  }
}

template<typename ElemType, int size>
bool Stack<ElemType, size>::isFull() const
{
  return StackNoSize<ElemType>::top == size;
}
