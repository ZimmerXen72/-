#include <stdio.h>
#include <math.h>
enum Auto{
    Passenger, Sport, Truck, Bus
};
typedef struct point{
    int x;
    int y;
}point;
typedef struct Square{
    point A;
    point B;
    point C;
    point D;
}Square;
int seg(int Ax, int Bx, int Ay, int By){
    int seg=sqrt(pow((Ax-Bx),2)+pow((Ay-By),2));
}
int CheckSquareArea(int s1, int s2, int d1, int d2){
    if (s1==s2 && d1==d2){
        int area=s1*s2;
    }else{
        int area=-1;
    }
}
int SquareData(struct Square *s) {
    int s1 = seg(s->A.x, s->B.x, s->A.y, s->B.y);
    int s2 = seg(s->B.x, s->C.x, s->B.y, s->C.y);
    int d1 = seg(s->A.x, s->C.x, s->A.y, s->C.y);
    int d2 = seg(s->B.x, s->D.x, s->B.y, s->D.y);
    int area = CheckSquareArea(s1, s2, d1, d2);
}
int main(){
    enum Auto a;
    a=Truck;
    printf("%d%c",a,' ');
    Square f;
    f.A.x=0;f.A.y=0;
    f.B.x=3;f.B.y=0;
    f.C.x=3;f.C.y=3;
    f.D.x=0;f.D.y=3;
    int SSquare=SquareData(&f);
    printf("%d",SSquare);
    return 0;
}
