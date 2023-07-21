#include<iostream>
#include<string>

using namespace std;

int main(){

    string entrada, saida;

    int n, len, i, contOp;

    cin >> n;

    while(n > 0)
    {
        cin >> entrada >> saida;
        len = entrada.size();
        contOp = 0;

        while(len >= 0)
        {
            int ent = (int)entrada[len];
            int sai = (int)saida[len];

            if(ent != sai)
            {
                if(sai - ent > 0) contOp += sai-ent;
                else
                {
                    contOp += ('z' - ent) + 1 + (sai - 'a'); 
                }                
            }
            len--;
        }                   

        n--;
         cout << contOp << endl;
    }

    return 0;
}