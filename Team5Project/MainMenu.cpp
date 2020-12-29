#include "MainMenu.h"
#include <iostream>
using namespace std;
void MainMenu::Wellcome()
{
	system("cls");
	int index;
	cout << "Chao Mung Den Voi Quan ly Thu Vien:" << endl;
	cout << "1. Sinh Vien" << endl;
	cout << "2. Thu Thu" << endl;
	cout << "0. Thoat Chuong Trinh" << endl;
	cout << "Moi Nhap Lua chon cua ban: "; cin >> index;
	switch (index)
	{
	case 1: sinhVien(); break;
	case 2: thuThu(); break;
	case 0: exit(0);
	default:
		cout << "Gia Tri Nhap khong Dung !! \n Vui Long Nhap Lai" << endl;
		Wellcome();
		break;
	}
}
void MainMenu::sinhVien()
{
	system("cls");
	int index;
	cout << "Chao Mung Sinh Vien Den Voi Quan ly Thu Vien:" << endl;
	cout << "1. Xem Sach" << endl;
	cout << "2. Tim Kiem Sach" << endl;
	cout << "3. Tro Ve" << endl;
	cout << "0. Thoat Chuong Trinh" << endl;
	cout << "Moi Nhap Lua chon cua ban: "; cin >> index;
	switch (index)
	{
	case 1: system("cls"); qlsach.xemSach(); break;
	case 2: system("cls"); qlsach.timkiemSach(); break;
	case 3: system("cls"); Wellcome(); break;
	case 0: exit(0);
	default:
		cout << "Gia Tri Nhap khong Dung !! \n Vui Long Nhap Lai" << endl;
		sinhVien();
		break;
	}
}


void MainMenu::thuThu()
{
	system("cls");
	int index;
	cout << "Chao Mung Thu Thu Den Voi Quan ly Thu Vien:" << endl;
	cout << "Nhap Lua Chon Cua Ban:" << endl;
	cout << "1. Quan Ly Doc Gia " << endl;
	cout << "2. Quan Ly Sach " << endl;
	cout << "3. Quay Lai Trang Chu" << endl;
	cout << "0. Thoat Chuong Trinh" << endl;
	cout << "Moi Nhap Lua Chon Cua ban: "; cin >> index;
	switch (index)
	{
	case 1: moQLDG(); break;
	case 2: moQLSach(); break;
	case 3: Wellcome(); break;
	case 0: exit(0);
	default:
		cout << "Gia Tri Nhap khong Dung !! \n Vui Long Nhap Lai" << endl;
		thuThu();
		break;
	}
}

void MainMenu::moQLDG()
{
	system("cls");
	int index;
	cout << "Chao Mung Thu Thu Den Voi Quan ly Doc Gia:" << endl;
	cout << "1. Them Doc Gia " << endl;
	cout << "2. Chinh sua Doc Gia " << endl;
	cout << "3. Hien thi toan bo Doc Gia " << endl;
	cout << "4. Tim kiem Doc Gia Theo ID" << endl;
	cout << "5. In Thong Tin Doc Gia " << endl;
	cout << "6. Muon Sach " << endl;
	cout << "7. Quay Lai Trang Chu" << endl;
	cout << "0. Thoat Chuong trinh" << endl;
	cout << "Moi Nhap Lua Chon Cua ban: "; cin >> index;
	switch (index)
	{
	case 1: qldg.themDocGia(); moQLDG(); break;
	case 2: qldg.suaDocGia(); moQLDG(); break;
	case 3: qldg.xemDocGia(); moQLDG(); break;
	case 4: qldg.timkiemDocGia(); moQLDG(); break;
	case 5: qldg.inDuLieu(); moQLDG(); break;
	//case 6: moMuonSach(); moQLDG(); break;
	case 7:  thuThu(); break;
	case 0: exit(0);
	default:
		cout << "Lua Chon Ban Nhap khong chinh xac !! \n Vui long Nhap Lai" << endl;
		moQLDG();
		break;
	}
}

//void MainMenu::moMuonSach()
//{
//	system("cls");
//	int index;
//	cout << "Chao Mung Thu Thu Den Voi Quan Ly Muon Sach" << endl;
//	cout << "1.Them Doc Gia Muon Sach" << endl;
//	cout << "2.Xem Doc Gia Muon Sach" << endl;
//	cout << "3.Tro Ve" << endl;
//	cout << "0. Thoa Chuong Trinh" << endl;
//	cout << "Moi Nhap Lua Chon Cua ban: "; cin >> index;
//	switch (index)
//	{
//	/*case 1: qldg.muonSach(); moMuonSach(); break;*/
//	case 2: qldg.xemMuonSach(); moMuonSach(); break;
//	case 3: thuThu();
//	case 0: exit(0);
//	default:
//		cout << "Gia Tri Nhap Khong Dung \n Vui Long Nhap Lai" << endl;
//		moMuonSach();
//		break;
//	}
//}

void MainMenu::moQLSach()
{
	system("cls");
	int index;
	cout << "Chao Mung Thu Thu Den Voi Quan ly Sach:" << endl;
	cout << "1. Them Sach " << endl;
	cout << "2. Chinh sua Sach " << endl;
	cout << "3. Hien thi toan bo Sach " << endl;
	cout << "4. Tim kiem Sach Theo ID" << endl;
	cout << "5. In Thong Tin Sach " << endl;
	cout << "6. Quay Lai Trang Chu" << endl;
	cout << "0. Thoat Chuong Trinh" << endl;
	cout << "Moi Nhap Lua Chon Cua ban: "; cin >> index;
	switch (index)
	{
	case 1: qlsach.themSach(); moQLSach(); break;
	case 2: qlsach.suaSach(); moQLSach(); break;
	case 3: qlsach.xemSach(); moQLSach(); break;
	case 4: qlsach.timkiemSach(); moQLSach(); break;
	case 5: qlsach.inDuLieu(); moQLSach(); break;
	case 0: exit(0);
	case 6:  thuThu(); break;
	default:
		cout << "Lua Chon Ban Nhap khong chinh xac !! \n Vui Long Nhap Lai" << endl;
		moQLSach();
		break;
	}
}
