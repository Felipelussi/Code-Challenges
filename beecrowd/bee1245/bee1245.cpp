#include<iostream>

using namespace std;

int main(){


    int n, m, i, cont;
    char l;

    while(cin >> n)
    {
        
       int  d[62] = {0}, e[62] = {0};

      for(i = 0; i < n; i++)
        {
            cin >> m >> l;

            if(l == 'D') d[m] += 1;
            else e[m] += 1;
        }

        cont = 0;

        for(i = 30; i <= 60; i++)
        {
            if(e[i] < d[i]) cont += e[i];
            else cont += d[i];
        }

        cout << cont << endl;
    }

    return 0;
}