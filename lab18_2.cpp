#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect* R1,Rect* R2){
	double x1 = max(R1->x,R2->x);
	double x2 = min(R1->x+R1->w,R2->x+R2->w);
	double y1 = min(R1->y,R2->y);
	double y2 = max(R1->y-R1->h,R2->y-R2->h);
	
	double width = x2-x1;
	double height = y1-y2;
	
	if(width > 0 && height > 0){
		return width*height;
	}else{
		return 0.0;
	}



}
int main() {
    Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(&R1,&R2);	
    return 0;
}