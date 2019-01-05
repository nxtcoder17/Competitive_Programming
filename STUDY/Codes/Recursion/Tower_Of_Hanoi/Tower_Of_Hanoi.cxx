#include <iostream>
#include <vector>
#include <stack>
#include <cassert>
using namespace std;

vector<stack<int>>  needles(3);             // As, we already know, there are 3 pegs
int total_moves = 0;                        // Counter for counting number of moves

void Tower_Of_Hanoi(int n, int src, int dst, int tmp)
{
    if (n > 0) {
        // The Largest disc is at bottom, so it can be only moved to dst needle,
        // if all (n-1) discs are over the PLACEHOLDER Needle
        
        // So, FIRST move the n-1 discs to the tmp needle
        Tower_Of_Hanoi(n-1, src, tmp, dst);

        printf("[%d]: Moving disc(value: %d) from NEEDLE %d to NEEDLE %d\n",
                    total_moves+1, needles[src].top(), src, dst);

        // Move the last disc to dst needle
        needles[dst].push(needles[src].top());    
        needles[src].pop();
        total_moves += 1;

        // FINALLY, move the (n-1) discs from tmp to dst needle
        Tower_Of_Hanoi(n-1, tmp, dst, src);
    }
}

int main()
{
    int src = 0;                // Index position for SOURCE
    int tmp = 1;                // Index position for placeholder 
    int dst = 2;                // Index position for DESTINATION

    cout << "Enter number of Rings on src needle: ";
    int n;
    cin >> n;

    // Populating the src needle (bottom up fill)
    for (int i=n; i >= 1; --i)
        needles[src].push(i);

    // We used Assertions to prove 
    //      Before: Only src has all the discs
    //      After:  Only dst has all the discs

    assert(needles[tmp].empty() && needles[dst].empty());
    Tower_Of_Hanoi(n, src, dst, tmp);
    assert(needles[tmp].empty() && needles[src].empty());
}
