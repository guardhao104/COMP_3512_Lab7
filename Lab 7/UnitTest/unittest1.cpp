#include "CppUnitTest.h"
#include "../Lab 7/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Sum_TestEmptyInput)
		{
			std::vector<int> v = {};
			Assert::AreEqual(0, sum(v));
		}
		TEST_METHOD(Sum_TestOneInput)
		{
			std::vector<int> v = {5};
			Assert::AreEqual(5, sum(v));
		}
		TEST_METHOD(Sum_TestNegativeInput)
		{
			std::vector<int> v = { -5, -2, -1 };
			Assert::AreEqual(-8, sum(v));
		}
		TEST_METHOD(Sum_TestMixingInput)
		{
			std::vector<int> v = { -5, -2, -1, 0, 2, 1 };
			Assert::AreEqual(-5, sum(v));
		}
		TEST_METHOD(Sum_TestOverMaximumInput)
		{
			int max = std::numeric_limits<int>::max();
			std::vector<int> v = {max, max};
			Assert::AreEqual(2 * max, sum(v));
		}
		TEST_METHOD(Sum_TestRandomInput)
		{
			std::vector<int> v = { 1, 2, 3, 4, 5 };
			Assert::AreEqual(15, sum(v));
		}
	};

	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(Max_TestEmptyInput)
		{
			std::vector<int> v = {};
			Assert::AreEqual(0, max(v));
		}
		TEST_METHOD(Max_TestOneInput)
		{
			std::vector<int> v = { 5 };
			Assert::AreEqual(5, max(v));
		}
		TEST_METHOD(Max_TestMaxAtLastInput)
		{
			std::vector<int> v = { 1, 2, 3, 4, 5 };
			Assert::AreEqual(5, max(v));
		}
		TEST_METHOD(Max_TestMaxAtFirstInput)
		{
			std::vector<int> v = { 5, 4, 3, 2, 1 };
			Assert::AreEqual(5, max(v));
		}
		TEST_METHOD(Max_TestNegativeInput)
		{
			std::vector<int> v = { -5, -2, -1 };
			Assert::AreEqual(-1, max(v));
		}
		TEST_METHOD(Max_TestMixingInput)
		{
			std::vector<int> v = { -5, -2, -1, 0, 2, 1 };
			Assert::AreEqual(2, max(v));
		}
		TEST_METHOD(Max_TestRandomInput)
		{
			std::vector<int> v = { 3, 2, 5, 1, 4 };
			Assert::AreEqual(5, max(v));
		}
		TEST_METHOD(Max_TestDuplicateInput)
		{
			std::vector<int> v = { 5, 2, 5, 2, 5 };
			Assert::AreEqual(5, max(v));
		}
	};

	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(Min_TestEmptyInput)
		{
			std::vector<int> v = {};
			Assert::AreEqual(0, min(v));
		}
		TEST_METHOD(Min_TestOneInput)
		{
			std::vector<int> v = { 5 };
			Assert::AreEqual(5, min(v));
		}
		TEST_METHOD(Min_TestMaxAtLastInput)
		{
			std::vector<int> v = { 5, 4, 3, 2, 1 };
			Assert::AreEqual(1, min(v));
		}
		TEST_METHOD(Min_TestMaxAtFirstInput)
		{
			std::vector<int> v = { 1, 2, 3, 4, 5 };
			Assert::AreEqual(1, min(v));
		}
		TEST_METHOD(Min_TestNegativeInput)
		{
			std::vector<int> v = { -5, -2, -1 };
			Assert::AreEqual(-5, min(v));
		}
		TEST_METHOD(Min_TestMixingInput)
		{
			std::vector<int> v = { -5, -2, -1, 0, 2, 1 };
			Assert::AreEqual(-5, min(v));
		}
		TEST_METHOD(Min_TestRandomInput)
		{
			std::vector<int> v = { 3, 2, 5, 1, 4 };
			Assert::AreEqual(1, min(v));
		}
		TEST_METHOD(Min_TestDuplicateInput)
		{
			std::vector<int> v = { 5, 2, 5, 2, 5 };
			Assert::AreEqual(2, min(v));
		}
	};

	TEST_CLASS(UnitTest4)
	{
	public:

		TEST_METHOD(Average_TestEmptyInput)
		{
			std::vector<int> v = {};
			Assert::AreEqual(0.0, average(v));
		}
		TEST_METHOD(Average_TestOverMaximumInput)
		{
			int max = std::numeric_limits<int>::max();
			std::vector<int> v = { max, max, max };
			Assert::AreEqual((double) max, average(v));
		}
		TEST_METHOD(Average_TestOneInput)
		{
			std::vector<int> v = { 5 };
			Assert::AreEqual(5.0, average(v));
		}
		TEST_METHOD(Average_TestDuplicateInput)
		{
			std::vector<int> v = { 5, 5, 5, 5, 5 };
			Assert::AreEqual(5.0, average(v));
		}
		TEST_METHOD(Average_TestZeroAsInput)
		{
			std::vector<int> v = { 0 };
			Assert::AreEqual(0.0, average(v));
		}
		TEST_METHOD(Average_TestNegativeInput)
		{
			std::vector<int> v = { -1, -2, -3 };
			Assert::AreEqual(-2.0, average(v));
		}
		TEST_METHOD(Average_TestMixingInput)
		{
			std::vector<int> v = { -1, -2, -3, 0, 1, 3 };
			Assert::AreEqual(-2.0 / 6, average(v));
		}
		TEST_METHOD(Average_TestRandomInput)
		{
			std::vector<int> v = { 1, 2, 3, 4, 5 };
			Assert::AreEqual(3.0, average(v));
		}
	};
}  