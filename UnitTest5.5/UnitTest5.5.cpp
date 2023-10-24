#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.5/LB5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = sumOfDigits(123456);
			Assert::AreEqual(c, 21, 0.001);
		}

		TEST_METHOD(TestMethod2)
		{
			double q;
			q = countDigits(123456);
			Assert::AreEqual(q, 6, 0.001);
		}

		TEST_METHOD(TestMethod3)
		{
			double w;
			w = findMaxDigit(123456);
			Assert::AreEqual(w, 6, 0.001);
		}

		TEST_METHOD(TestMethod4)
		{
			double e;
			e = findMinDigit(123456);
			Assert::AreEqual(e, 1, 0.001);
		}
	};
}
