#include "MuonSach.h"

MuonSach::MuonSach(std::string ngayMuon, std::string thoiHan)
{
	this->ngayMuon = ngayMuon;
	this->thoiHan = thoiHan;
}

void MuonSach::setNgayMuon(std::string ngayMuon)
{
	this->ngayMuon = ngayMuon;
}

void MuonSach::setThoiHan(std::string thoiHan)
{
	this->thoiHan = thoiHan;
}


std::string MuonSach::getNgayMuon() const
{
	return this->ngayMuon;
}

std::string MuonSach::getThoiHan() const
{
	return this->thoiHan;
}

std::string MuonSach::show()
{
	return "\nNgay Muon Sach: " + ngayMuon +
		"\tThoi Han: " + thoiHan;
}
