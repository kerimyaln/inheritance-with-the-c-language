#pragma once
#include"GeometrikSekil.h"

class Cember:public GeometrikSekil{
private:
	double yari_cap,sabit_deger;
	
public:
	Cember(void);
	~Cember(void);
	Cember(double , double , double , bool , string );
	void yaricap_ayarla(double);
	double yaricap_dondur();
	double alanHesapla();
	double cevreHesapla();
    bool icerir(double , double);
	string Yazdir();
 };

