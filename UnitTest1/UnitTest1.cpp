#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a(double a1, double d, int n);
			int t;
			t = a(1, 1, 6 - 1) + 1;
			Assert :: AreEqual (t, 6);
		}
	};
}
