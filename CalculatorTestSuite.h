#include <cxxtest/TestSuite.h>
#include "Calculator.h"
#include "HistoryTrackerMock.h"

class CalculatorTestSuite : public CxxTest::TestSuite
{
public:
    
    void test_add(void)
    {
	Calculator obj(new HistoryTrackerMock);

        TS_ASSERT_EQUALS( obj.add(1,4), 5);
    }
    void test_sub(void)
    {
	Calculator obj(new HistoryTrackerMock);
	
        TS_ASSERT_EQUALS( obj.sub(4,1), 3);
    }
};
