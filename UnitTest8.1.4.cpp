#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\ап\Yaryna visual studio\8,1,4\8,1,4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest814
{
	TEST_CLASS(UnitTest814)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string test =  " QSKKK " ;
			string test1  = Change(test);
			string final = " ***KKK ";

			Assert::AreEqual(test1, final);
		}
	};
}
