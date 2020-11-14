#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.3r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[25]{ 1,10,-10,5,20,-2,4,-3,22,-16,21,19,6,-9,-4,17,23,16,-19,-13,0,-2,3,24,12};
			c = Sum(a, 25, 1);
			Assert::AreEqual(c, 202);
		}
	};
}
