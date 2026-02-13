#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2) {
    double x_left, x_right, y_top, y_bottom;

    if (R1->x > R2->x) x_left = R1->x;
    else x_left = R2->x;

    if (R1->x + R1->w < R2->x + R2->w) x_right = R1->x + R1->w;
    else x_right = R2->x + R2->w;

    if (R1->y < R2->y) y_top = R1->y;
    else y_top = R2->y;

    if (R1->y - R1->h > R2->y - R2->h) y_bottom = R1->y - R1->h;
    else y_bottom = R2->y - R2->h;

    double overlap_w = x_right - x_left;
    double overlap_h = y_top - y_bottom;

    if (overlap_w > 0 && overlap_h >0) {
        return overlap_w* overlap_h;
    } else {
        return 0;
    }
}