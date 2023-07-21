#include<iostream>
#include<string>

using namespace std;

int main(){


    string entrada, saida;
    int seq1, seq2, num, i, len, numA;
    bool trocaSeq, trocaSeq2;
    

    cin >> num;

    while(num > 0){
        
        cin >> entrada;

        len = entrada.size();
        trocaSeq = false;
        trocaSeq2 = false;
        
        seq1 = 0;
        seq2 = 0;
        saida = "k";
        
        for(i = 0; i < len; i++)
        {   
            if(entrada[i] != 'a' && entrada[i-1] == 'a') trocaSeq = true;

            if(trocaSeq2 && entrada[i] != 'a' && entrada[i-1] == 'a')
            {

                numA = seq1*seq2;
                for(int j = 0; j < numA; j++)
                    saida += "a";
                cout << saida << endl;
                break;
            }

            if(!trocaSeq && entrada[i] == 'a')
            {
                seq1++;
            }
            
            if(trocaSeq && entrada[i] == 'a')
            {
                seq2++;
                trocaSeq2 = true;
            }
        }

        num--;
    }
    
    return 0;
}