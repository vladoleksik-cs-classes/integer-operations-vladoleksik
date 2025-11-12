#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main()
{
    int x(0), y(0);
    int s[]="Hi!";
    fin >> x >> y;
    for(int i=0;i<strlen(s);i++);
    if(x=1)
        fout << -1 << '\n';
    return 0;
}
