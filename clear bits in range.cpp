#include<iostream>
using namespace std;

void clearithbitsinrange(int &n,int i,int j)
{
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=n&mask;
    cout<<n<<"\n";
}

int main()
{
    int n=32;
    int i=1;
    int j=3;
    clearithbitsinrange(n,i,j);
    return 0;
}
