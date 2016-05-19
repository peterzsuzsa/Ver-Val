#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\RootFinder\LogAnalyzer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		/*TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			Assert::AreEqual(1,1);
		}*/

		TEST_METHOD(LogAnalyzer_endsWith_expectTrue)
		{
			CLogAnalyzer cl;
			Assert::AreEqual(
				// Expected value:
				true,
				// Actual value:
				cl.endsWith("valamislf"),
				// Tolerance:
				0.0,
				// Message:
				L"Basic test failed",
				// Line number - used if there is no PDB file:
				LINE_INFO());
			// TODO: Your test code here
		}

		TEST_METHOD(LogAnalyzer_endsWith_expectFailed)
		{
			CLogAnalyzer cl;
			Assert::AreEqual(
				// Expected value:
				true,
				// Actual value:
				cl.endsWith("valami"),
				// Tolerance:
				0.0,
				// Message:
				L"Basic test failed",
				// Line number - used if there is no PDB file:
				LINE_INFO());
			// TODO: Your test code here
		}

		TEST_METHOD(LogAnalyzer_isTheFileValid_expectTrue)
		{
			CLogAnalyzer cl;
			Assert::AreEqual(
				// Expected value:
				true,
				// Actual value:
				cl.isTheFileValid("valami"),
				// Tolerance:
				0.0,
				// Message:
				L"The file name is not valid",
				// Line number - used if there is no PDB file:
				LINE_INFO());
			// TODO: Your test code here
		}

		TEST_METHOD(LogAnalyzer_isTheFileValid_expectFailed)
		{
			CLogAnalyzer cl;
			Assert::AreEqual(
				// Expected value:
				true,
				// Actual value:
				cl.isTheFileValid("va"),
				// Tolerance:
				0.0,
				// Message:
				L"The file name is not valid",
				// Line number - used if there is no PDB file:
				LINE_INFO());
			// TODO: Your test code here
		}

		TEST_METHOD(LogAnalyzer_isTheFileValid_exception)
		{
			wchar_t message[200];
			CLogAnalyzer cl;

			try
			{
				// Should raise an exception:
				bool res = cl.isTheFileValid("aa");
				_swprintf(message, L"No exception for input %g", "aaa");
				//::IsTrue(res, message, LINE_INFO());
				Assert::Fail(message, LINE_INFO());
			}
			catch (invalidFileName ex)
			{
				
			}
			catch (...)
			{
				_swprintf(message, L"Incorrect exception for %g", "aa");
				Assert::Fail(message, LINE_INFO());
			}
		}

		/*
		TEST_METHOD(Test_LogAnalyzer_isValidFileName_expect_true)
		{
			CLogAnalyzer rooter;
			Assert::AreEqual(
			true, 
			rooter.isTheFileValid("asdlslf"), 
			L"Basic test failed",
			LINE_INFO());
		}

		TEST_METHOD(Test_LogAnalyzer_isValidFileName_expect_invalidFileName_exception)
		{
			CLogAnalyzer rooter;
			bool exceptionThrown = false;   
			try {
				rooter.isTheFileValid("sl");
			} catch(invalidFileName& ex)
			{
				exceptionThrown = true;
			}
			catch (...)
			{
				exceptionThrown = false;
			}

			Assert::IsTrue(exceptionThrown);
				
		}*/
	};
}