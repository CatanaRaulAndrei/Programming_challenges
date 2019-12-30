/* CERINTA(pbinfo)
Se dă un șir a[1], a[2], …, a[n] de numere naturale și un număr natural k.

Cerința
Să se determine cele mai mari k numere din șir.

Date de intrare
Programul citește de la tastatură numerele n, k, A, B, C, D. Șirul de numere se va genera după formulele:

a[1] = A
a[i] = (B * a[i-1] + C) % D, pentru i=2..n
Date de ieșire
Programul va afișa pe ecran, ordonate crescător, cele mai mari k numere din șir.

Restricții și precizări
1 ≤ n ≤ 5.000.000
1 ≤ k ≤ min(100.000, n)
1 ≤ A, B, C, D ≤ 1.000.000.000

Exemplu
Intrare

10 4 13 23 47 97
Ieșire

55 56 74 96
Explicație
Se obține șirul de numere a = (13, 55, 51, 56, 74, 3, 19, 96, 24, 17). Cele mai mari patru numere sunt 55, 56, 74, 96. 
*/

// Rezolvare fara mini-Heap
#include <iostream>
using namespace std;

// generate string
void generateString(int n, int a[] , int A, int B, int C, int D){
    a[0]=A;
    for(int i=1;i<n;i++){
        a[i]=(B*a[i-1]+C)%D;
    }
}
// display string
void displayString(int n,int a[]){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
// sorting
void mergeArr(int a[], int left, int middle, int right){
    int LeftSide[middle-left+1],RightSide[right-middle];
    for (int i=0;i<(middle-left+1);i++)
        LeftSide[i] = a[left+i];
    for (int j=0;j<(right-middle);j++)
        RightSide[j]=a[middle+1+j];

    int i=0,j=0,k=left;
    while (i < (middle-left+1) && j < (right-middle))
    {
        if (LeftSide[i] <= RightSide[j])
        {
            a[k++] = LeftSide[i++];
        }
        else
        {
            a[k++] = RightSide[j++];
        }
    }

    while (i <(middle-left+1))
    {
        a[k++] = LeftSide[i++];
    }

    while (j < (right-middle))
    {
        a[k++] = RightSide[j++];
    }
}

void mergeSort(int a[], int left, int right)
{
    if (left < right)
    {
        int middle = left+(right-left)/2;
        mergeSort(a,left,middle);
        mergeSort(a,middle+1,right);
        mergeArr(a,left,middle,right);
    }
}
// display last k
void displayLast_k(int n,int a[],int k){
    generateString(n,a,13,23,47,97);
    mergeSort(a,0,n-1);
    for(int i=n-k;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main()
{   int k=4,n=10;
    int a[n];
    displayLast_k(n,a,k);


    return 0;
}


