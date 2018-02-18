/*
	Bileske faiz ile toplam para hesaplama (BileskeFaiz.cpp) - Semih Sahin
*/
#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"turkish");
	double toplamPara=0;
	int para, ay;
//
	cout << "Paranýzý giriniz : ";
	cin >> para;
	cout << "Paranýz kaç ay beklesin(Aylýk faiz bir önceki ayýn %10'udur) ?" << endl;
	cin >> ay;
	toplamPara = para;
//
	for (int i=1; i<=ay; i++){
		toplamPara += toplamPara/10;
	}
	cout << "Toplam para : " << toplamPara << endl;
	getch();
	return 0;
}
