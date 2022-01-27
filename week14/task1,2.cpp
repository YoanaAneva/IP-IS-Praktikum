#include <iostream>
#include <cmath>
using namespace std;

//task 1
struct Rectangle
{
    double a, b;

    void createRectangle()
    {
        cout << "Enter length: ";
        cin >> a;
        cout << "Enter width: ";
        cin >> b;
    }

    void print()
    {
        cout << "Length: " << a << endl;
        cout << "Width: " << b << endl;
    }

    double radius()
    {
        return sqrt(a * a + b * b) / 2;
    }

     double perimeter()
    {
        return 2 * a + 2 * b;
    }

    double area()
    {
        return b * a;
    }
};

//task 2
struct Point
{
    int x, y;

    void createPoint()
    {
        do
        {
            cout << "Enter point coordinates" << endl << "x: ";
            cin >> x;
        } while (x < 0 || x > 100);
        do
        {
            cout << "y: ";
            cin >> y;
            cout << endl;
        } while (y < 0 || y > 100);
    }

    void printPoint()
    {
        cout << "(" << x << " ; " << y << ")" << endl;
    }
};

bool areParallel(Point p1, Point p2)
{
    if(p1.x == p2.x || p1.y == p2.y)
        return true;

    return false; 
}

double getDistance(Point p1, Point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

void findShape(Point p1, Point p2, Point p3, Point p4)
{
    if (areParallel(p1, p2) && areParallel(p2, p3) && areParallel(p3, p4) && areParallel(p4, p1))
    {
        if (getDistance(p1, p2) == getDistance(p2, p3))
            cout << "Square";
        else
            cout << "Rectangle";
    }
    else
        cout << "Other";
}

int main()
{
    //task1
    Rectangle rectangle;
    rectangle.createRectangle();
    rectangle.print();
    cout << "Radius: " << rectangle.radius() << endl;
    cout << "Perimeter: " << rectangle.perimeter() << endl;
    cout << "Area: " << rectangle.area() << endl;


    // Point A, B, C, D;
    // cout << "A: " << endl; A.createPoint();
    // cout << "B: " << endl; B.createPoint();
    // cout << "C: " << endl; C.createPoint();
    // cout << "D: " << endl; D.createPoint();

    // findShape(A,B,C,D);
}