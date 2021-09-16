#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int> vetor){
    int aux = 0;
    for (int i = 0; i < vetor.size(); i++){
        for (int j = 0; j < vetor.size(); j++){
            if (vetor[i]<vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }   
}