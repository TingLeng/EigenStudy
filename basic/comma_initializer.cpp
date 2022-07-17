#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    MatrixXf m = MatrixXf::Random(2, 3);
    cout << m << endl << endl;
    m = (MatrixXf(2,2)<<0,1,1,0).finished() * m;
    cout << m << endl;
    return 1;

}