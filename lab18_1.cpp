#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
    double L1 = R1.x, R1_right = R1.x + R1.w;
    double L2 = R2.x, R2_right = R2.x + R2.w;
    double B1 = R1.y-R1.h, T1 = R1.y;
    double B2 = R2.y-R2.h, T2 = R2.y;

    double overlap_w = min(R1_right, R2_right) - max(L1, L2);
    double overlap_h = min(T1, T2) - max(B1, B2);

    if(overlap_w > 0 && overlap_h > 0) return overlap_w * overlap_h;
    return 0;
}