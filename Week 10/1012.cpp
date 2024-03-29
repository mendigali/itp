#include <cstdio>
#include <stack>
using namespace std;
int main()
{
    char ch, t;
    stack<char> st;
    bool ans = true;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &ch);
        if (ans)
        {
            if (ch == '(' || ch == '{' || ch == '[')
                st.push(ch);
            if (st.empty())
                ans = false;
            if (ch == ')' && ans)
            {
                t = st.top();
                st.pop();
                if (t == '[' || t == '{')
                    ans = false;
            }
            if (ch == '}' && ans)
            {
                t = st.top();
                st.pop();
                if (t == '(' || t == '[')
                    ans = false;
            }
            if (ch == ']' && ans)
            {
                t = st.top();
                st.pop();
                if (t == '(' || t == '{')
                    ans = false;
            }
        }
    }
    if (!ans || !st.empty())
        printf("No");
    else
        printf("Yes");
    return 0;
}