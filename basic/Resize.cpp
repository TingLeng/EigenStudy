#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    MatrixXd m(3,4);
    m << 0,1,2,3,
         4,5,6,7,
         8,9,10,11;
    cout << "m is " << m.rows() <<"x" << m.cols()<< endl;
    cout << m << endl;

    m.resize(4,3);
    cout << "m is " << m.rows() <<"x" << m.cols() << endl;
    cout << m << endl;

}