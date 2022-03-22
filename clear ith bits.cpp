#include<iostream>
using namespace std;
void clearithbit(int &n,int i)
{
    int mask=~(1<<i);
    n=n&mask;
    cout<<n<<"\n";
}
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
clearithbit(n,i);
}
