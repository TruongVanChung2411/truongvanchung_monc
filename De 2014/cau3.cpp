#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Phone_Fee{
	protected:
		float _time;
	public:
		static long PRICE_PHONE;
		virtual long calFee(){
			return PRICE_PHONE* this->_time;
		}
};
long Phone_Fee::PRICE_PHONE = 1000;

class Internet_Fee{
	protected:
		long _luongTruyCap;
	public:
		static long PRICE_INTERNET;
		virtual long calFee(){
			return PRICE_INTERNET*this->_luongTruyCap;
		}
};
long Internet_Fee::PRICE_INTERNET = 200;

class Customer{
	protected:
		string FullName;
		string ID;
		string Address;
	public:
		void dangKy(){
			cout<<"Nhap ho va ten:";
			getline(cin,this->FullName);
			cin.ignore();
			cin.clear();
			cout<<"Nhap so chung minh:";
			cin>>this->ID;
			cout<<"Nhap dia chi:";
			getline(cin,this->Address);
		}
};

class Cost{
	protected:
		Phone_Fee _phone_fee;
	public:
		static long VAT;
		virtual long calFee()=0;
};
long Cost::VAT = 10;

class Basic:public Cost{
	protected:
		Internet_Fee _internet_fee;
	public:
		long calFee(){
			return this->_phone_fee.calFee()+this->_internet_fee.calFee() + 0.1 * VAT;
		}
};

class Data_Fee:public Basic{
	protected:
		long _luongTruyCap;
	public:
		static long NGUONG_MIEN_PHI;
		static long CUOC_THUE_BAO;
		long calFee(){
			long phone_fee=this->_phone_fee.calFee();
			long internet_fee=0;
			if(_luongTruyCap<=NGUONG_MIEN_PHI){
				internet_fee=CUOC_THUE_BAO;
			}
			else {
				Internet_Fee temp;
				temp._luongTruyCap = this->_luongTruyCap-NGUONG_MIEN_PHI;
				internet_fee=CUOC_THUE_BAO+temp.calFee();
			}
			return phone_fee+internet_fee;
		}
};
long Data_Fee::NGUONG_MIEN_PHI = 1000;
long Data_Fee::CUOC_THUE_BAO = 50000;

class Data_Fix:public Basic{
	public:
		static long MUC_CO_DINH;
		long calFee(){
			return (float)0.9*(this->_phone_fee.calFee())+ MUC_CO_DINH;
		}
};
long Data_Fix::MUC_CO_DINH = 1000000;

class Contract{
	protected:
		Customer _cus;
		Cost* _cost;
	public:
		void dangKy(){
			this->_cus.dangKy();
			cout<<"Chon goi cuoc: 1-Basic,2-Data_Fee, 3-Data_Fix:\n";
			int choice;
			cin>>choice;
			if (choice==1){
				this->_cost=new Basic();
			}
			else if(choice==2){
				this->_cost=new Data_Fee();
			}
			else if(choice==3){
				this->_cost=new Data_Fix();
			}
			else {
				this->_cost =new Basic();
			}
		}
		void thongBao(){
			cout<<"Khach hang:\n";
			cout<<"Tien cuoc goi cuoc la:"<<this->_cost->calFee();
			cout<<endl;
		}
		~Contract(){
			if(this->_cost){
				delete this->_cost;
				this->_cost=NULL;
			}
		}
};

class QuanLy{
	protected:
		vector<Contract*> _ds;
	public:
		void dangKy(){
			int n;
			cout<<"Nhap luong hop dong:";
			cin>>n;
			for(int i=0;i<n;i++){
				Contract* c=new Contract();
				c->dangKy();
				this->_ds.push_back(c);
			}
		}
		void thongBao(){
			for(int i=0;i<this->_ds.size();i++){
				this->_ds[i]->thongBao();
			}
		}
		~QuanLy(){
			for(int i=0;i<this->_ds.size();i++){
				if(this->_ds[i]){
					delete this->_ds[i];
				}
			}
			this->_ds.clear();
		}
};
