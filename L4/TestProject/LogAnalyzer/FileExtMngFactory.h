#include <iostream>
#include <memory>
#include "stdafx.h"
//#include "FileExtMng.h"

using namespace std;

#ifdef LOGANALYZER_EXPORTS
#define LOGANALYZER_API __declspec(dllexport)
#else
#define LOGANALYZER_API __declspec(dllimport)
#endif

class LOGANALYZER_API CFileExtMngFactory{
 private:
        std::shared_ptr<CFileExtMng> fem;
        static std::shared_ptr<CFileExtMngFactory> me;
        CFileExtMngFactory();
    public:
        void setFileExtensionManager(std::shared_ptr<CFileExtMng> fm);
        std::shared_ptr<CFileExtMng> getFileExtensionManager();
        static std::shared_ptr<CFileExtMngFactory> getFEMFactory();

};

extern LOGANALYZER_API int nLogAnalyzer;

LOGANALYZER_API int fnLogAnalyzer(void);