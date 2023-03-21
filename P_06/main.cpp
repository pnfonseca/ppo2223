#include <iostream>
#include "Point3.h"
#include "Vector3.h"

using namespace std;

int main() {
    std::cout << "Aula 6, Exercicio 1" << std::endl;

    Tuple t1;
    Tuple t2(3);
    double vals[3]={1.0, 2.0, 3.0};
    Tuple t3(3,vals);
    cout << "Assignment: ";
    Tuple t4;
    t4=t3;

    // Creating with the copy constructor
    cout << "Operator =";
    Tuple t5(t3);

    cout << "T1: " << t1 << endl;
    cout << "T2: " << t2 << endl;
    cout << "T3: " << t3 << endl;
    cout << "T4: " << t4 << endl;
    cout << "T5: " << t5 << endl;

    cout << "T1==T2?: " << (t1==t2) << endl;
    cout << "T3==T4?: " << (t3==t4) << endl;
    cout << "T1!=T2?: " << (t1!=t2) << endl;
    cout << "T3!=T4?: " << (t3!=t4) << endl;

    Point3 p1;
    Point3 p2(vals);
    Point3 p3 (1.5, 2.3, 4.3);

    Point3 p4 = p3;

    cout << "P1: " << p1 << endl;
    cout << "P2: " << p2 << endl;
    cout << "P3: " << p3 << endl;
    cout << "P4: " << p4 << endl;

    cout << "P1==P2?: " << (p1==p2) << endl;
    cout << "P3==P4?: " << (p3==p4) << endl;
    cout << "P1!=P2?: " << (p1!=p2) << endl;
    cout << "P3!=P4?: " << (p3!=p4) << endl;

    Vector3 v1, v2(vals), v3(1.3, 1.1, 0.9);
    Vector3 v4=v3;

    cout << "V1: " << v1 << endl;
    cout << "V2: " << v2 << endl;
    cout << "V3: " << v3 << endl;
    cout << "V4: " << v4 << endl;

    cout << "V1==V2?: " << ((v1==v2)?"S":"N") << endl;
    cout << "V3==V4?: " << ((v3==v4)?"S":"N") << endl;
    cout << "V1!=V2?: " << ((v1!=v2)?"S":"N") << endl;
    cout << "V3!=V4?: " << ((v3!=v4)?"S":"N") << endl;

    // Point = Point + Vector
    Point3 p5 = p3 + v3;

    cout << p5 << "=" << p3 << "+" << v3 << endl;

    // Vector = Point - Point
    Vector3 vdelta = p4 - p2;
    cout << "Difference vector: " << vdelta << endl;

    // Vector = Vector + Vector
    Vector3 v5 = v3 + v4;
    cout << "V5=V3+V4: " << v5 << endl;

    // Vector = Vector - Vector
    Vector3 v6 = v2 - v4;
    cout << "V6=V2-V4: " << v6 << endl;

    // Vector = Vector * Real
    Vector3 v7 = v4*(-2.0);
    cout << "V7=V4*(-2): " << v7 << endl;

    // Vector dot product
    double p = v4*v3;
    cout << "p=V4*V3: " << p << endl;

    Vector3 versX(1,0,0), versY(0,1,0);
    cout << "versX*versY=" << versX*versY << endl;
    cout << "versX*versX=" << versX*versX << endl;

    return 0;
}
