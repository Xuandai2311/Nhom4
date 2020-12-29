#pragma once
#include <iostream>
#include "QLSach.h"
#include "QLDG.h"
class MainMenu
{
private: 
	QLSach qlsach;
	QLDG qldg;
	void thuThu();
	void sinhVien();
	void moQLSach();
	void moQLDG();
	void moMuonSach();
public:
	void Wellcome();
};

