#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2r/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62r
{
	TEST_CLASS(UnitTest62r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[20]{ 1,6,-10,5,29,-2,4,-3,2,-29,20,19,6,-9,-4,20,23,16,-19,-13 };
			c = midArf(a, 20,5,0,0);
			Assert::AreEqual(c, -4);
		}
	};
}
