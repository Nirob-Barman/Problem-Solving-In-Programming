#include<iostream>
#include<algorithm>
#include<queue>
#include<iterator>

using namespace std;

bool compare(int a,int b)
{
    return (a>b);
}

int main()
{
    priority_queue<int>pa;
    priority_queue<int>pb;

    int i,n,a;
    scanf("%d",&n);
    vector<int>ve;
    vector<int>::iterator it;
    vector<int>vo;
    vector<int>::iterator ita;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
            ve.push_back(a);
        else
            vo.push_back(a);
    }
    sort(ve.begin(),ve.end());
    sort(vo.begin(),vo.end(),compare);

    for(it=ve.begin();it!=ve.end();it++)
        cout<<*it<<endl;
    for(ita=vo.begin();ita!=vo.end();ita++)
        cout<<*ita<<endl;

}
