#Insertion Sort in .cpp
#include<iostream>  
using namespace std;  
int main ()  
{    
    int myarray[10] = { 12,4,3,1,15,45,33,21,10,2};   
       
    cout<<"\nInput list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }    
    for(int k=1; k<10; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }  
}

Output:

Input list is

12      4       3       1       15      45      33      21      10      2

Sorted list is

1       2       3       4       10      12      15      21      33      45
