#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1.it/lab_8.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		  {
			char* str = "abcoooaab";
			int count = Count(str);
			Assert::AreEqual(2, count);
		
		  }
	};
}
