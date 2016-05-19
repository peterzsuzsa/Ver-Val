#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\LogAnalyzer\LogAnalyzer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestProject
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
	/*	TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			Assert::AreEqual(1, 1);
		}
		*/
		TEST_METHOD(LogAnalyzer_isValidFileName_ValidFileName_ReturnsTrue) {
			shared_ptr<CFileExtMng> ffm = shared_ptr<CFakeFileExtMng>(new CFakeFileExtMng);
			std::dynamic_pointer_cast<CFakeFileExtMng>(ffm)->setErtek(true);
			CFileExtMngFactory::getFEMFactory()->setFileExtensionManager(ffm);
			CFakeFileExtMng* fem = new CFakeFileExtMng();
			CLogAnalyzer la;
			string s = "filename.txt";

			Assert::IsTrue(la.isTheFileValid(s));

		}

	/*	TEST_METHOD(LogAnalyzer_isValidFileName_ValidFileName_ReturnsFailed) {
			shared_ptr<CFileExtMng> ffm = shared_ptr<CFakeFileExtMng>(new CFakeFileExtMng);
			std::dynamic_pointer_cast<CFakeFileExtMng>(ffm)->setErtek(true);
			CFileExtMngFactory::getFEMFactory()->setFileExtensionManager(ffm);
			CFakeFileExtMng* fem = new CFakeFileExtMng();
			CLogAnalyzer la;
			string s = "fi";

			Assert::IsTrue(la.isTheFileValid(s));

		}*/

	};
}