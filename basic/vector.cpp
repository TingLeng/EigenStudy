#include<iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

int main()
{
    Vector3f m;
    m <<1.0,2.0,3.0;
    cout << m << endl << endl;

    RowVector2f n;
    n <<1.0,2.0;
    cout << n <<endl<<endl;
    cout << m*n << endl;
   

}