#include <iostream>
#include <unordered_map>
#include <set>

using namespace std;

struct name
{
    string name;
    int likeability;
};

int main(int argc, char **argv)
{

    int N;
    name temp_struct;
    string temp_date;
    unordered_map<string, name> bdays;
    set<string> names;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> temp_struct.name;
        cin >> temp_struct.likeability;
        cin >> temp_date;

        // checks if the temp_date is in the map
        if (bdays.count(temp_date) > 0)
        {
            // auto για να καθορίσει μόνο του τον τύπο, κάνει ανάκτηση με βάση το key temp_date και σου δίνει το value
            auto item = bdays[temp_date];
            if (item.likeability < temp_struct.likeability)
            {
                bdays[temp_date] = temp_struct;
            }
        }
        else
        {
            bdays[temp_date] = temp_struct;
        }
    }

    for (auto &pair : bdays)
    {
        names.insert(pair.second.name);
    }

    cout << names.size() << endl;
    for (auto &str : names)
    {
        cout << str << endl;
    }

    return 0;
}