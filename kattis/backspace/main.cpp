#include <iostream>
#include <vector>

using namespace std;

int main(int argc,char ** argv)
{
    string input;
    cin >> input;
    vector<char> chars;
    
    for(int i=0; i<input.length(); i++)
    {
        chars.push_back(input[i]);
    }

    vector<char> new_chars;
    for(int i=0; i<chars.size(); i++)
    {
        new_chars.push_back(chars[i]);
        if (chars[i] == '<')
        {
            new_chars.pop_back();  
            new_chars.pop_back();  
        }
    }

    string str1(new_chars.begin(), new_chars.end());
    cout << str1 << endl;

    return 0;
}