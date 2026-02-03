#include<iostream>
using namespace std;
void msa(int *arr1, int *arr2,int n1,int n2){
    int ans[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(aa1[i]< arr[j]) ans[k++]=arr1[i++];
        else ans[k++] = arr2[j++];
    }
    while(i<n1) ans[k++] arr1[i++];
    while(i<n2) ans[k++] arr2[j++];
}