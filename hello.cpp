// #include <iostream>
// using namespace std;

// int main(){
//     double num1, num2;
//     char op;
//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter operator ";
//     cin >> op;

//     cout << "Enter second number: ";
//     cin >> num2;

//     switch (op) {
//         case '+':
//             cout << "Result = " << num1 + num2;
//             break;

//         case '-':
//             cout << "Result = " << num1 - num2;
//             break;

//         case '*':
//             cout << "Result = " << num1 * num2;
//             break;

//         case '/':
//             if (num2 != 0)
//                 cout << "Result = " << num1 / num2;
//             else
//                 cout << "Error: Division by zero not allowed";
//             break;
//         default:
//             cout << "Invalid operator";
//     }
//     return 0;}
#include <iostream>
using namespace std;

int main() {
float side, radius, height, length, breadth;
    float volumeCube, volumeCylinder;
    float areaTriangle, areaRectangle;

     cout << "Enter side of cube: ";
    cin >> side;

    volumeCube = side * side * side;
    cout << "Volume of Cube = " << volumeCube << endl;

     cout << "Enter radius of cylinder: ";
    cin >> radius;
    cout << "Enter height of cylinder: ";
    cin >> height;

    volumeCylinder = 3.14 * radius * radius * height;
    cout << "Volume of Cylinder = " << volumeCylinder << endl;

     cout << "Enter side of equilateral triangle: ";
    cin >> side;
    areaTriangle = (1.73 * side * side) / 4;

    cout << "Area of Equilateral Triangle = " << areaTriangle << endl;

     cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    areaRectangle = length * breadth;
    cout << "Area of Rectangle = " << areaRectangle << endl;
    return 0;
}

    

 