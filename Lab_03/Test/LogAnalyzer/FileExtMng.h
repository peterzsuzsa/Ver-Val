#include <string.h>
#include <iostream>

using namespace std;

class FileExtMng{
public:
	FileExtMng();
	virtual ~FileExtMng();
	virtual bool isExtensionValid(std::string name)=0;
	
};

class FakeFileExtMng:public FileExtMng{
private:
	bool v;
public:
	FakeFileExtMng();
	~FakeFileExtMng();
	bool isExtensionValid(std::string name);
	void setErtek(bool v);
};