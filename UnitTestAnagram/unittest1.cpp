#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ProjectLib/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(UnitTest1)
{
public:

	TEST_METHOD(TestMethodTrue)
	{
		Assert::AreEqual(Anagram::CheckWord("abc", "bac"), true);
	}
	
	TEST_METHOD(TestMethodFalse)
	{
		Assert::AreEqual(Anagram::CheckWord("abc", "aab"), false);
	}
};
