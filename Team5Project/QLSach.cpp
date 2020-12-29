#include "QLSach.h"
#include<iostream>
#include<vector>
#include"inDuLieu.h"
using namespace std;

void QLSach::themSach()
{
	string answ = "y";
	while (answ =="y" || answ == "Y")
	{
		string idSach, tenSach,tacGia,nhaXB,namXb;
		cout << "Nhap ID Sach: "; std::cin >> idSach;
		cout << "Nhap Ten Sach: "; std::cin >> tenSach;
		cout << "Nhap Ten Tac Gia: "; std::cin >> tacGia;
		cout << "Nhap Nha Xuat Ban: "; std::cin >> nhaXB;
		cout << "Nhap Nam Xuat Ban: "; std::cin >> namXb;
		cout << endl;
		Sach s (idSach, tenSach, tacGia,nhaXB,namXb);
		if (checkDataList(idSach)) {
			listSach.push_back(s);
		}
		else {
			cout << "ID Sach Bi Trung khong the them" << endl;
		}
		cout << "Ban Co muon Tiep Tuc khong ? Y/N "; cin >> answ;
	}
	
	
}


bool QLSach::checkDataList(string idSach)
{
	for (int i = 0; i < listSach.size(); i++) {
		if (listSach[i].getIDSach() == idSach) {
			return false ;
		}
	}
	return true;
}

QLSach::QLSach()
{
	//default Contructor
}



void QLSach::xemSach()
{
	for (int i = 0; i < listSach.size(); i++) {
		cout << listSach[i].show() << endl;
	}
	system("pause");
}

void QLSach::xoaSach()
{
	string idSach;
	cout << "\nNhap ID Sach Can Xoa: "; cin >> idSach;
	for (int i = 0; i < listSach.size(); i++) {
		if (listSach[i].getIDSach() == idSach) {
			listSach.erase(listSach.begin()+i);
		}
	}
}

void QLSach::timkiemSach()
{
	string idSach;
	cout << "\nNhap ID Sach Can Tim: "; cin >> idSach;
	for (int i = 0; i < listSach.size(); i++) {
		if (listSach[i].getIDSach() == idSach) {
			cout << listSach[i].show();
		}
	}
}

void QLSach::suaSach()
{
	string idSach,newIdSach,newTenSach,newTacGia,newNhaXB,newNamXB;
	cout << "\nNhap ID Sacg Can sua: "; cin >> idSach;
	for (int i = 0; i < listSach.size(); i++) {
		if (listSach[i].getIDSach() == idSach) {
			cout << "Nhap ID moi: "; cin >> newIdSach;
			cout << "Nhap Ten Moi: "; cin >> newTenSach;
			cout << "Nhap Tac Gia Moi: "; cin >> newTacGia;
			cout << "Nhap Nha Xuat Ban Moi: "; cin >> newNhaXB;
			cout << "Nhap Nam Xuat Ban Moi: "; cin >> newNamXB;
			if (checkDataList(newIdSach)) {
				listSach[i].setIDSach(newIdSach);
				listSach[i].setTenSach(newTenSach);
				cout << "Sua Sach Thanh Cong";
			}
			else {
				cout << "ID bi trung khong the sua lai" << endl;
			}
			
		}
	}
}

void QLSach::inDuLieu()
{
	string data="";
	for (Sach s: listSach) {
		data += s.show();
	}
	cout << "In Du Lieu Thanh Cong"<< endl;
	inDuLieu::getInsatance()->WriteLog(data,"Sach");
}




