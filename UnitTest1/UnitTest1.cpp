#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.1/LB5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = h(30, 1);
			Assert::AreEqual(c, 0.997796, 0.00001);

		}
	};
}
