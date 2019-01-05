#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'

int number_of_sols = 0;
class Position
{
    public:
        int row;
        int col;

        Position() { }
        Position(int r, int c) {
            row = r;
            col = c;
        }
};

bool put_queen(int n, int row, vector< Position >& positions)
{
    if (row == n)
        return true;

    bool found_a_place = false;
    for(int col=0; col < n; col++) {
        found_a_place = true;

        for (int queen=0; queen < row; queen++) {
            if (col == positions[queen].col || 
                    (row - col) == positions[queen].row - positions[queen].col ||
                    (row + col) == positions[queen].row + positions[queen].col) {
                found_a_place = false;
            }
        }

        if (found_a_place) {
            Position * t = new Position(row, col);
            positions[row] = *t;
            if (put_queen(n, row+1, positions))
                return true;
        }
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // cout << "Enter the number of queens: ";
    int n;
    // cin >> n;
    n = 4;
    vector< Position > positions(n);
    put_queen(n, 0, positions);
    for (Position x: positions) {
        cout << "(" << x.row << ", " << x.col << ")" << endl; 
    }
}
