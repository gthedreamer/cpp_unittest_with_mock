#include "Calculator.h"

Calculator :: Calculator(IHistory* _history)
{
  m_history = _history; 
}

int Calculator :: add(int a, int b)
{
   m_history->updateOperation("add",a,b);
   return (a+b);
}

int Calculator :: sub(int a, int b)
{
   m_history->updateOperation("sub",a,b);
   return (a-b);
}

int Calculator :: test()
{
   // TODO
}

