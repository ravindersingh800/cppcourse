 // count constants

 #include<bits/stdc++.h>
using namespace std;

bool linearsearch(char key, string str)
{
    for(auto ch:str){
        if(ch==key)
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
        char ch = s[i];

        
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            // If NOT vowel → consonant
            if(!linearsearch(ch, vowels))
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
