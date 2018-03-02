#pragma once
#include <string>
using namespace std;

class IHistory
{
  public:
   virtual void updateOperation(string op,int a,int b) = 0;
};
