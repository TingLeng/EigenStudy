#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
	Matrix3d m = Matrix3d::Random();
	Matrix3d n = Matrix3d::Constant(1.2);
	Matrix3d k = (m + n) * 50;
	Vector3d v(1,2,3);
	cout << m << endl;
	cout << n << endl;
	cout << k << endl;
	cout << v << endl;
	cout << "k*v: "<< endl << k*v << endl;
}
