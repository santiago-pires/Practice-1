#include <iostream>

using namespace std;

double circunference(double diameter){
    if (diameter<0){
        cout<<"Error in diameter for perimeter\n";
        return -1;
    }
    return 3.141592654*diameter;
}
double area(double diameter)
{
    if (diameter<0){
        cout<<"Error in diameter for area\n";
        return -1;
    }
    return 3.141592654*(diameter*diameter/4);
}

int main()
{
    double diameter = 0;

    // read diameter
    cout << "Diameter of circle:  \n";
    cin >> diameter;

    double circ=circunference(diameter);
    double ar=area(diameter);
    cout << "Area: " << ar << endl<<"\n";
    cout << "Perimeter: " << circ << endl<<"\n";

        return 0;

}
