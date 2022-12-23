#include <math.h>
#include "Lab11.h"
int seg(int Ax, int Bx, int Ay, int By) {
    int seg = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));
}
int CheckRhombus(Rhombus* f){
    int s1=seg(f->A.x, f->B.x, f->A.y, f->B.y);
    int s2=seg(f->B.x, f->C.x, f->B.y, f->C.y);
    int s3=seg(f->C.x, f->D.x, f->C.y, f->D.y);
    int s4=seg(f->A.x, f->D.x, f->A.y, f->D.y);
    if (s1==s2 && s2==s3 && s3==s4){
        return 1;
    }else{
        return 0;
    }
}
int rhombus_perimeter(Rhombus* f){
    int s=seg(f->A.x, f->B.x, f->A.y, f->B.y);
    int perimeter=4*s;
    return perimeter;
}
double rhombus_area(Rhombus* f){
    int d1=seg(f->A.x, f->C.x, f->A.y, f->C.y);
    int d2=seg(f->B.x, f->D.x, f->B.y, f->D.y);
    double area=(d1*d2)/2;
    return area;
}
int main() {
    Rhombus f;
    printf("A:");
    scanf("%d %d", &f.A.x, &f.A.y);
    printf("B:");
    scanf("%d %d", &f.B.x, &f.B.y);
    printf("C:");
    scanf("%d %d", &f.C.x, &f.C.y);
    printf("D:");
    scanf("%d %d", &f.D.x, &f.D.y);
    int check=CheckRhombus(&f);
    int perimeter = rhombus_perimeter(&f)*check;
    double area = rhombus_area(&f)*check;
    printf("Perimeter: %d\n", perimeter);
    printf("Area: %.2f\n", area);
}
