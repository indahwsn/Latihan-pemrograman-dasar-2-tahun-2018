#include <stdio.h>
#include <iostream.h>
#include <conio.h>
main()
{
char nama [20],*grade;
float nk,nt,nu,nmk,nmt,nmu,na;
cout<<"Program Menghitung Nilai Akhir Siswa"<<endl<<endl;
cout<<"Masukkan Nama Siswa :";gets(nama);
cout<<"Nilai Keaktifan : ";cin>>nk;
cout<<"Nilai Tugas : ";cin>>nt;
cout<<"Nilai Ujian : ";cin>>nu;
nmk=nk*0.2;
nmt=nt*0.3;
nmu=nu*0.5;
na=nmk+nmt+nmu;
if (na>=85)
{
grade="A";
}
else
if (na>=75)
{
grade="B";
}
else
if (na>=65)
{
grade="C";
}
else
if (na>=55)
{
grade="D";
}
else
{
grade="E";
}
cout<<endl;
cout<<"Siswa yang bernama "<<nama<<endl;
cout<<"Dengan Nilai Persentase Yang Dihasilkan"<<endl;
cout<<"Nilai Murni Keakifan x 20%	:"<<nmk<<endl;
cout<<"Nilai Murni Tugas x 30%		:"<<nmt<<endl;
cout<<"Nilai Murni Ujian x 50%		:"<<nmu<<endl;
cout<<"Memperoleh Nilai Akhir Sebesar	:"<<na<<endl;
cout<<"Grade Yang DI Dapat	:"<<grade<<endl;
getch();
}
