#include <iostream>

using namespace std;

void mult_table(int low_rows,int high_rows,int low_columns,int high_columns,int step_rows,int step_column){
    int i,j;
    for (i = low_rows-1; i <=high_rows; i=i+step_rows)
        {


            //cout << j << "x12 TABLE:\t";

            for (j = low_columns-1; j <= high_columns; j=j+step_column)
            {
                if(i==low_rows-1 && j==low_columns-1){
                    cout << "TABLE:\t";
                }
                if(i==low_rows-1 && j!=low_columns-1){
                    cout << j<< "\t";
                }
                if(j==low_columns-1 && i!=low_rows-1){
                    cout << i<< "\t";
                }
                if(i!=low_rows-1 && j!=low_columns-1){
                    cout << i*j <<"\t";
                }
            }
            cout << "\n";
        }
}

int main()
{
    mult_table(4,13,2,25,2,3);
    return 0;
}
