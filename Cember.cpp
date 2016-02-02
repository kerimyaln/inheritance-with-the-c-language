#include "Cember.h"

Cember::Cember(void){
	x_ayarla(0);
	y_ayarla(0);
	dolulukAyarla(false);
	renkAyarla("beyaz");
	this->yari_cap=2;
	sabit_deger=3.14;
}
Cember::Cember(double yari_cap, double x, double y, bool dolu, string renk){
	this->yari_cap=yari_cap;
	x_ayarla(x);
	y_ayarla(y);
	dolulukAyarla(dolu);
	renkAyarla(renk);
	sabit_deger=3.14;
}
void Cember::yaricap_ayarla(double yari_cap){
	this->yari_cap=yari_cap;
}
double Cember::yaricap_dondur(){
	return this->yari_cap;
}
double Cember::alanHesapla(){
	return sabit_deger*pow(this->yari_cap,2);
}

double Cember::cevreHesapla(){
	return sabit_deger*2*this->yari_cap;
}
bool Cember::icerir(double x , double y){
	double kontrol=sqrt(pow((x_dondur()-x),2)+pow((y_dondur()-y),2));
	if(this->yari_cap>=kontrol)
		return true;
		return false;
}

string Cember::Yazdir(){
	string str="Cemberin rengi: "+renkDondur()+"\nCemberin ici dolu: "+
		to_string(dolulukDondur())+"\nCemberin olusturulma tarihi: "+tarihDondur()+"\n";
    	return str;
}

Cember::~Cember(void){
}
