#include<iostream>
using namespace std;
void updateithbit(int &n,int &i)
{
    int mask=(-1<<i);
    n=n&mask;
    cout<<n<<"\n";
}
int main()
{
    int n=15;
    int i=2;
    updateithbit(n,i);
    return 0;
}
