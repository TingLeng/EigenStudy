#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    Vector3f v(1,2,3);
    Vector3f w(0,1,2);
    cout << "Dot product: v dot w\n" << v.dot(w) << endl;
    float dp = v.adjoint()*w;
    cout << "Dot product via matrix product\n" << dp << endl;
    cout << "cross product:\n" << v.cross(w) << endl;

    Matrix4d m = Matrix4d::Random();
    cout << m << endl;
    cout << "sum: " <<  m.sum() << endl;
    cout << "mean: " << m.mean() << endl;
    cout << "minCoeff: " << m.minCoeff() << endl;
    cout << "maxCoeff: " << m.maxCoeff() << endl;
    cout << "trace: " << m.trace() << endl;

    ptrdiff_t i, j;
    double minVal = m.minCoeff(&i, &j);
    cout << "min value of m: " << minVal << ", at (" << i << "," << j << ")" << endl;
}