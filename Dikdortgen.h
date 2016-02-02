#pragma once
#include"GeometrikSekil.h"
class Dikdortgen :public GeometrikSekil{

private:
	double genislik,yukseklik;

public:
	Dikdortgen(void);
	~Dikdortgen(void);
    Dikdortgen (double , double , double , double , bool , string);
    void genislik_ayarla(double );
    double genislik_dondur();
    void yukseklik_ayarla(double);
    double yukseklik_dondur();
    double alanHesapla();
    double cevreHesapla();
    bool icerir(double , double);
    string Yazdir();
};

