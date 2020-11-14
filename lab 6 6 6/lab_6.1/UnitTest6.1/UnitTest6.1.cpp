#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[25]{ 1,10,-10,5,29,-2,4,-3,22,-18,20,19,6,-9,-4,11,23,16,-19,-13,-11,28,21,-8,15 };
			c = Sum(a,25);
			Assert::AreEqual(c, 106);
		}
	};
}
