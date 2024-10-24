#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    
    cin >> n;
    cin.ignore();
    vector<string> sentences;
    for (int i = 0; i < n; i++)
    {
        string temp;
        getline(cin, temp);
        //cin.ignore();
        sentences.push_back(temp);
    }

    for (int j=0; j<n; j++)
    {
        if (!sentences[j].size())
            continue;
        sentences[j][0]= toupper(sentences[j][0]);
        for(int i=1; i<sentences[j].length(); i++)
        {
            sentences[j][i]= tolower(sentences[j][i]);
        }
    }

   for(int i=0; i<n; i++)
    {
        cout << sentences[i] << endl;
    }
    return 0;
}
