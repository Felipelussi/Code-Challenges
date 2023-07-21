
#include<iostream>

using namespace std;

int main(){


    int n, arrayn[10004], cont;

    do{

    cin >> n;

    if(n == 0) return 0;

    cont = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arrayn[i];

    }

    arrayn[n] = arrayn[0];
    arrayn[n+1] = arrayn[1];

     for(int i = 2; i <= n+1; i++)
    {
        if(arrayn[i] < arrayn[i-1] and arrayn[i-1]> arrayn[i-2]) cont++;

        else if( arrayn[i] > arrayn[i-1] and arrayn[i-1] < arrayn[i-2]) cont++;

    }
    cout << cont << endl;


    } while(n!=0);

    return 0;
}
