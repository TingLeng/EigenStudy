#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    MatrixXf m(2,3);
    m << 1, 2, 3, 4, 5, 6;
    cout << "org matrix\n" << m << endl;
    cout << "transpose m.transpose()\n" << m.transpose() << endl;
    cout << "m after transpose\n" << m << endl; 
    m.transposeInPlace();
    cout << "m after transposeInPlace\n" << m << endl; 

}