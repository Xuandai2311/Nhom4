#include "Sach.h"
Sach::Sach()
{
	//defaul contructor
}

Sach::Sach(std::string idSach, std::string tenSach, std::string tacGia, std::string nhaXB, std::string namXB)
{
	this->idSach = idSach;
	this->tenSach = tenSach;
	this->tacGia = tacGia;
	this->nhaXB = nhaXB;
	this->namXB = namXB;
}

void Sach::setIDSach(std::string idSach)
{
	Sach::idSach = idSach;
}

void Sach::setTenSach(std::string tenSach)
{
	Sach::tenSach = tenSach;
}
void Sach::setTacGia(std::string tacGia)
{
	Sach::tacGia = tacGia;
}
void Sach::setNhaXB(std::string nhaXB)
{
	Sach::nhaXB = nhaXB;
}
void Sach::setNamXB(std::string namXB)
{
	Sach::namXB = namXB;
}

std::string Sach::getIDSach() const
{
	return idSach;
}

std::string Sach::getTenSach() const
{
	return tenSach;
}
std::string Sach::getTacGia() const
{
	return tacGia;
}
std::string Sach::getNhaXB() const
{
	return nhaXB;
}
std::string Sach::getNamXB() const
{
	return namXB;
}

std::string Sach::show()
{
	return "\nID Sach: " + idSach +
		"\tTen Sach: " + tenSach +
		"\tTac Gia: " + tacGia +
		"\tNha Xuat Ban: " + nhaXB +
		"\tNam Xuat Ban: " + namXB;
}


