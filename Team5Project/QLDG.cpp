#include "QLDG.h"
#include <iostream>
#include "inDuLieu.h"
using namespace std;
void QLDG::themDocGia()
{
	string answ = "y";
	while (answ == "y" || answ == "Y")
	{
		string idDocGia, tenDocGia, idSach, ngayMuon, thoiHan, diaChi,phone,email;
		cout << "Nhap ID: "; std::cin >> idDocGia;
		cout << "Nhap Ten: "; std::cin >> tenDocGia;
		cout << "Nhap ID Sach Muon: "; std::cin >> idSach;
		if (checkDataList(idSach) == true)
		{
			cout << "\n\t\tAccount ID Is Incorrect :( " << endl;
			themDocGia();
		}
		cout << "Nhap Ngay Muon Sach: "; cin >> ngayMuon;
		cout << "Nhap Thoi Han: "; cin >> thoiHan;
		cout << "Nhap dia chi: "; cin >> diaChi;
		cout << "Nhap So Dien Thoai: "; cin >> phone;
		cout << "Nhap Email: "; cin >> email;
		cout << endl;
		DocGia dg(idDocGia, tenDocGia, idSach, ngayMuon, thoiHan, diaChi, phone, email);
		if (checkDataList(idDocGia)) {
			listDocGia.push_back(dg);
		}
		else {
		cout << "ID Doc Gia Bi Trung khong the them" << endl;
		}
		cout << "Ban Co muon Tiep Tuc khong ? Y/N "; cin >> answ;
		
		
	}


}


bool QLDG::checkDataList(string idDocGia)
{
	for (int i = 0; i < listDocGia.size(); i++) {
		if (listDocGia[i].getIDDocGia() == idDocGia){
			return false;
		}
	}
	return true;
}

//bool QLDG::checkDataList(string idSach)
//{
//	for (int i = 0; i < listSach.size(); i++) {
//		if (listSach[i].getIDSach() == idSach) {
//			return false;
//		}
//	}
//	return true;
//}

QLDG::QLDG()
{
	//default Contructor
}

//void QLDG::muonSach()
//{
//	string answ = "y";
//	while (answ == "y" || answ == "Y")
//	{
//		string idDocGia,idSach, ngayMuon, thoiHan, diaChi, phone, email;
//		cout << "Nhap ID: "; std::cin >> idDocGia;
//		if (checkDataList(idDocGia) == true)
//		{
//			cout << "Khong Tim Thay ID Doc Gia" << endl;
//			muonSach();
//		}
//		cout << "Nhap ID Sach: "; std::cin >> idSach;
//		cout << "Nhap Ngay Muon: "; cin >> ngayMuon;
//		cout << "Nhap Thoi Han: "; cin >> thoiHan;
//		cout << endl;
//		DocGia dg(idDocGia, idSach, ngayMuon, thoiHan, diaChi, phone, email);
//		if (checkDataList(idDocGia)) {
//			listMuonSach.push_back(dg);
//		}
//		else {
//			cout << "ID Member Bi Trung khong the them" << endl;
//		}
//		cout << "Ban Co muon Tiep Tuc khong ? Y/N "; cin >> answ;
//	}
//}

//void QLDG::xemMuonSach()
//{
//	for (int i = 0; i < listDocGia.size(); i++) {
//		cout << listDocGia[i].show() << endl;
//	}
//	system("pause");
//}



void QLDG::xemDocGia()
{
	for (int i = 0; i < listDocGia.size(); i++) {
		cout << listDocGia[i].show() << endl;
	}
	system("pause");
}

void QLDG::xoaDocGia()
{
	string idDocGia;
	cout << "\nNhap ID Can Xoa: "; cin >> idDocGia;
	for (int i = 0; i < listDocGia.size(); i++) {
		if (listDocGia[i].getIDDocGia() == idDocGia) {
			listDocGia.erase(listDocGia.begin() + i);
		}
	}
}

void QLDG::timkiemDocGia()
{
	string idDocGia;
	cout << "\nNhap ID Can Tim: "; cin >> idDocGia;
	for (int i = 0; i < listDocGia.size(); i++) {
		if (listDocGia[i].getIDDocGia() == idDocGia) {
			cout << listDocGia[i].show();
		}
	}
}

void QLDG::suaDocGia()
{
	string idDocGia, newId, newName,newAddress,newPhone,newEmail;
	cout << "\nNhap ID Can sua: "; cin >> idDocGia;
	for (int i = 0; i < listDocGia.size(); i++) {
		if (listDocGia[i].getIDDocGia() == idDocGia) {
			cout << "Nhap ID moi: "; cin >> newId;
			cout << "Nhap Ten moi: "; cin >> newName;
			cout << "Nhap dia chi moi: "; cin >> newAddress;
			cout << "Nhap soDT moi: "; cin >> newPhone;
			cout << "Nhap Email moi: "; cin >> newEmail;
			if (checkDataList(newId)) {
				listDocGia[i].setIDDocGia(newId);
				listDocGia[i].setTenDocGia(newName);
				cout << "Sua Member Thanh Cong"<< endl;
			}
			else {
				cout << "ID bi trung khong the sua lai" << endl;
			}

		}
	}
}

void QLDG::inDuLieu()
{
	string data = "";
	for (DocGia dg : listDocGia) {
		data += dg.show();
	}
	cout << "Thong Tin Da Duoc in Ra Thanh cong " << endl;
	inDuLieu::getInsatance()->WriteLog(data, "DocGia");
}

//void QLDG::inDuLieuMuonSach()
//{
//	string data = "";
//	for (Sach dg : listSach) {
//		data += dg.show();
//	}
//	cout << "Thong Tin Da Duoc in Ra Thanh cong " << endl;
//	inDuLieu::getInsatance()->WriteLog(data, "DocGia");
//}
