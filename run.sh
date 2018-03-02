#!/bin/bash

echo 'Generating .cpp file for CalculatorTestSuite.h'
cxxtestgen --error-printer -o CalculatorTestSuite.cpp CalculatorTestSuite.h

echo 'Compiling CalculatorTestSuite.cpp'
g++ -o runner -I$CXXTEST CalculatorTestSuite.cpp Calculator.cpp HistoryTrackerMock.cpp

echo 'run'
./runner

