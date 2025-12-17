// count vowels using loop only.

#include<bits/stdc++.h>
using namespace std;

bool linearsearch(char key, string str)
{
    for(int u = 0; u < str.length(); u++)
    {
        if(str[u] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s;
    cin >> s;

    string vowels = "aeiouAEIOU";
    int count = 0;


    for(int i = 0; i < s.length(); i++)
    {
        if(linearsearch(s[i], vowels))
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
