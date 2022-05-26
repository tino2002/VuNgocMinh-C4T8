#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

// Cau 1 + 2
class SACH{
	public:
		string Ma_Sach;
		string Ten_Sach;
		float Gia_Bia;
		string Qua_Tang;
		// Ham Tao
		SACH(){
		};
		// Ham Huy
		~SACH(){
		};
		
		void QuaTang(SACH &sach){
			if(sach.Gia_Bia>=500000) {
				sach.Qua_Tang = "Qua Dac Biet";
				cout<<"Qua Dac Biet\n";
			}
			else if (sach.Gia_Bia <500000 && sach.Gia_Bia>=200000){	
				sach.Qua_Tang = "Qua Tang";
				cout<<"Qua Tang\n";
			}
			else {
			sach.Qua_Tang = "Khong Co Qua Tang";
			cout<<"Khong Co Qua Tang\n";
			}
		}
		void Nhap(SACH &sach){
			fflush(stdin);
			cout<<"Ma_Sach: ";
			getline(cin,sach.Ma_Sach);
			fflush(stdin);
			cout<<"Ten_Sach: ";
			getline(cin,sach.Ten_Sach);
			fflush(stdin);
			cout<<"Gia_Bia (number): ";
			cin>>sach.Gia_Bia;
			QuaTang(sach);
		}
};

// Cau 3
bool operator > (SACH &sach1, SACH &sach2){
	if(sach1.Gia_Bia > sach2.Gia_Bia)
		return true;
	return false;
}


int main(){
	SACH sach1;
	SACH sach2;
	sach1.Nhap(sach1);
	sach2.Nhap(sach2);
	int x=sach1>sach2;
	cout<<x; // hien thi 1 la true <=> (gia bia sach1 > gia bia sach2).
	return 0;
}
