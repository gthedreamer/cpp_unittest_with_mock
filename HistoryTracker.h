#include "IHistory.h"

class HistoryTracker : public IHistory
{
  public:
   void updateOperation(string operation, int a, int b);
};
