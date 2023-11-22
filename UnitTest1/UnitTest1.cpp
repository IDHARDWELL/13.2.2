#include "pch.h"
#include "CppUnitTest.h"
#include "../FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		
				// Arrange
				int base = 5, height = 3;

				// Act
				double result = TRAPEZOID_AREA(base, height);

				// Assert
				Assert::AreEqual(result, 7.5);

		}
	};
}
