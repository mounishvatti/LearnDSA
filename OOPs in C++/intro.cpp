#include <bits/stdc++.h>
using namespace std;

class evaluate{
    void print(){}
    void calSum(){}
};

class Example{
    public: // padding and greed alignment
    int i; // 4bytes
    char c; // 1byte
    short s; // 2bytes 
    double d; // 8bytes
    long double l; // 16bytes
};

class Rectangle
{
    // properties
public:
    double width, height;

    Rectangle(double width, double height){ // parameterised constructor
        this->width = width;
        this->height = height;
    }

    // methods
public:
    void setvalues(double width, double height)
    { // setter - to set the value
        this->width = width;
        this->height = height;
    }

    double getArea()
    { // getter - to fetch
        return width * height;
    }

    double getPerimeter()
    {
        return 2 * (width + height);
    }
    void displayValues(){
        double a = getArea();
        double p = getPerimeter();

        cout << "area: "<< a << "\n " << "perimeter: " << p << endl;
    }
};

/*
    Access modifiers:
    1. public - accessible throughout the program (default)
    2. private - accessible within the class
    3. protected -
*/



int main()
{

    // creation of object statically
    Rectangle rect(3,5);
    // rect.setvalues(3.56,5.7);

    rect.width = 3;
    rect.height = 5;

    // creation of an object dynamically
    Rectangle *rect2 = new Rectangle(4.54, 8.22);

    // (*rect2).setvalues(4.54, 8.22); 

    (*rect2).width = 4.54;
    (*rect2).height = 8.22;

    // rect2->setvalues(4.54, 8.22); 

    cout << "Area of rectangle is : " << rect.getArea() << endl;
    cout << "Perimeter of rectangle is : " << rect.getPerimeter() << endl;
    // cout << "type: " << typeid(d).name() << endl;
    cout << "size of rect: " << sizeof(rect) << endl;

    cout << "Area of rectangle is : " << (*rect2).getArea() << endl;
    cout << "Perimeter of rectangle is : " << (*rect2).getPerimeter() << endl;
    // cout << "type: " << typeid(d).name() << endl;
    cout << "size of rect: " << sizeof(rect) << endl;

    (*rect2).displayValues();

    Example e;
    cout << "size of class Example: " << sizeof(e) << endl;
    return 0;

    delete(rect2);
}