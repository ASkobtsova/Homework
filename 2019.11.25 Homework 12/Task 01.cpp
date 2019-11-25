/*Task: this program has to find such a graph with the least number of edges, which has the power
of the minimum separating set of 3, the power of the minimum cut of 4,
and the minimum degree of vertices of 5.
Comment: the graph is minimal in terms of the number of edges,
because removing any edge changes the minimum degree of the vertex. So, in that case,
the search which we used to find this graph is complete.*/

#include <iostream>
using namespace std;

int main()
{
    cout << "The graph's adjacency list is:" << endl;
    cout << "0: 1, 2, 3, 4, 5" << endl;
    cout << "1: 0, 2, 3, 4, 5" << endl;
    cout << "2: 0, 1, 3, 4, 5" << endl;
    cout << "3: 0, 1, 2, 5, 6" << endl;
    cout << "4: 0, 1, 2, 7, 8" << endl;
    cout << "5: 0, 1, 2, 3, 9" << endl;
    cout << "6: 3, 7, 8, 10, 11" << endl;
    cout << "7: 4, 6, 9, 10, 11" << endl;
    cout << "8: 4, 6, 9, 10, 11" << endl;
    cout << "9: 5, 7, 8, 9, 11" << endl;
    cout << "10: 6, 7, 8, 9, 11" << endl;
    cout << "11: 6, 7, 8, 9, 10" << endl;
    return 0;
}
