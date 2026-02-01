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
// #include <iostream>
// using namespace std;

// int main() {
// float side, radius, height, length, breadth;
//     float volumeCube, volumeCylinder;
//     float areaTriangle, areaRectangle;

//      cout << "Enter side of cube: ";
//     cin >> side;

//     volumeCube = side * side * side;
//     cout << "Volume of Cube = " << volumeCube << endl;

//      cout << "Enter radius of cylinder: ";
//     cin >> radius;
//     cout << "Enter height of cylinder: ";
//     cin >> height;

//     volumeCylinder = 3.14 * radius * radius * height;
//     cout << "Volume of Cylinder = " << volumeCylinder << endl;

//      cout << "Enter side of equilateral triangle: ";
//     cin >> side;
//     areaTriangle = (1.73 * side * side) / 4;

//     cout << "Area of Equilateral Triangle = " << areaTriangle << endl;

//      cout << "Enter length of rectangle: ";
//     cin >> length;
//     cout << "Enter breadth of rectangle: ";
//     cin >> breadth;
//     areaRectangle = length * breadth;
//     cout << "Area of Rectangle = " << areaRectangle << endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
// double power;
//     double ci,a,p,r,n,t;
//     cout<<"Enter the principle value "<<endl;
//     cin>>p;
//     cout<<"Enter the rate "<< endl;
//     cin>>r;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     cout<<"Enter the time period "<<endl;
//     cin>>t;
//     a = (1+r/(100*n));
//     ci = p*pow(a,n*t);
//     cout<<"Value of compound interest is "<< ci<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
// int a,b,c,d;
//     cout<<"Enter three numbers"<<endl;
//     cin>>a>>b>>c;

//     if(a>b)
//     d=a;
//     else
//     d=b;
//     if(d>c){
//         cout<<"The maximum of three no. is "<<d<<endl;
//     }
//     else{
//         cout<<"The maximum of three no. is "<<c<<endl;
//     }

//     if(a<b)
//     d=a;
//     else
//     d=b;
//     if(d<c){
//         cout<<"Min of three no. is "<<d<<endl;
//     }
//     else{
//         cout<<"Min of three no. is "<<c<<endl;
//     }
//   return 0; 

// }

#include <iostream>
#include <cmath>
using namespace std;

int main(){
float a, b, c;
    float d, root1, root2;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    d = (b * b) - (4 * a * c);
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different\n";
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (d == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and equal\n";
        cout << "Root = " << root1 << endl;
    }
    else {
        cout << "Roots are imaginary (not real)" << endl;
    }  return 0; 
}

    

 