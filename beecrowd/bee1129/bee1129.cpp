#include<iostream>

using namespace std;

int main(){


    int n, i, j, contmaior, contmenor, val;

    while(cin >> n)
    {
        for(i = 0; i < n; i++){
            contmaior = 0;
            contmenor =0;
            for(j = 0; j < 5; j++ )
            {

            cin >> val;
            if(val > 127) contmaior++;
            else contmenor = j;
              
            }

            if(contmaior == 4) cout << (char)(contmenor + 65) << endl;
            else cout << '*' << endl;

            
        }
    }

    return 0;
}