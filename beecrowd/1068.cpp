#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool arepair(char opening,char closing)
{
    if(opening=='(' && closing==')')
        return true;
    else if(opening=='{' && closing=='}')
        return true;
    else if(opening=='[' && closing==']')
        return true;
    else
        return false;
}

bool arebalance(string expression)
{
    stack<char>s;

    for(int i=0;expression[i]!='\0';i++)
    {
        if(expression[i]=='(' || expression[i]=='{' || expression[i]=='[')
            s.push(expression[i]);
        else if(expression[i]==')' || expression[i]=='}' || expression[i]==']')
        {
            if(s.empty() || !arepair(s.top(),expression[i]))
                return false;
            else
                s.pop();
        }
    }
    return s.empty()?true:false;
}

int main()
{
    string expression;
    while(cin>>expression)
    {
        if(arebalance(expression))
            printf("correct\n");
        else
            printf("incorrect\n");
    }
}
