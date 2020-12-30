#include<iostream>
#include<cmath>
using namespace std;

int Ternarysearch(int L[],int left,int right,int key)
{
    if(right - left > 0){
        int midFirst = left + (right-left)/3;
        int midSecond = midFirst + (right-left)/3;

        if(L[midFirst]==key){
            return midFirst;
        }
        if(L[midSecond]==key){
            return midSecond;
        }
        if(key<L[midFirst]){
            return Ternarysearch(L,left,midFirst,key);
        }
        if(key>L[midSecond]){
            return Ternarysearch(L,midSecond+1,right,key);
        }
        return Ternarysearch(L,midFirst,midSecond,key);

    } else {
        return -1;
    }
}

int main()
{
    int L[]={0,1,2,3,4,5,8,13,21,34,55};
    int left=0;
    int right=sizeof(L) / sizeof(L[0]);

    int key =21;
    int x;

    if((x=Ternarysearch(L,left,right,key))== -1){
        cout<<"Key doesnt exist"<<endl;
    }
    else 
    {
        cout<<"the position of the key is : "<<x<<endl;
    }
}