#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ProjectLib/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(UnitTest1)
{
public:

	TEST_METHOD(TestMethod1)
	{
		// TODO: �e�X�g �R�[�h�������ɑ}�����܂�

		Assert::AreEqual(Anagram::CheckWord("abc", "bac"), true);
	}
};
