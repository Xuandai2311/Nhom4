#include <iostream>
#pragma once
class Sach
{
private: 
	std::string tenSach;
	std::string idSach;
	std::string tacGia;
	std::string nhaXB;
	std::string namXB;
public: 
	Sach();
	Sach(std::string idSach, std::string tenSach, std::string tacGia, std::string nhaXB, std::string namXB);
	void setIDSach(std::string idSach);
	void setTenSach(std::string tenSach);
	void setTacGia(std::string tacGia);
	void setNhaXB(std::string nhaXB);
	void setNamXB(std::string namXB);
	std::string getIDSach() const;
	std::string getTenSach() const;
	std::string getTacGia() const;
	std::string getNhaXB() const;
	std::string getNamXB() const;
	std::string show();
};

