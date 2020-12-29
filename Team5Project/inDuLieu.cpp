#include "inDuLieu.h"
#include<iostream>
#include <fstream>
using namespace std;
inDuLieu* inDuLieu::m_instance = 0;

inDuLieu::inDuLieu()
{
}

inDuLieu::~inDuLieu()
{
}

inDuLieu* inDuLieu::getInsatance()
{
	if (m_instance == 0)
	{
		m_instance = new inDuLieu();
	}
	return m_instance;
}

void inDuLieu::WriteLog(string data,string nameFile)
{
	ofstream of;
	of.open("F:/HUBT/nhom4/OneDrive/"+nameFile+".txt", ios::out);
	of << data;
	of.close();
}
