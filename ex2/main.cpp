#include <iostream>
using namespace std;
#include <string>

void min_max(double vect[], int size,double& min, double& max)
{
    if (size <= 0){
        cout<< "Error en datos";
        return;}

    min = vect[0];
    max = min;

    int i;
    for (i=1; i < size; i++)
    {
        if ( vect[i] > max) {
            max=vect[i];
        }

        if (vect[i] < min) {
            min=vect[i];
        }
    }

}

int main()
{
 // I do not understand what kind of variable is a table, I used like the user send a column of a table(numbers)
 // or a vector of the important values as argument
    double vect[]={45,48,1,61,5004,-20,156};
    double min = 0;
    double max = 0;

    min_max(vect, sizeof(vect)/sizeof(vect[0]), min, max);


    std::cout <<"Min value:"<< min << "\nMax value:" << max << std::endl;
    return 0;
}
