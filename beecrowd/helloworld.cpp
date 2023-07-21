#include <iostream>
#include<string>
#include<typeinfo>

using namespace std;

int main()
{
    int i, j, size1;
    int matriz[4][80];
    char atom;
    unsigned long int c;
    unsigned long int l;
    string final = "";
    string entradas;



    for (int i = 0; i < 4; i++)
    {
        cin >> entradas;

        for (j = 0; j < entradas.size(); j++)
        {
            matriz[i][j] = entradas[j] - '0';

        }

    }

    size1 = entradas.size();

    /*  for (i = 0; i < 4; i++)
      {
          for (j = 0; j < size1; j++)
          {
              cout << matriz[i][j];
          }
      }
  */

    c = matriz[0][0] * 1000 + matriz[1][0] * 100 + matriz[2][0] * 10 + matriz[3][0];
    //  cout << c;

    l = matriz[0][size1 - 1] * 1000 + matriz[1][size1 - 1] * 100 + matriz[2][size1 - 1] * 10 + matriz[3][size1 - 1];
    // cout << l;


    for (j = 1; j < size1 - 1; j++)
    {

        atom = (c * (matriz[0][j] * 1000 + matriz[1][j] * 100 + matriz[2][j] * 10 + matriz[3][j]) + l) % 257;

        //char* atom1 = &atom;

        final += atom;


    }

    cout << final << endl;

    return 0;

}