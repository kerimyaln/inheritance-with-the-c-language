#include "Dikdortgen.h"

Dikdortgen::Dikdortgen(void){
	x_ayarla(0);
	y_ayarla(0);
	this->yukseklik=2;
	this->genislik=2;
	dolulukAyarla(false);
	renkAyarla("beyaz");
}
Dikdortgen::Dikdortgen(double genislik, double yukseklik , double x, double y, bool dolu, string renk){
	this->genislik=genislik;
	this->yukseklik=yukseklik;
	x_ayarla(x);
	y_ayarla(y);
	dolulukAyarla(dolu);
	renkAyarla(renk);
}
void Dikdortgen::genislik_ayarla(double genislik){
	this->genislik=genislik;
}
double Dikdortgen::genislik_dondur(){
	return this->genislik;
}
void Dikdortgen::yukseklik_ayarla(double yukseklik){
	this->yukseklik=yukseklik;
}

double Dikdortgen::yukseklik_dondur(){
	return this->yukseklik;
}

double Dikdortgen::alanHesapla(){
	return this->genislik*this->yukseklik;
}
double Dikdortgen::cevreHesapla(){
	return (this->genislik+this->yukseklik)*2;
}
bool Dikdortgen::icerir(double x , double y){
	if((x_dondur()-(this->genislik/2))<=x && x<=(x_dondur()+(this->genislik/2)) 
		&& (y_dondur()-(this->yukseklik/2))<=y && y<=(y_dondur()+(this->yukseklik/2)))
		return true;
		return false;

}
string Dikdortgen::Yazdir(){
	string str="Dikdortgenin rengi: "+renkDondur()+"\nDikdortgenin ici dolu: "+
		to_string(dolulukDondur())+"\nDikdortgenin olusturulma tarihi: "+tarihDondur()+"\n";
     return str;
}

Dikdortgen::~Dikdortgen(void){
}
