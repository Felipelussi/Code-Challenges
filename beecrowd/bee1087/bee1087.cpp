#include<iostream>

using namespace std;

int main(){


    int x1, x2, y1, y2;

    do{

    cin >> x1 >> x2 >> y1 >> y2;

    if(x1 == 0 and x2 == 0 and y1 == 0 and y2 ==0)
    {
        return 0;
    }

    if(x1 == y1 and x2 == y2)
    {
        cout << 0 << endl;
    }else if(x1 == y1 || x2 == y2 || abs(y1-x1) == abs(y2 - x2))
    {
        cout << 1 << endl;
    }else
    {
        cout << 2 << endl;
    }
    } while(x1 != 0 and x2 != 0 and y1 != 0 and y2 != 0);

    return 0;
}