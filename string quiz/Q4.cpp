//  convert all lowercase letter to upercase :-

#include <bits/stdc++.h>
using namespace std;
bool linearsearch(char key,string str)
{
    for(auto ch: str)
    {
        if(ch == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str;
    cin >> str;
    string Lowercase = "abcdefghijklmnop";

    int count = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(linearsearch(str[i], Lowercase))   
        {
            count++;
            str[i] = str[i] - 32;    
        }
    }

    cout << "Uppercase String: " << str << endl;
    cout << "Lowercase Count: " << count << endl;

    return 0;
}
