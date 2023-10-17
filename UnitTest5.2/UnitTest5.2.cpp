#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.2/LB5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			int n = 0;
			c = S(1, 0.00001, n, 1);
			Assert::AreEqual(c, 0.540302, 0.00001);
		}

		TEST_METHOD(TestMethod2)
		{
			double a;
			int n = 0;
			a = A(1, 5, 1);
			Assert::AreEqual(a, -0.0111111, 0.00001);
		}
	};
}
