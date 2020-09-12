#include <stdio.h>

#define SIZE 10

int main()
{
    int vector[SIZE], vector_of_frequence[SIZE];
    int number_of_vector=0, frequence_of_number=1;
    //number of vector: variavel de auxílio que recebe determinado valor do vetor
    for(unsigned i=0; i<SIZE; i++)
    {
        scanf("%d",&vector[i]);
    }
    for(unsigned i=0; i<SIZE; i++)
    {
        number_of_vector = vector[i];
        frequence_of_number = 1; //contador de frequencia de um número
        for(unsigned j=i+1; j<SIZE; j++)
        {
            if(number_of_vector == vector[j])
            {
                frequence_of_number++;
                vector_of_frequence[j] = 0;
            }
        }
        if(vector_of_frequence[i] != 0)
        {
            vector_of_frequence[i] = frequence_of_number;
        }
    }
    for(unsigned i=0; i<SIZE; i++)
    {
        if(vector_of_frequence[i] != 0)
        {
            printf("%d repete: %d vez(es)\n",vector[i],vector_of_frequence[i]);
        }
    }
    return 0;
}
