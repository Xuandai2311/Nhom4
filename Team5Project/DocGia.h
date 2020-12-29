#pragma once
#include<iostream>
class DocGia
{
private:
	std::string idDocGia;
	std::string tenDocGia;
	std::string idSach;
	std::string ngayMuon;
	std::string thoiHan;
	std::string diaChi;
	std::string phone;
	std::string email;
public:
	DocGia(std::string idDocGia,std::string tenDocGia, std::string idSach, std::string ngayMuon,std::string thoiHan, std::string diaChi, std::string phone, std::string email );
	void setIDDocGia(std::string idDocGia);
	void setTenDocGia(std::string tenDocGia);
	void setIDSach(std::string idSach);
	void setNgayMuon(std::string ngayMuon);
	void setThoiHan(std::string thoiHan);
	void setDiaChi(std::string diaChi);
	void setPhone(std::string phone);
	void setEmail(std::string email);
	std::string getIDDocGia() const;
	std::string getTenDocGia() const;
	std::string getIDSach() const;
	std::string getNgayMuon()const;
	std::string getThoiHan() const;
	std::string getDiaChi() const;
	std::string getPhone() const;
	std::string getEmail() const;
	std::string show();
	

};

