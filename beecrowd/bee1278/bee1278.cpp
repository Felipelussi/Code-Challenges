#include <iostream>
#include <string>
#include<array>

using namespace std;

int main()
{


    string vetor[105];
    int n, i = 0,  aux;
    long unsigned int j, maior;
    bool primeira = false;



    while(cin >> n)

    {

        if(n == 0) return 0;

        if(primeira) cout << endl;

        cin.ignore();

        for(i = 0; i < n; i++)
        {

            getline(cin, vetor[i]);

            for(j = 1; j < vetor[i].length(); j++)
            {

                if(vetor[i].at(j) == ' ' and vetor[i].at(j-1) == ' ')
                {
                    vetor[i].erase(j, 1);
                    j--;

                }
            }
            if(vetor[i].at(0) == ' ') vetor[i].erase(0,1);
            if(vetor[i].at(vetor[i].length() - 1) == ' ') vetor[i].erase(vetor[i].length() - 1, 1);


            if(i > 0)
            {
                if(vetor[i].length() > maior) maior = vetor[i].length();
            }
            else
            {
                maior = vetor[i].length();
            }

        }

        for(i = 0; i < n; i++)
        {
           aux = maior - vetor[i].length();

            vetor[i].insert(vetor[i].begin(),aux,' ');

            if(i == n-1) 
            {
                cout << vetor[i];
                break;
            }
            cout << vetor[i] << endl;
        }
        
        primeira = true;

    }

}
