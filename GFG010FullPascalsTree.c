#include <iostream>
using namespace std;

int main()
{
    int n,i,x,line;
    cout << "Enter a row number for Pascal's Triangle: ";
    cin >> n; 
    for(line=0;line<=n;line++)
    {
        x=1;
        for(i=0;i<=line;i++)
        {
            cout << x << '\t';
            x = x * (line - i) / (i + 1);
        }
    cout << endl;
    }
    return 0;
}