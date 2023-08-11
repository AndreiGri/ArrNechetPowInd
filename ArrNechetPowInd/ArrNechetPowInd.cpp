#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int i = 0;
    const int n = 10;
    int arr[n];
    while (i < n) {
        if (i % 2 == 0) {
            arr[i] = i;
            cout << arr[i] << " ";
        }
        else {
            arr[i] = i * i;
            cout << arr[i] << " ";
        }
        i++;
    }
    system("pause > nul");
    return 0;
}
