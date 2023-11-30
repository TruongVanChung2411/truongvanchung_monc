#include<iostream>
using namespace std;

class MayLoc {
public:
	virtual void nhap() = 0;
	virtual float tinhLuongNuoc() = 0;
	virtual long tinhChiPhi() = 0;
};

class MayLyTam : public MayLoc {
public:
    void nhap() override {
        // Định nghĩa phương thức nhap cho MayLyTam
    }
    float tinhLuongNuoc() override {
        // Định nghĩa phương thức tinhLuongNuoc cho MayLyTam
    }
    long tinhChiPhi() override {
        // Định nghĩa phương thức tinhChiPhi cho MayLyTam
    }
};

class MayXucTac : public MayLoc {
public:
    void nhap() override {
        // Định nghĩa phương thức nhap cho MayXucTac
    }
    float tinhLuongNuoc() override {
        // Định nghĩa phương thức tinhLuongNuoc cho MayXucTac
    }
    long tinhChiPhi() override {
        // Định nghĩa phương thức tinhChiPhi cho MayXucTac
    }
};

class DanhSachMayLoc {
private:
	MayLoc** _danhSach;
	int _N;
public:
	DanhSachMayLoc (){
		this->_N=0;
		this->_danhSach=NULL;
	}
	~DanhSachMayLoc(){
		for(int i=0; i<_N; i++){
			delete _danhSach[i];
		}
		delete[] _danhSach;
	}
	void nhap(){
		cout<<"Nhap luong may:";
		cin>>this->_N;
		_danhSach = new MayLoc*[_N];
		for(int i=0;i<_N;i++){
			int choice=0;
			cout<<"Nhap loai may: 1 = may ly tam, 2 = may xuc tac:\n";
			cin>>choice;
			if(choice==1){
				_danhSach[i]=new MayLyTam();
				
			}
			else {
				_danhSach[i]=new MayXucTac();
			}
			_danhSach[i]->nhap();
		}
	}
	float tinhLuongNuoc(){
		float sum=0.0;
		for(int i=0;i<this->_N;i++){
			sum+=_danhSach[i]->tinhLuongNuoc();
		}
		return sum;
	}
	long tinhChiPhi(){
		long sum=0;
		for(int i=0;i<this->_N;i++){
			sum+=_danhSach[i]->tinhChiPhi();
		}
		return sum;
	}
};

class Ao{
private:
	int _M;
	DanhSachMayLoc _ds;
public:
	Ao(): _M(0) {}
	~Ao() {}
	void nhap(){
		cout<<"Nhap luong nuoc: ";
		cin>>this->_M;
		cout<<"Nhap danh sach\n";
		this->_ds.nhap();
	}
	bool AoDuocLocHetKhong(){
		if(this->_M>this->_ds.tinhLuongNuoc()){
			return false;
		}
		else {
			return true;
		}
	}
	long tongChiPhi(){
		return _ds.tinhChiPhi();
	}
};

int main() {
	Ao ao;
	ao.nhap();
	if(ao.AoDuocLocHetKhong()) {
		cout << "Ao duoc loc het nuoc.\n";
	} else {
		cout << "Ao khong duoc loc het nuoc.\n";
	}
	cout << "Tong chi phi: " << ao.tongChiPhi() << "\n";
	return 0;
}
