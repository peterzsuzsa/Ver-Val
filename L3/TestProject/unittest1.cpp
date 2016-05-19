#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\L3\LogAnalyzer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		BEGIN_TEST_METHOD_ATTRIBUTE(Skipped_Test)
			TEST_OWNER(L"Zs")
			TEST_IGNORE()
		END_TEST_METHOD_ATTRIBUTE()
		TEST_METHOD(Skipped_Test)
		{
			Assert::AreEqual(1, 1);
			// TODO: Your test code here
		}

		TEST_METHOD(LogAnalyzer_isValidFileName_ReturnsTrue) {

			FakeFileExtMng* fem = new FakeFileExtMng();
			fem->setErtek(true);
			CLogAnalyzer la(fem);
			string s = "filename.txt";

			Assert::IsTrue(la.isTheFileValid(s));
			
		}
		
		TEST_METHOD(LogAnalyzer_isValidFileName_ReturnsExeption) {

			
			wchar_t message[200];

			try
			{
				FakeFileExtMng* fem = new FakeFileExtMng();
				fem->setErtek(true);
				CLogAnalyzer la(fem);
				string s = "aa";
				// Should raise an exception:
				bool res = la.isTheFileValid(s);
				_swprintf(message, L"No exception for input %g", "aaa");
				//::IsTrue(res, message, LINE_INFO());
				Assert::Fail(message, LINE_INFO());
			}
			catch (invalidFileName ex)
			{
				Logger::WriteMessage("Correct exeption");
			}
			catch (...)
			{
				_swprintf(message, L"Incorrect exception for %g", "aa");
				Assert::Fail(message, LINE_INFO());
			}
			
		}
		

	};
}