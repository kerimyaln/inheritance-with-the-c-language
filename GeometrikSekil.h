#pragma once
#include<string>
//# include <date.h>
#include <ctime>
#include <iostream>
using namespace std;

class GeometrikSekil
{
private:
	double x,y;
	string renk;
	bool dolu; 
    time_t olusturma_tarihi;
public:
	GeometrikSekil(void);
	~GeometrikSekil(void);
	void x_ayarla(double);
	double x_dondur();
	void y_ayarla(double);
	double y_dondur();
	void dolulukAyarla(bool);
	double dolulukDondur();
	void renkAyarla(string);
	string renkDondur();
	string tarihDondur();
	virtual string Yazdir()=0;
	virtual double alanHesapla()=0;
	virtual double cevreHesapla()=0;
	virtual bool icerir(double , double )=0;
};

