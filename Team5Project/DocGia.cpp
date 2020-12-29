#include "DocGia.h"

DocGia::DocGia(std::string idDocGia, std::string tenDocGia, std::string idSach, std::string ngayMuon,std::string thoiHan, std::string diaChi, std::string phone, std::string email)
{
	this->idDocGia = idDocGia;
	this->tenDocGia = tenDocGia;
	this->idSach = idSach;
	this->ngayMuon = ngayMuon;
	this->thoiHan = thoiHan;
	this->diaChi = diaChi;
	this->phone = phone;
	this->email = email;
}

void DocGia::setIDDocGia(std::string idDocGia)
{
	this->idDocGia = idDocGia;
}

void DocGia::setTenDocGia(std::string tenDocGia)
{
	this->tenDocGia = tenDocGia;
}
void DocGia::setIDSach(std::string idSach)
{
	this->idSach = idSach;
}

void DocGia::setDiaChi(std::string diaChi)
{
	this->diaChi = diaChi;
}
void DocGia::setNgayMuon(std::string ngayMuon)
{
	this->ngayMuon = ngayMuon;
}
void DocGia::setThoiHan(std::string thoiHan)
{
	this->thoiHan = thoiHan;
}

void DocGia::setPhone(std::string phone)
{
	this->phone = phone;
}

void DocGia::setEmail(std::string email)
{
	this->email = email;
}

std::string DocGia::getIDDocGia() const
{
	return this->idDocGia;
}

std::string DocGia::getTenDocGia() const
{
	return this->tenDocGia;
}
std::string DocGia::getNgayMuon() const
{
	return this->ngayMuon;
}
std::string DocGia::getThoiHan() const
{
	return this->thoiHan;
}
std::string DocGia::getIDSach() const
{
	return this->idSach;
}
std::string DocGia::getDiaChi() const
{
	return this->diaChi;
}

std::string DocGia::getPhone() const
{
	return this->phone;
}

std::string DocGia::getEmail() const
{
	return this->email;
}

std::string DocGia::show()
{
	return "\nID Doc Gia: "+ idDocGia + 
		"\tTen Doc Gia: "+tenDocGia+
		"\tID Sach: " + idSach +
		"\tNgay Muon Sach: " + ngayMuon +
		"\tThoi Han Muon Sach: " + thoiHan +
		"\tDia Chi: "+diaChi+
		"\tPhone: "+phone+
		"\tEmail: "+email;
}
