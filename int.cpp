#include<iostream>
using namespace std;
int revers(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}
int main()
{
    int num;
    cin>>num;
    cout<<revers(num);
    return 0;
}
