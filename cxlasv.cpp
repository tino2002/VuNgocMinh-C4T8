#include<iomanip>
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;

class sinhvien
{
private:
    char hoten[20];
protected:
    char masv[10];
    float diemtb;
public:
    sinhvien();
    sinhvien(char*, char*, float);
    void nhap();
    friend bool operator > (sinhvien sv1, sinhvien sv2);
    string get_hoten()
    {
        return this->hoten;
    }
     string get_masv()
    {
        return this->hoten;
    }
     float get_diemtb()
    {
        return this->diemtb;
    }
};

sinhvien::sinhvien()
{
    this->masv[0] = '\0';
    this->hoten[0] = '\0';
    this->diemtb = 0;
}

sinhvien::sinhvien(char* masv, char* hoten, float diemtb)
{
    strcpy(this->masv, masv);
    strcpy(this->hoten, hoten);
    this->diemtb = diemtb;
}

void sinhvien::nhap()
{
    cout<<endl<<"Nhap ma sinh vien: "; cin.ignore(1); gets(masv);
    cout<<endl<<"Nhap ho ten sinh vien: "; gets(hoten);
}

bool operator > (sinhvien sv1, sinhvien sv2)
{
    if (sv1.diemtb > sv2.diemtb) return true;
        else return false;
}

class chinhquy: virtual public sinhvien
{
private:
    float chuyencan, ktra, thi;
public:
    void nhapchinhquy()
    {
        cout<<"Nhap diem chuyen can: "; cin>>chuyencan;
        cout<<"Nhap diem kiem tra: "; cin>>ktra;
        cout<<"Nhap diem thi: "; cin>>thi;
        diemtb = 0.1*chuyencan + 0.2*ktra + 0.7*thi;

    }
};

class vualamvuahoc: virtual public sinhvien
{
private:
    float ktra, thi;
public:
    void nhapnguoivuahocvualam()
    {
        cout<<"Nhap diem kiem tra: "; cin>>ktra;
        cout<<"Nhap diem thi: "; cin>>thi;
        diemtb = 0.4*ktra + 0.6*thi;
    }
};

class diem: public chinhquy, public vualamvuahoc
{
public:
    void nhapdiem()
    {
       nhap();
       if (masv[0] == 'c') nhapchinhquy();
       else nhapnguoivuahocvualam();
    }
};
int main()
{
    int n;
    cout<<"Nhap so sinh vien : "; cin>>n;
    diem *ds = new diem[n+1];
    for (int i = 0; i < n; i++)
    {
        ds[i].nhapdiem();
    }

    for (int i = 0; i < n-1; i++)
        for (int j = i; j < n; j++)
    if (ds[i].get_diemtb() < ds[j].get_diemtb())
    {
        diem tg = ds[i];
        ds[i] = ds[j];
        ds[j] = tg;
    }

    cout<<setw(60)<<"__________________________________________________________"<<endl;
    cout<<setw(3)<<"STT"<<setw(2)<<"|"<<setw(10)<<"Ma SV"<<setw(2)<<"|"<<setw(10)<<"Ho ten"<<setw(2)<<"|"<<setw(10)<<"Diem tb"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<setw(3)<<i+1<<setw(2)<<"|"<<setw(10)<<ds[i].get_masv()<<setw(2)<<"|"<<setw(10)<<ds[i].get_hoten()<<setw(2)<<"|"<<setw(10)<<ds[i].get_diemtb()<<endl;
    }
     cout<<setw(60)<<"__________________________________________________________";


}

