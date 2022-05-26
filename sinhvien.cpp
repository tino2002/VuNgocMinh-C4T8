#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <iostream>
using namespace std;

class SinhVien
{
protected:
    char MaSV[10];
    char HoTen[30];
    float DTB;
public:
    SinhVien()
    {
        MaSV[0] = '/0';
        HoTen[0] = '/0';
        DTB = 0;
    };
    SinhVien(char * MaSV1, char * HoTen1, float DTB1)
    {
        strcpy(MaSV, MaSV1);
        strcpy(HoTen, HoTen1);
        DTB = DTB1;
    }
    nhap()
    {
        cout<<endl<<"Ma Sinh Vien(c: Chinh quy, v: vua hoc vua lam): ";cin.ignore(1); gets(MaSV);
        cout<<endl<<"Ho Ten Sinh Vien: ";gets(HoTen);
    }
    ~SinhVien(){};
    string get_hoten()
    {
        return this->HoTen;
    }
     string get_masv()
    {
        return this->MaSV;
    }
     float get_diemtb()
    {
        return this->DTB;
    }

    friend bool operator > (SinhVien s1, SinhVien s2)
    {
        if (s1.DTB > s2.DTB)
            return true;
        else
            return false;
    }


};

class ChinhQuy: virtual public SinhVien
{
private:
    float diemCC, diemKT, diemThi;
public:
    nhapchinhquy()
    {
        cout<<endl<<"Diem Chuyen Can: "; cin>>diemCC;
        cout<<endl<<"Diem kiem tra: "; cin>>diemKT;
        cout<<endl<<"Diem Thi: "; cin>>diemThi;
        DTB = 0.1*diemCC + 0.2*diemKT + 0.7*diemThi;
    }
};

class VuaLamVuaHoc: virtual public SinhVien
{
private:
    float diemKT, diemThi;
public:
    nhapnguoivuahocvualam()
    {
        cout<<endl<<"Diem kiem tra: "; cin>>diemKT;
        cout<<endl<<"Diem Thi: "; cin>>diemThi;
        DTB = 0.4*diemKT + 0.6*diemThi;
    }
};

class diem: public ChinhQuy, public VuaLamVuaHoc
{
public:
    nhapdiem()
    {
        nhap();
        if (MaSV[0] == 'c')
            nhapchinhquy();
        else
            nhapnguoivuahocvualam();
    }
};

int main()
{
    int n;
    cout<<"Nhap so sinh vien : "; cin>>n;
    diem *d = new diem[n+1];
    for (int i = 0; i < n; i++)
    {
        d[i].nhapdiem();
    }

     for (int i = 0; i < n-1; i++)
        for (int j = i; j < n; j++)
            if (d[i].get_diemtb() < d[j].get_diemtb())
            {
                diem tg = d[i];
                d[i] = d[j];
                d[j] = tg;
            }

    cout<<setw(64)<<"________________________________________________________________"<<endl;
    cout<<"|"<<setw(6)<<"STT"<<setw(2)<<"|"<<setw(10)<<"Ma SV"<<setw(2)<<"|"<<setw(30)<<"Ho Ten"<<setw(2)<<"|"<<setw(10)<<"Diem TB"<<setw(2)<<"|"<<endl;
    cout<<setw(64)<<"________________________________________________________________"<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"|"<<setw(6)<<i+1<<setw(2)<<"|"<<setw(10)<<d[i].get_masv()<<setw(2)<<"|"<<setw(30)<<d[i].get_hoten()<<setw(2)<<"|"<<setw(10)<<d[i].get_diemtb()<<setw(2)<<"|"<<endl;
        cout<<setw(64)<<"________________________________________________________________"<<endl;
    }
}



