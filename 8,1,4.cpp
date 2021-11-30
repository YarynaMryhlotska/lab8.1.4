#include <iostream>
#include <string>
using namespace std;
bool Include(string str)
{
    if (str.find("SQ") != -1 || str.find("QS") != -1)
        return 1;
    else
        return 0;
}
string Change(string& str)
{
    while (str.find("SQ") != -1)
        str = str.replace(str.find("SQ"), 2, "***");
    while (str.find("QS") != -1)
        str = str.replace(str.find("QS"), 2, "***");

    return str;
}
int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    if (Include(str))
    {
        cout << "yes" << endl;
        cout << Change(str);
    }
    else
        cout << "no" << endl;
    cout << endl;
}