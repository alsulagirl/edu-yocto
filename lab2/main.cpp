#include <iostream>
#include <fstream>
#include "hellocmake.h"
#include "quicksort.h"

using namespace std;

int main()
{
    hello();
    ifstream file("f.csv");
    int n = 5000;
    int *mass = new int[n];

    for (int i=0; i<n; i++)
    {
        file>>mass[i];
    }

    for (int i=0; i<10; i++)
    {
        cout<<mass[i]<<endl;
    }

    QuickSort mysort;
    mysort.quickSort(mass, 0, n-1);

    for (int i=0; i<10; i++)
    {
        cout<<"sorts    " << mass[i]<<endl;
    }

    file.close();
    return 0;
}
