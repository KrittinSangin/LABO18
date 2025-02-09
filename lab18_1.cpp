#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect &R1, Rect &R2){
	double minx,maxx,miny,maxy;
	if(R1.x <= R2.x){
		minx = R2.x;
	}else{
		minx = R1.x;
	}
	if((R2.x+R2.w) >= (R1.x+R1.w)){
		maxx = (R1.x+R1.w);
	}else{
		maxx = (R2.x+R2.w);
	}
	double deltax = maxx - minx;


	if(R1.y <= R2.y){
		miny = R1.y;
	}else{
		miny = R2.y;
	}
	if((R2.y-R2.h) <= (R1.y+R1.h)){
		maxy = (R2.y-R2.h);
	}else{
		maxy = (R1.y-R1.h);
	}
	
	double deltay = maxy - miny;
    if(deltay < 0)deltay = - deltay;
	


    if((R1.x + R1.w) < (R2.x))return 0;

	return deltax*deltay;
}