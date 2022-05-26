#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
using namespace std;

class giangvien
{
protected:
    char maso[10], hoten[30];
    float gionghiencuu;
public:
    giangvien()
    {
        maso[0] = '/0';
        hoten[0] = '/0';
        gionghiencuu = 0;
    };
    giangvien(char * maso , char * hoten , float gionghiencuu)
    {
        strcpy(this->maso, maso);
        strcpy(this->hoten, hoten);
        this->gionghiencuu = gionghiencuu;
    };
    ~giangvien(){};
    void nhap()
    {
        cout<<endl<<"Nhap ma so (ch: giang vien co huu, kg: giang vien kiem giang) : "; cin.ignore(1); gets(maso);
        cout<<endl<<"Nhap ho ten: "; gets(hoten);
    };
    string phanloai()
    {
        if (gionghiencuu > 500)
            return "du gio";
        else
            return "thieu gio";
    };
    friend bool operator > (giangvien gv1, giangvien gv2)
    {
        if (gv1.gionghiencuu > gv2.gionghiencuu)
            return true;
        else
            return false;
    };
    string get_maso()
    {
        return maso;
    };
    string get_hoten()
    {
        return hoten;
    };
    float get_gionghiencuu()
    {
        return gionghiencuu;
    };
};

class giangviencohuu: virtual public giangvien
{
private:
    int sobaibao;
    int huongdannghiencuu;
    int giobaibao;
    int hesonghiencuu;
public:
    void nhapgiangviencohuu()
    {
        cout<<endl<<"Nhap so bai bao: "; cin>>sobaibao;
        cout<<endl<<"Nhap huong dan nghien cuu: "; cin>>huongdannghiencuu;
        cout<<endl<<"Nhap gio bai bao: "; cin>>giobaibao;
        cout<<endl<<"Nhap he so nghien cuu: "; cin>>hesonghiencuu;
        gionghiencuu = sobaibao * giobaibao + huongdannghiencuu * hesonghiencuu;
    };
};

class giangvienkiemgiang: virtual public giangvien
{
private:
    int sobaibao;
    int giobaibao;
    int giokiemgiang;
public:
    void nhapgiangvienkiemgiang()
    {
        cout<<endl<<"Nhap so bai bao: "; cin>>sobaibao;
        cout<<endl<<"Nhap gio bai bao: "; cin>>giobaibao;
        cout<<endl<<"Nhap gio kiem giang: "; cin>>giokiemgiang;
        gionghiencuu = sobaibao * giobaibao + giokiemgiang;
    };
};

class loaigiangvien: public giangviencohuu, public giangvienkiemgiang
{
    public:
    void nhapgiangvien()
    {
        nhap();
        if (maso[0] == 'c' && maso[1] == 'h')
            nhapgiangviencohuu();
        else
            nhapgiangvienkiemgiang();
    };
};
int main()
{
    int n;
    cout<<endl<<"Nhap so giang vien: "; cin>>n;
    loaigiangvien * ds = new loaigiangvien[n+1];
    for (int i=0; i<n; i++)
    {
        cout<<endl<<"giang vien thu "<<i+1<<" : ";
        ds[i].nhapgiangvien();
    }
    for (int i=0; i<n; i++)
        for (int j=i; j<n; j++)
    {
        if (ds[i].get_gionghiencuu() < ds[j].get_gionghiencuu())
        {
            loaigiangvien tg = ds[i];
            ds[i] = ds[j];
            ds[j] = tg;
        }
    }

    cout<<endl<<"!"<<setw(5)<<"-----"<<"|"<<setw(15)<<"---------------"<<"!"<<setw(35)<<"-----------------------------------"<<"!"<<setw(20)<<"--------------------"<<"!"<<setw(20)<<"--------------------"<<"!";
    cout<<endl<<"|"<<setw(5)<<"STT"<<"|"<<setw(15)<<"Ma so"<<"|"<<setw(35)<<"Ho Ten"<<"|"<<setw(20)<<"Gio nghien cuu"<<"|"<<setw(20)<<"Phan loai"<<"|";
    cout<<endl<<"!"<<setw(5)<<"-----"<<"|"<<setw(15)<<"---------------"<<"!"<<setw(35)<<"-----------------------------------"<<"!"<<setw(20)<<"--------------------"<<"!"<<setw(20)<<"--------------------"<<"!";
    for (int i=0; i<n; i++)
    {
        cout<<endl<<"|"<<setw(5)<<i+1<<"|"<<setw(15)<<ds[i].get_maso()<<"|"<<setw(35)<<ds[i].get_hoten()<<"|"<<setw(20)<<ds[i].get_gionghiencuu()<<"|"<<setw(20)<<ds[i].phanloai()<<"|";
         cout<<endl<<"!"<<setw(5)<<"-----"<<"|"<<setw(15)<<"---------------"<<"!"<<setw(35)<<"-----------------------------------"<<"!"<<setw(20)<<"--------------------"<<"!"<<setw(20)<<"--------------------"<<"!";
    }
}


