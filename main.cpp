#include <fstream>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main()
{
    int x(0), y(0);
    fin >> x >> y;
    if(x=1)
        cout << -1 << '\n';
    return 0;
}
