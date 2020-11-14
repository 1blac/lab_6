#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[25]{ 1,10,-1,5,25,-2,3,-3,22,0,24,8,6,-1,-4,11,23,12,-19,-13,4,20,1,5,-10 };
			c = Sum(a, 25);
			Assert::AreEqual(c, 67);
		}
	};
}
