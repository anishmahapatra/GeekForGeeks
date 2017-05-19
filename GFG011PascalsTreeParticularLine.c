int main()
{
    cout << "Enter a row number for Pascal's Triangle: ";
    cin >> line; 
    int x = 1;
    for (int i = 0; i <= line; i++)
    {
        cout << x << '\t';
        x = x * (line - i) / (i + 1);
    }
    cout << endl;
    return 0;
}
