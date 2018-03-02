#include <iostream>
#include "IHistory.h"

using namespace std;

class Calculator
{
   public:
	Calculator(IHistory* _history);

	int add(int a, int b);
	int sub(int a,int b);
   private:
   	IHistory* m_history;
};
