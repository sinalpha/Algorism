#include <math.h>
#pragma once

double getDistance(double point_ax, double point_ay, double point_bx, double point_by);
double *getInternallyDividingPoint(double point_ax, double point_ay, double point_bx, double point_by, double left_ration, double right_ration);

double getDistance(double point_ax, double point_ay, double point_bx, double point_by)
{
    return sqrt(pow(point_ax - point_bx, 2) + pow(point_ay - point_by, 2));
}

double *getInternallyDividingPoint(double point_ax, double point_ay, double point_bx, double point_by, double left_ration, double right_ration)
{
    double a[2] = {(left_ration * point_bx + right_ration * point_ax) / (left_ration + right_ration), (left_ration * point_by + right_ration * point_ay) / (left_ration + right_ration)};
    return a;
}
