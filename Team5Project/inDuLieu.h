#pragma once
#include <iostream>
class inDuLieu
{
private:
	inDuLieu();
	~inDuLieu();
	static inDuLieu* m_instance;
public:
	static inDuLieu* getInsatance();
	void WriteLog(std::string data,std::string nameFile);
};


