#include <iostream>
using namespace std;
class c1
{
    int i;
    public:
    void set_i(int j)
    {
        i=j;
    }
    int get_i()
    {
        return i;
    }
};
int main ()
{
    c1 ob[3];
    int i;
    for(i=0;i<<ob[i].get_i()<<"\n");
    return 0;
}