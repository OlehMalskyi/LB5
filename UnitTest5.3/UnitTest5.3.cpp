#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.3/LB5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = z(1);
			Assert::AreEqual(a, 0.46769, 0.00001);
		}
	};
}
