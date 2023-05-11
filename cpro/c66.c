#include<stdio.h>
// #define PI 3.14159265358979323846264338327950288419716939937510582097
int main(){
    int r=5;
    const double PI=3.14;
    double cir=2*r*PI;
    PI=3.141592;
    printf("r:%d,circumference:%lf\n",r,cir);
    return 0;
}