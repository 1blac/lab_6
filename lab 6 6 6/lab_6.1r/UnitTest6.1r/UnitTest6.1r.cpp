#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61r
{
	TEST_CLASS(UnitTest61r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[25]{ 1,16,-10,5,29,-2,4,-3,22,-18,20,19,6,-9,-4,11,23,16,-19,-13,-11,28,21,-8,15 };
			c = Sum(a, 25, 1);
			Assert::AreEqual(c, 112);
		}
	};
}
