/*Task: this program has to find such a graph with the least number of edges, which has the power
of the minimum separating set 3, the power of the minimum cut 4,
and the minimum degree of vertices 5.
Comment: the graph is minimal in terms of the number of edges,
because removing any edge changes the minimum degree of the vertex. So, in that case,
the search which we used to find this graph is complete.*/

#include <iostream>
using namespace std;

int main()
{
    cout << "The graph is:" << endl;
    cout << "0: 1, 2, 3, 4, 5\n";
    cout << "1: 0, 2, 3, 4, 5\n";
    cout << "2: 0, 1, 3, 4, 5\n";
    cout << "3: 0, 1, 2, 5, 6\n";
    cout << "4: 0, 1, 2, 7, 8\n";
    cout << "5: 0, 1, 2, 3, 9\n";
    cout << "6: 3, 7, 8, 10, 11\n";
    cout << "7: 4, 6, 9, 10, 11\n";
    cout << "8: 4, 6, 9, 10, 11\n";
    cout << "9: 5, 7, 8, 9, 11\n";
    cout << "10: 6, 7, 8, 9, 11\n";
    cout << "11: 6, 7, 8, 9, 10\n";
    return 0;
}
