/*
Nhân viên trong một cơ quan được lĩnh lương theo các dạng khác nhau.
Dạng người lao động hưởng lương từ ngân sách Nhà nước gọi là cán bộ, công chức (dạng biên chế).
Dạng người lao động lĩnh lương từ ngân sách của cơ quan gọi là người làm hợp đồng. Như vậy hệ thống có hai đối tượng: biên chế và hợp đồng.
Hai loại đối tượng này có đặc tính chung là viên chức làm việc cho cơ quan.
Từ đây có thể tạo nên lớp cơ sở để quản lý một viên chức (lớp Nguoi) bao gồm mã số, họ tên, lương.
Hai lớp kế thừa từ lớp cơ sở trên:
Lớp Bienche gồm các thuộc tính: hệ số lương, tiền phụ cấp chức vụ.
Lớp Hopdong gồm các thuộc tính: tiền công lao động, số ngày làm việc trong tháng, hệ số vượt giờ.
Hãy thiết kế các lớp trên và viết chương trình minh họa.
*/
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class nguoi
{
    char hoten[30];
protected:
    char manv[5];
    float luong;
public:
    void nhap()
    {
        cout<<endl<<"Nhap ma nhan vien (c: Bien che, h: Hop dong): ";
        cin.ignore(); cin.get(manv, 5);
        cout<<endl<<"Nhap ho ten nhan vien: ";
        cin.ignore(); cin.get(hoten, 30);
    }
    void hienthi()
    {
        cout<<endl<<setw(10)<<left<<manv<<setw(35)<<left<<hoten<<setw(10)<<right<<setprecision(10)<<luong;
    }
    float get_luong()
    {
        return luong;
    }
};

class bienche: virtual public nguoi
{
    float hsl, phucap;
public:
    void nhap_bc()
    {
        cout<<endl<<"Nhap he so luong: "; cin>>hsl;
        cout<<endl<<"Nhap phu cap: "; cin>>phucap;
        luong = hsl * 1500000 + phucap;
    }
};

class hopdong: virtual public nguoi
{
    float snc, tiencong, hsvg;
public:
    void nhap_hd()
    {
        cout<<endl<<"Nhap so ngay cong: "; cin>>snc;
        cout<<endl<<"Tien cong lao dong: "; cin>>tiencong;
        cout<<endl<<"Nhap he so vuot gio: "; cin>>hsvg;
        luong = (snc<=24) ? snc * tiencong : 24 * tiencong + (snc - 24)*tiencong*hsvg;
    }
};

class nhanvien: public bienche, public hopdong
{
public:
    void nhap_nv()
    {
        nhap();
        if (manv[0] == 'c')
            nhap_bc();
        else
            nhap_hd();
    }
};

int main()
{
    int n;
    cout<<endl<<"Nhap so nhan vien: "; cin>>n;
    nhanvien * ds = new nhanvien[n+1];
    for (int i=0; i<n; i++)
        ds[i].nhap_nv();
    cout<<endl<<"Danh sach nhan vien: ";
    for (int i=0; i<n; i++)
        ds[i].hienthi();
    // In ra danh sach nhan vien theo thu tu giam dan cua luong.
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
        {
            if (ds[i].get_luong() < ds[j].get_luong())
            {
                nhanvien tg = ds[i];
                ds[i] = ds[j];
                ds[j] = tg;
            }
        }
    cout<<endl<<"Danh sach nhan vien theo thu tu giam dan cua luong: ";

    for (int i=0; i<n; i++)
        ds[i].hienthi();
    getch();
}

