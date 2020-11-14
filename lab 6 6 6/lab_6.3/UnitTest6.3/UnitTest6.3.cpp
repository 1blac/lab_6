#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[25]{ 1,10,-1,5,29,-2,3,-3,22,-18,24,19,6,-9,-4,11,23,12,-19,-13,4,20,1,5,-10};
			c = Sum(a, 25);
			Assert::AreEqual(c, 195);
		}
	};
}
