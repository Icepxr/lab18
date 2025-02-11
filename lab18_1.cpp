#include <iostream>
using namespace std;

struct Rect {
    double x, y, w, h;
};

double overlap(Rect r1, Rect r2) {
    double x1 = max(r1.x, r2.x);
    double x2 = min(r1.x + r1.w, r2.x + r2.w);
    double y1 = min(r1.y, r2.y);
    double y2 = max(r1.y - r1.h, r2.y - r2.h);
    
    double width = x2 - x1;
    double height = y1 - y2;
    
    if (width > 0 && height > 0) {
        return width * height;
    } else {
        return 0.0;
    }
}


int main() {
    Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};	
	cout << overlap(R1,R2);	
    return 0;
}