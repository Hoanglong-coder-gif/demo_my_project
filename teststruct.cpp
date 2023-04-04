#include<iostream>
#include<string.h>
using namespace std;
struct sach {
	char tensach[50],tentg[30];
	int soluong,dongia,thtien;
};
void nhap1loaisach(sach &ls) {
	float thtien;
	fflush(stdin);
	cout<<"Nhap ten sach : ";gets(ls.tensach);
	cout<<"Tac gia : ";gets(ls.tentg);
	cout<<"Nhap so luong : ";cin>>ls.soluong;
	cout<<"Nhap don gia : ";cin>>ls.dongia;
	ls.thtien=ls.soluong*ls.dongia;
}
void xuat1loaisach(sach ls) {
	cout<<ls.tensach<<"\t\t"<<ls.tentg<<"\t\t"<<ls.soluong<<"\t\t"<<ls.dongia<<"\t\t"<<ls.thtien<<endl;
}
void nhapdssach(sach lh[], int &n) {
	cout<<"Nhap so luong sach : ";cin>>n;
	for(int i=0;i<n;i++) {
		cout<<"Nhap vao thong tin sach thu "<<i+1<<" : \n";
		nhap1loaisach(lh[i]);
	}
}
void xuatdssach(sach lh[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Ten sach\tTen tac gia\tSo luong\tDon gia\t\tThanh tien\n";
		xuat1loaisach(lh[i]);
	}
}
int main() {
	int n;
	sach dssach[20];
	nhapdssach(dssach,n);
	xuatdssach(dssach,n);
}
