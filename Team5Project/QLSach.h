#pragma once
#include<iostream>
#include "Sach.h"
#include<vector>
class QLSach
{
private: 
	std::vector<Sach> listSach;
	bool checkDataList(std::string idSach);
public:
	QLSach();
	void themSach();
	void xemSach();
	void xoaSach();
	void timkiemSach();
	void suaSach();
	void inDuLieu();
};

