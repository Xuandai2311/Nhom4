#pragma once
#include "DocGia.h"
#include "Sach.h"
#include "QLSach.h"
#include <iostream>
#include <vector>
using namespace std;
class QLDG : public QLSach
{
private:
	vector<DocGia> listDocGia;
	vector<Sach> listSach;
	bool checkDataList(string idDocGia);
public:
	QLDG();
	/*void muonSach();*/
	/*void xemMuonSach();*/
	void themDocGia();
	void xemDocGia();
	void xoaDocGia();
	void timkiemDocGia();
	void suaDocGia();
	void inDuLieu();
	/*void inDuLieuMuonSach();*/
};

