#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			int a[20]{ 1,10,-10,5,29,-2,4,-3,22,-18,20,19,6,-9,-4,11,23,16,-19,-13};
			c = midArf(a, 20);
			Assert::AreEqual(c, 4.4);
		}
	};
}
