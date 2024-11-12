#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory8.1rec/laboratory8.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab81rec
{
	TEST_CLASS(lab81rec)
	{
    public:
		
        TEST_METHOD(TestCount)
        {
            char str1[] = "vlad, is, student, year";
            Assert::AreEqual(17, Count(str1, 0, 0)); 

            char str2[] = "no,commas,here";
            Assert::AreEqual(-1, Count(str2, 0, 0));

            char str3[] = "vlad,is,student,";
            Assert::AreEqual(15, Count(str3, 0, 0));
        }
	};
}
