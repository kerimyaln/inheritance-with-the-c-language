#include "GeometrikSekil.h"
GeometrikSekil::GeometrikSekil(void){
	this->dolu=false;
    this->renk="beyaz";
    this->olusturma_tarihi=time(0);
}

GeometrikSekil::~GeometrikSekil(void){
}
void GeometrikSekil::x_ayarla(double x){
	this->x=x;
}
double GeometrikSekil::x_dondur(){
    return this->x;
}
void GeometrikSekil::y_ayarla(double y){
    this->y=y;
}
double GeometrikSekil::y_dondur(){
    return this->y;
}
void GeometrikSekil::dolulukAyarla(bool bl){
	this->dolu=bl;
}
double GeometrikSekil::dolulukDondur(){
    if(this->dolu)
		return 1.0;
     return 0.0;
} 
void GeometrikSekil::renkAyarla(string rnk){
	this->renk=rnk;
}
string GeometrikSekil::renkDondur(){
    return this->renk;
}
string GeometrikSekil::tarihDondur(){
	char szBuffer[80] = "DD-MM-YY HH:MM:SS";
	struct tm time_info;
	errno_t err = localtime_s(&time_info , &this->olusturma_tarihi);
	if (!err)
		strftime(szBuffer , sizeof(szBuffer) , "%d-%b-%Y %X%p" , &time_info);
	 return szBuffer;
}

