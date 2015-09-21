#include <iostream>
#include <stack>

using namespace std;

void move(stack<int>& from, stack<int>& to)
{
    to.push(from.top());
    from.pop();
}

int main()
{
    stack<int> a, b, c;

    for(int i=4; i>0; i--){
        a.push(i);
    }

    move(a,c);
    move(a,b);
    move(c,b);
    move(a,c);
    move(b,a);
    move(b,c);
    move(a,c);
    move(a,b);
    move(c,b);
    move(c,a);
    move(b,a);
    move(c,b);
    move(a,c);
    move(a,b);
    move(c,b);

    while(!b.empty()){
        cout << b.top() << endl;
        b.pop();
    }

    return 0;
}



