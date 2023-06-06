#include<iostream>
using namespace std;
void swap(int*,int*);
void sort(int*,int*,float*,int);
void fraction_knapsack(int*,int*,float*,int ,int);
int main()
{
    int n,c;
    cout<<"Enter the no. of items & knapsack capacity"<<"/n";
    cin>>n>>c;
    int w[n],v[n];
    float vbyw[n];
    cout<<"please enter weight & value pairs of "<<n<<"items";
    for(int i=0;i<n;i++)
        {
            cin>>w[i]>>v[i];
            vbyw[i]=(float)v[i]/w[i];
        }
    fraction_knapsack(w,v,vbyw,n,c);
    return 1;

}

 int fraction_knapsack(int w[],int v[],float vbyw[],int n,int c)
    {
        int rem_cap=c;int val_earned=0,i;
        sort(w,v,vbyw,n);
        for(int i=0;i<n;i++)
            {
                if(rem_cap-w[i]>=0)
                  {
                    rem_cap-=w[i];
                    val_earned+=v[i];
                  }
                else
                  {
                    val_earned+=vbyw[i]*rem_cap;
                    break;
                  }
            }
        for(int j=0; j<i; j++)
           {
            cout<<"weight & value taken:"<<w[j]<<v[j];
           }
        cout<<"and"<<rem_cap<<vbyw[i]*rem_cap;

    }
