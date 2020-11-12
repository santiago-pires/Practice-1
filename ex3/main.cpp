#include <iostream>
using namespace std;

int fibonacci_sequence(int rank)
{
    if (rank<= 1)
        return rank;
    return fibonacci_sequence(rank-1)+fibonacci_sequence(rank-2);
}

int main ()
{
    int rank;
    cout<<"Input rank of sequence:\n";
    cin>>rank;
    cout << fibonacci_sequence(rank)<<"\n";
    return 0;
}
