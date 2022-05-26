#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

class nguoi
{
protected:
    char maso[10], hoten[30];
    float luong;
public:
    nguoi()
    {
        this->maso[0] = '/0';
        this->hoten[0] = '/0';
        this->luong = 0;
    };
    nguoi(char * maso, char * hoten, float luong)
    {
        strcpy(this->maso, maso);
        strcpy(this->hoten, hoten);
        this->luong = luong;
    };
    ~nguoi(){};
    nhap()
    {
        cout<<endl<<"Nhap ma so (hc: hanh chinh, ca: ca): "; cin.ignore(); gets(maso);
        cout<<endl<<"Nhap ho ten: "; gets(hoten);
    }
    int TongSoDoiTuong();
    friend bool operator > (nguoi ng1, nguoi ng2)
    {
        if (ng1.luong > ng2.luong)
            return true;
        else
            return false;
    }
    string get_maso()
    {
        return maso;
    }

    string get_hoten()
    {
        return hoten;
    }

    float get_luong()
    {
        return luong;
    }

};

class nhanvienhanhchinh: virtual public nguoi
{
private:
    int hesoluong;
    float luongcoban, phucap;
public:
    void nhapnhanvienhanhchinh()
    {
        cout<<endl<<"Nhap he so luong: "; cin>>hesoluong;
        cout<<endl<<"Nhap luong co ban: "; cin>>luongcoban;
        cout<<endl<<"Nhap phu cap: "; cin>>phucap;
        luong = hesoluong * luongcoban + phucap;
    }
};

class nhanvienlamca: virtual public nguoi
{
private:
    int soca;
    float tiencongmotca, tienanca, phucapdochai;
public:
    void nhapnhanvienlamca()
    {
        cout<<endl<<"Nhap so ca: "; cin>>soca;
        cout<<endl<<"Nhap tien cong mot ca: "; cin>>tiencongmotca;
        cout<<endl<<"Nhap tien an ca: "; cin>>tienanca;
        cout<<endl<<"Nhap phu cap doc hai: "; cin>>phucapdochai;
        luong = soca * tiencongmotca + tienanca + phucapdochai;
    }
};

class nhanvien: public nhanvienhanhchinh, public nhanvienlamca
{
public:
    void nhapnhanvien()
    {
        nhap();
        if (maso[0] == 'h' && maso[1] == 'c')
            nhapnhanvienhanhchinh();
        else
            nhapnhanvienlamca();
    }
    friend bool operator < (nhanvien nv1, nhanvien nv2)
    {
        if (nv1.luong < nv2.luong)
            return true;
        else
            return false;
    }
} ;

int main()
{
    int n;
    cout<<endl<<"Nhap so nguoi: "; cin>>n;
    nhanvien * ds = new nhanvien[n+1];
    for (int i=0; i<n; i++)
    {
        cout<<endl<<"Nhan vien thu "<<i+1;
        ds[i].nhapnhanvien();
    }
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (ds[i] < ds[j])
            {
                nhanvien tg = ds[i];
                ds[i] = ds[j];
                ds[j] = tg;
            }

    cout<<endl<<"Danh sach nhan vien sap xep theo thu tu giam dan cua luong ";
    cout<<endl<<"!"<<setw(10)<<"----------"<<setw(2)<<"!"<<setw(20)<<"--------------------"<<setw(2)<<"!"<<setw(40)<<"----------------------------------------"<<setw(2)<<"!"<<setw(15)<<"---------------!";
    cout<<endl<<"|"<<setw(10)<<"STT"<<setw(2)<<"|"<<setw(20)<<"Ma ho so"<<setw(2)<<"|"<<setw(40)<<"Ho va ten"<<setw(2)<<"|"<<setw(15)<<"Luong"<<"|";
    cout<<endl<<"!"<<setw(10)<<"----------"<<setw(2)<<"!"<<setw(20)<<"--------------------"<<setw(2)<<"!"<<setw(40)<<"----------------------------------------"<<setw(2)<<"!"<<setw(15)<<"---------------!";
    for (int i=0; i<n; i++)
    {
        cout<<endl<<"|"<<setw(10)<<i+1<<setw(2)<<"|"<<setw(20)<<ds[i].get_maso()<<setw(2)<<"|"<<setw(40)<<ds[i].get_hoten()<<setw(2)<<"|"<<setprecision(14)<<setw(15)<<ds[i].get_luong()<<"|";
        cout<<endl<<"!"<<setw(10)<<"----------"<<setw(2)<<"!"<<setw(20)<<"--------------------"<<setw(2)<<"!"<<setw(40)<<"----------------------------------------"<<setw(2)<<"!"<<setw(15)<<"---------------!";
    }

    getch();

}

