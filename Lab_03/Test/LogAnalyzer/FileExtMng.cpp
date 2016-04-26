#include "FileExtMng.h"

FileExtMng::FileExtMng(){

}

FileExtMng::~FileExtMng(){

}

FakeFileExtMng::FakeFileExtMng(){

}

FakeFileExtMng::~FakeFileExtMng(){

}

bool FakeFileExtMng::isExtensionValid(string name){
	return v;
}

void FakeFileExtMng::setErtek(bool vNev){
	v = vNev;
}