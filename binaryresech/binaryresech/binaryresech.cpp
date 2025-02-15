
#include <iostream>
using namespace std;

int bineryreserch(int *dad, int key,int left, int right) {
    while (right - left > 1) {
        int num = (right + left) / 2;
        if (dad[num] < key) {
            left = num;
        }
        else if (dad[num] > key) {
            right = num;
        }
        else { return num; }
    }
    return -1;
}



int main()
{

    int *dad = new int[100];
    int i = 1;
    while (i < 101) {
        dad[i-1] =i ;
        i++;
    }
    int key;
    cin >> key;
    int left = 0;
    int right = 100;
    int b=bineryreserch(dad, key, left, right);
    cout << b;
}


