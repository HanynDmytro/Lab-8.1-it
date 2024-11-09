#include "pch.h"
#include "CppUnitTest.h"
#include "../pr8.1 IT/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "abcabcabc";
			int result = Count(str);
			Assert::AreEqual(3, result);
		}
	};
}
