#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3 rec/Lab 6.3 rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a[10] = { -78, 2, 98, 100, 70, 80, 4, 56, 59, 61 };
			int c = FindBiggestElement(a, 10, INT_MIN, 0);
			Assert::AreEqual(c, 100);
		}

		TEST_METHOD(TestMethod2)
		{
			int a[10] = { -46, 16, -15, 41, 38, -32, 41, 28, -40, 68 };
			int c = FindBiggestElement(a, 10, INT_MIN, 0);
			Assert::AreEqual(c, 68);
		}
	};
}
