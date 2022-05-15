#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\KATERYNA\Desktop\OOP\Lab1.5\Lab1.5\Lab1.5\Money.cpp"
#include "C:\Users\KATERYNA\Desktop\OOP\Lab1.5\Lab1.5\Lab1.5\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money m1, m2;
			m1.Init(6, 0);
			m2.Init(2, 0);
			Assert::AreEqual(Division(m1, m2), 3.);
		}
	};
}
