#include <stdio.h>
#include <conio.h>
#include <iostream.h>
void main()
{
char nama [30],*juara;
double n1,n2,n3;
double nr;
cout<<"Program Menghitung Nilai Rata-rata"<<endl;
cout<<endl;
cout<<"Nama Siswa =";gets(nama);

cout<<"Nilai Pertandingan 1 =";cin>>n1;
cout<<"Nilai Pertandingan 2 =";cin>>n2;
cout<<"Nilai Pertandingan 3 =";cin>>n3;
cout<<endl;

nr=(n1+n2+n3)/3;
nr;
if(nr>8.0)
{
juara="Menjadi juara 1";
}
else
if (nr>7.0)
{
juara="Menjadi juara 2";
}
else
if (nr>6.0)
{
juara="Menjadi juara 3";
}
else
if (nr<6.0)
{
juara="Tidak mendapat juara";
}

cout<<endl;
cout<<"Mahasiswa yang bernama"<<nama<<endl;
cout<<"Memperoleh nilai rata-rata"<<nr<<endl;
cout<<""<<juara;
cout<<"dari hasil perlombaan yang diikutinya";
getch() ;
}
