#include<iostream>
using namespace std;

class Point3D
{
    int x, y, z;

public:  
    Point3D()
    {
        x = 0;
        y = 0;
        z = 0; 
    }

    Point3D(int x1, int y1, int z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }

    void Output()
    {
        cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
    }

    void Init(int x1, int y1, int z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }
};

int main()
{
   
    Point3D point1;
    point1.Output(); 

    Point3D point2(1, 2, 3);
    point2.Output(); 
    
    point1.Init(5, 6, 7);
    point1.Output();
}

