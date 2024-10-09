#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_5.4\Project_5.4\lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod0)
		{
			int k = 1;
			int N = 1;
			double result = S0(k, N);
			Assert::IsTrue(result - 0.5 < 0.000001);
		}
		TEST_METHOD(TestMethod1)
		{
			int k = 1;
			int N = 1;
			double result = S1(k, N, k);
			Assert::IsTrue(result - 0.5 < 0.000001);
		}
		TEST_METHOD(TestMethod2)
		{
			int k = 1;
			int N = 1;
			double result = S2(k, N, k);
			Assert::IsTrue(result - 0.5 < 0.000001);
		}
		TEST_METHOD(TestMethod3)
		{
			int k = 1;
			int N = 1;
			double result = S3(k, N, k, 0);
			Assert::IsTrue(result - 0.5 < 0.000001);
		}
		TEST_METHOD(TestMethod4)
		{
			int k = 1;
			int N = 1;
			double result = S4(k, N, N, 0);
			Assert::IsTrue(result - 0.5 < 0.000001);
		}
	};
}
