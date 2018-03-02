#include "IHistory.h"

class HistoryTrackerMock : public IHistory
{
  public:
   void updateOperation(string operation, int a, int b);
};
