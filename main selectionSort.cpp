#include<iostream>
using namespace std;
int findSmallest (int[],int);
int main ()
{
    int myarray[500000];
    int pos,temp,pass=0;
    cout<<"\n Input list of elements to be Sorted\n" << endl;
    for(int i=0; i<50000; i++)
    {
        myarray[i] = rand();
        cout<<myarray[i]<<"\t";
    }
    for(int i=0; i<50000; i++)
    {
        pos = findSmallest (myarray,i);
        temp = myarray[i];
        myarray[i]=myarray[pos];
        myarray[pos] = temp;
        pass++;
    }
    cout << endl <<"\n Sorted list of elements is\n";
    for(int i=0; i<50000; i++)
    {
        cout<<myarray[i]<<"\t";
    }
    cout<<"\nNumber of passes required to sort the array: " <<pass;
    return 0;
}

int findSmallest(int myarray[],int i)
{
    int ele_small,position,j;
    ele_small = myarray[i];
    position = i;
    for(j=i+1; j<50000; j++)
    {
        if(myarray[j]<ele_small)
        {
            ele_small = myarray[j];
            position=j;
        }
    }
    return position;
}
