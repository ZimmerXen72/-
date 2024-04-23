#include <stdio.h>
#include <math.h>
double FuncZ1(double alpha) {
    double z1=(cos(alpha * M_PI / 180) + sin(alpha * M_PI / 180)) / (cos(alpha * M_PI / 180) - sin(alpha * M_PI / 180));
    return z1;
}

double FuncZ2(double alpha) {
    double z2 = tan(2 * alpha * M_PI / 180) + 1 / cos(2 * alpha * M_PI / 180);//sec(alpha)=1/cos(alpha);
    return z2;
}

int main(){
    double alpha,z1,z2;
    scanf("%lf", &alpha);
    z1=FuncZ1(alpha);
    z2=FuncZ2(alpha);
    printf("%lf %lf",z1,z2);
    return 0;
}
